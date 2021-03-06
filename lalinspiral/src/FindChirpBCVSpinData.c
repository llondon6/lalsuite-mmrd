/*
*  Copyright (C) 2007 Duncan Brown, Gareth Jones, Patrick Brady
*
*  This program is free software; you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation; either version 2 of the License, or
*  (at your option) any later version.
*
*  This program is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*  GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with with program; see the file COPYING. If not, write to the
*  Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston,
*  MA  02111-1307  USA
*/

/*-----------------------------------------------------------------------
 *
 * File Name: FindChirpBCVSpinData.c
 *
 * Author: Brown D. A., Spinning BCV-Modifications: Jones, G
 *
 *-----------------------------------------------------------------------
 */

/**
 * \author Brown, D. A., Spinning BCV-Modifications: Jones, G.
 * \file
 * \ingroup FindChirpBCVSpin_h
 *
 * \brief Provides functions to condition data prior to filtering with spinning BCV
 * detection templates.
 *
 * ### Prototypes ###
 *
 * The function <tt>LALFindChirpBCVSpinData()</tt> constions the data
 * as described by the algorithm below.
 *
 * ### Algorithm ###
 *
 * Blah.
 *
 * ### Uses ###
 *
 * \code
 * LALCalloc()
 * LALFree()
 * LALCreateVector()
 * LALDestroyVector()
 * \endcode
 *
 * ### Notes ###
 *
 */

#include <lal/LALStdlib.h>
#include <lal/LALConstants.h>
#include <lal/AVFactories.h>
#include <lal/LALInspiral.h>
#include <lal/FindChirp.h>
#include <lal/FindChirpBCVSpin.h>

#ifdef __GNUC__
#define UNUSED __attribute__ ((unused))
#else
#define UNUSED
#endif

void
LALFindChirpBCVSpinData (
    LALStatus                  *status,
    FindChirpSegmentVector     *fcSegVec,
    DataSegmentVector          *dataSegVec,
    FindChirpDataParams        *params
    )

