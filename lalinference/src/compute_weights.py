import numpy as np
import sys
from math import ceil
from optparse import OptionParser

data_dir = './'
# load in data from file

parser = OptionParser(usage="usage: %prog [options]",
                          version="%prog")
parser.add_option("-d", "--data", type='string',
                      action="append", 
                      dest="data_file",
                      help="data file",)
parser.add_option("-p", "--psd", type='string',
                      action="append", # optional because action defaults to "store"
                      dest="psd_file",
                      help="psd file",)
parser.add_option("-t", "--time_prior", type=float,
                      action="store", # optional because action defaults to "store"
                      dest="dt",
                      help="width of time prior",)
parser.add_option("-i", "--ifo", type='string',
                      action="append", 
                      dest="IFOs",
                      help="list of ifos",)
parser.add_option("-s", "--seglen", type=float,
                      action="store", 
                      dest="seglen",
                      help="segment length",)
parser.add_option("-f", "--fLow", type=float,
                      action="store",
                      dest="fLow",
                      help="low frequency cut off",)
parser.add_option("-T", "--delta_tc", type=float,
                      action="store",
                      dest="delta_tc",
                      help="width of tc subdomain",)
parser.add_option("-B", "--basis-set", type='string',
                      action="store",
											dest="basis_set_path",
											help="reduced basis matrix",)
parser.add_option("-V", "--invV", type='string',
											action="store",
											dest="invV_path",
											help="inverse of the Vandermonde matrix",)
(options, args) = parser.parse_args()

#basis_set = np.fromfile("/Users/vivien/mcmc/rom/TF2_ROM_40_1024/basis_complex_conjugate.dat", dtype = complex)
basis_set = np.fromfile(options.basis_set_path, dtype = complex)
basis_set = basis_set.reshape(31489, 965)
#invV = np.fromfile("/Users/vivien/mcmc/rom/TF2_ROM_40_1024/invV_complex_conjugate.dat", dtype=complex)
invV = np.fromfile(options.invV_path, dtype=complex)
invV =invV.reshape(965, 965)

def BuildWeights(data, rb, deltaF, invV):

        ''' for a data array, PSD and reduced basis compute roq weights
        
        rb: reduced basis element
        data: data set 
        PSD: detector noise power spectral density (must be same shape as data)
        deltaF: integration element df
        invV: A^{-1}, the inverse Vandermonde matrix

        '''

        # compute inner products <rb,data> = \int data.conj * rb 
        E = np.dot(rb.transpose(), data.conjugate()) * deltaF * 4.

        # compute data-specific weights
        weights = np.dot(invV.transpose(), E)

        return weights.T
##################################

relative_tc_shift = options.seglen - 2. 

# loop over ifos 

i=0

for ifo in options.IFOs:

	dat_file = np.column_stack( np.loadtxt(options.data_file[i]) )
	data = dat_file[1] + 1j*dat_file[2]
	fseries = dat_file[0]
        deltaF = fseries[1] - fseries[0]
	fseries = fseries[int(options.fLow/deltaF):len(fseries)]
	data = data[int(options.fLow/deltaF):len(data)]


	psdfile = np.column_stack( np.loadtxt(options.psd_file[i]) )
	psd = psdfile[1]
	psd = psd[int(options.fLow/deltaF):len(psd)]
	data /= psd


	# print len(data),len(psd),len(basis_set)

	assert len(data) == len(psd) == len(basis_set)

	for k in range(len(data)):
		if np.isnan(data[k].real):
			data[k] = 0+0j

	tc_shifted_data = []  # array to be filled with data, shifted by discrete time tc

	tcs = np.linspace(relative_tc_shift - options.dt - 0.022, relative_tc_shift + options.dt + 0.022, ceil(2.*(options.dt+0.022) / options.delta_tc) )# array of relative time shifts to be applied to the data
	print "time steps = "+str(len(tcs))
	for j in range(len(tcs)):

	        tc = tcs[j]

	        exp_2pi_i_tc = np.array(np.exp(1j*2.*np.pi*fseries*tc))
        	data_tc = np.array(data*exp_2pi_i_tc)
	        tc_shifted_data.append(data_tc)

	tc_shifted_data = np.array(tc_shifted_data).T

	#*************************************************************************** #

	weights_file = open("weights_%s.dat"%ifo, "wb")

	print "Computing weights for "+ifo
	weights = BuildWeights(tc_shifted_data, basis_set, deltaF, invV)
	print "Weights have been computed for "+ifo

	(weights.T).tofile(weights_file)

	weights_file.close()
	i += 1

size_file = open("Num_tc_sub_domains.dat", "wb")
np.array(len(tcs)).tofile(size_file)
size_file.close()