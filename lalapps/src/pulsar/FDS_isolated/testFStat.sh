#!/bin/sh

## allow 'make test' to work from builddir != srcdir
if [ -z "${srcdir}" ]; then
    srcdir=..
fi
  
sftdir="${srcdir}/.."

sftbase="SFT.0000"
IFO="LHO"
FCOMPARE="./compareFstats"
CFS_DEFAULT="./lalapps_ComputeFStatistic"

CFSparams1="--IFO=$IFO --DataDir=$sftdir --BaseName=$sftbase --Freq=300.1 \
--FreqBand=0.2 --Alpha=2.2 --AlphaBand=0.012 --Delta=0.8 --DeltaBand=0.018 --gridType=0"

CFSparams2="--IFO=$IFO --DataDir=$sftdir --BaseName=$sftbase --Freq=300.1 \
--FreqBand=0.2 --Alpha=2.2 --AlphaBand=0.003 --Delta=0.8 --DeltaBand=0.003 --gridType=1"

CFSparams3="--IFO=$IFO --DataDir=$sftdir --BaseName=$sftbase --Freq=300.1 \
--FreqBand=0.2 --Alpha=2.2 --AlphaBand=1.0 --Delta=0.8 --DeltaBand=1.0 \
--gridType=2 --metricType=1 --metricMismatch=0.02"

#give help string if requested
if [ "$1" = "-h" ] || [ "$1" = "--help" ]; then
    echo
    echo "Usage: $0 [yourCFScode]"
    echo
    echo "The default-code used is '$CFS_DEFAULT'"
    echo
    exit 1
fi

if [ x$1 = x ]; then
    prog=$CFS_DEFAULT;
    extra_args=
else
    prog=$1;
    shift
    extra_args="$@"
fi


# test if LAL_DATA_PATH has been set ... needed to locate ephemeris-files
if [ x$LAL_DATA_PATH = x ]; then
    echo
    echo "Need environment-variable LAL_DATA_PATH to point to your ephemeris-directory (e.g. /usr/local/share/lal)"
    echo
    exit 1
fi
# check if compareFstats code is found
if [ ! -x "$FCOMPARE" ] ; then
    echo 
    echo "F-stat Comparison code not found: $FCOMPARE"
    echo
    echo "I suggest you try: 'make $FCOMPARE'"
    echo
    exit 1
fi


## Tests start here 
## --------------------
echo
echo "Running ComputeFStatistic-code '$prog' on test-data '$sftdir/$sftbase*'"

## Test1: using a uniform sky-grid
##----------------------------------------
echo
echo "----------------------------------------------------------------------"
echo "Test 1) uniform sky-grid:"
echo "----------------------------------------------------------------------"
if [ ! -x "$prog" ]; then
    echo "Cannot execute '$prog' ... exiting"
    exit 1
fi
echo "$prog $CFSparams1 $extra_args"
time $prog $CFSparams1 $extra_args

echo
echo -n "Comparing output-file 'Fstats' with reference-version 'Fstats.ref1' ... "

if $FCOMPARE -1 ./Fstats -2 ${srcdir}/Fstats.ref1 ; then
    echo "OK."
else
    echo "OUCH... files differ. Something might be wrong..."
    exit 2
fi

## Test2: using an isotropic Grid
##-------------------------------
echo
echo "----------------------------------------------------------------------"
echo "Test 2) isotropic sky-grid:"
echo "----------------------------------------------------------------------"
echo "$prog $CFSparams2 $extra_args"

time $prog $CFSparams2 $extra_args

echo
echo -n "Comparing output-file 'Fstats' with reference-version 'Fstats.ref2' ... "

if $FCOMPARE -1 ./Fstats -2 ${srcdir}/Fstats.ref2 ; then
    echo "OK."
else
    echo "OUCH... files differ. Something might be wrong..."
    exit 2
fi


## Test3: using a the analytic Ptole-metric
##----------------------------------------

## temporarily deactivated:
exit

echo
echo "----------------------------------------------------------------------"
echo "Test 3) analytic Ptole-metric:"
echo "----------------------------------------------------------------------"
echo "$prog $CFSparams3"
if ! "$prog" $CFSparams3; then
    echo "failed... exiting.";
    echo
    exit 2
fi

echo
echo -n "Comparing output-file 'Fstats' with reference-version 'Fstats.ref3' ... "

if $FCOMPARE -1 ./Fstats -2 ${srcdir}/Fstats.ref3 ; then
    echo "OK."
    echo
    exit 0
else
    echo "OUCH... files differ. Something might be wrong..."
    echo
    exit 2
fi