{
  UINT4                 i, k;
  UINT4                 cut;

  REAL4                *w;
  REAL4                UNUSED *amp;
  REAL4                UNUSED *ampBCV;
  COMPLEX8             *wtilde;
  REAL4                UNUSED *tmpltPower;
  REAL4                UNUSED *tmpltPowerBCV;

  REAL4Vector          *dataVec;
  REAL4                *spec = NULL;
  COMPLEX8             *resp = NULL;

  COMPLEX8             *outputData;

  UINT4                UNUSED *chisqBin    = NULL;
  UINT4                UNUSED *chisqBinBCV = NULL;
  UINT4                UNUSED numChisqBins;

  REAL8                UNUSED *ampBCVSpin2;

  FindChirpSegment     *fcSeg   = NULL;
  DataSegment          *dataSeg = NULL;

  /* REMOVE THIS */
  /*FILE                 *fpDataIn     = NULL;
  char                  filename[10];
  char                  suffix[10];*/
  /* REMOVE THIS */


  /*declaration*/
  INITSTATUS(status);
  ATTATCHSTATUSPTR( status );

  /* check that the output exists */
  ASSERT( fcSegVec, status,
      FINDCHIRPBCVSPINH_ENULL, FINDCHIRPBCVSPINH_MSGENULL
      ": fcSegVec" );
  ASSERT( fcSegVec->data, status,
      FINDCHIRPBCVSPINH_ENULL, FINDCHIRPBCVSPINH_MSGENULL
      ": fcSegVec->data" );
  ASSERT( fcSegVec->data->data, status,
      FINDCHIRPBCVSPINH_ENULL, FINDCHIRPBCVSPINH_MSGENULL
      ": fcSegVec->data->data" );
  ASSERT( fcSegVec->data->data->data, status,
      FINDCHIRPBCVSPINH_ENULL, FINDCHIRPBCVSPINH_MSGENULL
      ": fcSegVec->data->data->data" );

  /* check that the parameter structure exists */
  ASSERT( params, status,
	  FINDCHIRPBCVSPINH_ENULL, FINDCHIRPBCVSPINH_MSGENULL
	  ": params" );

  /* check that the parameter structure is set */
  /* to the correct waveform approximant       */
  ASSERT( params->approximant == BCVSpin, status,
      FINDCHIRPBCVSPINH_EMAPX, FINDCHIRPBCVSPINH_MSGEMAPX );

  /* check that the workspace vectors exist */
  ASSERT( params->ampVec, status,
      FINDCHIRPBCVSPINH_ENULL, FINDCHIRPBCVSPINH_MSGENULL );
  ASSERT( params->ampVec->data, status,
      FINDCHIRPBCVSPINH_ENULL, FINDCHIRPBCVSPINH_MSGENULL );
  ASSERT( params->ampVecBCVSpin1, status,
      FINDCHIRPBCVSPINH_ENULL, FINDCHIRPBCVSPINH_MSGENULL );
  ASSERT( params->ampVecBCVSpin1->data, status,
      FINDCHIRPBCVSPINH_ENULL, FINDCHIRPBCVSPINH_MSGENULL );
  ASSERT( params->ampVecBCVSpin2, status,
      FINDCHIRPBCVSPINH_ENULL, FINDCHIRPBCVSPINH_MSGENULL );
  ASSERT( params->ampVecBCVSpin2->data, status,
      FINDCHIRPBCVSPINH_ENULL, FINDCHIRPBCVSPINH_MSGENULL );

  ASSERT( params->wVec, status,
      FINDCHIRPBCVSPINH_ENULL, FINDCHIRPBCVSPINH_MSGENULL );
  ASSERT( params->wVec->data, status,
      FINDCHIRPBCVSPINH_ENULL, FINDCHIRPBCVSPINH_MSGENULL );

  ASSERT( params->wtildeVec, status,
      FINDCHIRPBCVSPINH_ENULL, FINDCHIRPBCVSPINH_MSGENULL );
  ASSERT( params->wtildeVec->data, status,
      FINDCHIRPBCVSPINH_ENULL, FINDCHIRPBCVSPINH_MSGENULL );

  ASSERT( params->tmpltPowerVec, status,
      FINDCHIRPBCVSPINH_ENULL, FINDCHIRPBCVSPINH_MSGENULL );
  ASSERT( params->tmpltPowerVec->data, status,
      FINDCHIRPBCVSPINH_ENULL, FINDCHIRPBCVSPINH_MSGENULL );

  /* check that the fft plans exist */
  ASSERT( params->fwdPlan, status,
      FINDCHIRPBCVSPINH_ENULL, FINDCHIRPBCVSPINH_MSGENULL );
  ASSERT( params->invPlan, status,
      FINDCHIRPBCVSPINH_ENULL, FINDCHIRPBCVSPINH_MSGENULL );

  /* check that the parameter values are reasonable */
  ASSERT( params->fLow >= 0, status,
      FINDCHIRPBCVSPINH_EFLOW, FINDCHIRPBCVSPINH_MSGEFLOW );
  ASSERT( params->dynRange > 0, status,
      FINDCHIRPBCVSPINH_EDYNR, FINDCHIRPBCVSPINH_MSGEDYNR );

  /* check that the input exists */
  ASSERT( dataSegVec, status,
      FINDCHIRPBCVSPINH_ENULL, FINDCHIRPBCVSPINH_MSGENULL
      ": dataSegVec" );
  ASSERT( dataSegVec->data, status,
      FINDCHIRPBCVSPINH_ENULL, FINDCHIRPBCVSPINH_MSGENULL
      ": dataSegVec->data" );
  ASSERT( dataSegVec->data->chan, status,
      FINDCHIRPBCVSPINH_ENULL, FINDCHIRPBCVSPINH_MSGENULL
      ": dataSegVec->data->chan" );
  ASSERT( dataSegVec->data->chan->data, status,
      FINDCHIRPBCVSPINH_ENULL, FINDCHIRPBCVSPINH_MSGENULL
      ": dataSegVec->data->chan->data" );

  /*
   *
   * set up local segment independent pointers
   * will I need the last two? maybe for chisq
   *
   */


  w             = params->wVec->data;
  amp           = params->ampVec->data;
  ampBCV        = params->ampVecBCV->data;
  wtilde        = params->wtildeVec->data;
  tmpltPower    = params->tmpltPowerVec->data;
  tmpltPowerBCV = params->tmpltPowerVecBCV->data;
  ampBCVSpin2   = params->ampVecBCVSpin2->data;

  /*
   *
   * loop over data segments
   *
   */

  for ( i = 0; i < dataSegVec->length; ++i )
  {

	 /* REMOVE THIS */
	 /*snprintf (suffix, "%d", i);
         strcpy (filename, "dataSegment.");
         strncat (filename, suffix, 5);

         {
            fpDataIn     = fopen (filename,"w");
         }*/
         /* REMOVE THIS */

    /*
     	 *
     	 * set up segment dependent pointers
     	 *
     	 */

    	dataSeg      = &(dataSegVec->data[i]);
    	fcSeg        = &(fcSegVec->data[i]);

    	dataVec      = dataSeg->chan->data;
    	spec         = dataSeg->spec->data->data;
    	resp         = dataSeg->resp->data->data;

    	outputData   = fcSeg->data->data->data;


    	if ( fcSeg->chisqBinVec->length )
    	{
      		chisqBin     = fcSeg->chisqBinVec->data;
      		chisqBinBCV  = fcSeg->chisqBinVecBCV->data;
      		numChisqBins = fcSeg->chisqBinVec->length - 1;
    	}
    	else
    	{
      		numChisqBins = 0;
    	}

    	ASSERT( params->wtildeVec->length == fcSeg->data->data->length, status,
        FINDCHIRPBCVSPINH_EMISM, FINDCHIRPBCVSPINH_MSGEMISM );

	/* store the waveform approximant in the data segment */
    	fcSeg->approximant = BCVSpin;


       /* REMOVE THIS */
       /*{
                fprintf (stdout, "Writing input data (time domain) to file %s\n", filename );

                for ( k = 0; k < dataVec->length; ++k )
                {
                     fprintf (fpDataIn, "%d\t%e\n",  k, dataVec->data[k]);
                }
       }*/
       /* REMOVE THIS */

    	/*
     	 *
     	 * compute htilde and store in fcSeg
     	 *
     	 */

    	LALForwardRealFFT( status->statusPtr, fcSeg->data->data,
        	dataVec, params->fwdPlan );
    	CHECKSTATUSPTR( status );

  	/* compute strain */
  	for ( k = 0; k < fcSeg->data->data->length; ++k )
  	{
    		REAL4 p = crealf(outputData[k]);
   	 	REAL4 q = cimagf(outputData[k]);
   	 	REAL4 x = crealf(resp[k]) * params->dynRange;
    		REAL4 y = cimagf(resp[k]) * params->dynRange;

		outputData[k] = crectf( (p*x) - (q*y), (p*y) + (q*x) );
  	}


     /* set output frequency series parameters */
        strncpy( fcSeg->data->name, dataSeg->chan->name, LALNameLength );

        fcSeg->data->epoch.gpsSeconds     = dataSeg->chan->epoch.gpsSeconds;
        fcSeg->data->epoch.gpsNanoSeconds = dataSeg->chan->epoch.gpsNanoSeconds;

        fcSeg->data->f0     = dataSeg->chan->f0;
        fcSeg->data->deltaF = 1.0 /
 	       ( (REAL8) dataSeg->chan->data->length * dataSeg->chan->deltaT ) ;

	fcSeg->deltaT       = dataSeg->chan->deltaT;
        fcSeg->number       = dataSeg->number;
        fcSeg->analyzeSegment = dataSeg->analyzeSegment;

        /* store low frequency cutoff and invSpecTrunc in segment */
        fcSeg->fLow         = params->fLow;
        fcSeg->invSpecTrunc = params->invSpecTrunc;

  } /* end of loop over data segments */


    	/*
     	 *
     	 * compute inverse power spectrum
      	 *
     	 */

    	/* set low frequency cutoff inverse power spectrum */
    	cut = params->fLow / dataSeg->spec->deltaF > 1 ?
      	params->fLow / dataSeg->spec->deltaF : 1;

    	/* set inverse power spectrum to zero */
    	memset( wtilde, 0, params->wtildeVec->length * sizeof(COMPLEX8) );

    	/* compute inverse of S_v */
   	for ( k = cut; k < params->wtildeVec->length; ++k )
    	{
      		if ( spec[k] == 0 )
      		{
        	ABORT( status, FINDCHIRPBCVSPINH_EDIVZ,
		FINDCHIRPBCVSPINH_MSGEDIVZ );
      		}

		wtilde[k] = crectf( 1.0 / spec[k], cimagf(wtilde[k]) );
    	}

    	/*
     	 *
     	 * truncate inverse power spectrum in time domain if required
     	 *
     	 */

 	if ( params->invSpecTrunc )
 	{
      		/* compute square root of inverse power spectrum */
      		fprintf(stdout, "truncating wtilde! \n");

      		for ( k = cut; k < params->wtildeVec->length; ++k )
      		{
		wtilde[k] = crectf( sqrt( crealf(wtilde[k]) ), cimagf(wtilde[k]) );
      		}

      		/* set nyquist and dc to zero */
		wtilde[params->wtildeVec->length-1] = crectf( 0.0, cimagf(wtilde[params->wtildeVec->length-1]) );
		wtilde[0] = crectf( 0.0, cimagf(wtilde[0]) );

      		/* transform to time domain */
      		LALReverseRealFFT( status->statusPtr,
			params->wVec,
			params->wtildeVec,
			params->invPlan );
      		CHECKSTATUSPTR (status);

      		/* truncate in time domain */
      		memset( w + params->invSpecTrunc/2, 0,
          	(params->wVec->length - params->invSpecTrunc) * sizeof(REAL4) );

      		/* transform to frequency domain */
      		LALForwardRealFFT( status->statusPtr, params->wtildeVec,
			params->wVec,
          		params->fwdPlan );
     	 	CHECKSTATUSPTR (status);

      		/* normalise fourier transform and square */
      		{
        		REAL4 norm = 1.0 / (REAL4) params->wVec->length;
        		for ( k = cut; k < params->wtildeVec->length; ++k )
        		{
			wtilde[k] = crectf( crealf(wtilde[k]) * ( norm ), cimagf(wtilde[k]) );
			wtilde[k] = crectf( crealf(wtilde[k]) * ( crealf(wtilde[k]) ), cimagf(wtilde[k]) );
			wtilde[k] = crectf( crealf(wtilde[k]), 0.0 );
        		}
      		}

      		/* set nyquist and dc to zero */
		wtilde[params->wtildeVec->length-1] = crectf( 0.0, cimagf(wtilde[params->wtildeVec->length-1]) );
		wtilde[0] = crectf( 0.0, cimagf(wtilde[0]) );
 	}

    	/* set inverse power spectrum below cut to zero */
    	memset( wtilde, 0, cut * sizeof(COMPLEX8) );

    	/* convert from S_v to S_h */
    	for ( k = cut; k < params->wtildeVec->length; ++k )
    	{
      		REAL4 respRe = crealf(resp[k]) * params->dynRange;
      		REAL4 respIm = cimagf(resp[k]) * params->dynRange;
      		REAL4 modsqResp = (respRe * respRe + respIm * respIm);
      		REAL4 invmodsqResp;

      		if ( modsqResp == 0 )
      		{
        		ABORT( status, FINDCHIRPBCVSPINH_EDIVZ,
				FINDCHIRPBCVSPINH_MSGEDIVZ );
      		}
      		invmodsqResp = 1.0 / modsqResp;

		wtilde[k] = crectf( crealf(wtilde[k]) * ( invmodsqResp ), cimagf(wtilde[k]) );
    	}

	/* REMOVE THIS */
	/*fclose (fpDataIn);*/
        /* REMOVE THIS */


  DETATCHSTATUSPTR( status );
  RETURN( status );

}
