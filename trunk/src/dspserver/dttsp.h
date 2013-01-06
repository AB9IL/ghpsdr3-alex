/** 
* @file dttsp.h
* @brief DttSP interface definitions
* @author John Melton, G0ORX/N6LYT, Doxygen Comments Dave Larsen, KV0S
* @version 0.1
* @date 2009-04-11
*/
// dttsp.h

/* Copyright (C) 
* 2009 - John Melton, G0ORX/N6LYT, Doxygen Comments Dave Larsen, KV0S
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* as published by the Free Software Foundation; either version 2
* of the License, or (at your option) any later version.
* 
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
* 
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
* 
*/

#if !defined __DTTSP_H__
#define __DTTSP_H__

#include "complex.h"
#include "datatypes.h"
#include "defs.h"
#include "bufvec.h"
#include "dttspagc.h"
#include <sdrexport.h>

//
// what we know about DttSP
//

/* --------------------------------------------------------------------------*/
/** 
* @brief Setup_SDR  
* 
* @return
*/
extern void Setup_SDR();

/* --------------------------------------------------------------------------*/
/** 
* @brief Release_Update  
* 
* @return
*/
extern void Release_Update();

/* --------------------------------------------------------------------------*/
/** 
* @brief SetThreadCom  
*
* @param thread
* 
* @return
*/
extern void SetThreadCom(int thread);

/* --------------------------------------------------------------------------*/
/** 
* @brief DttSP audio callback 
* 
* @param input_l
* @param input_r
* @param output_l
* @param output_r
* @param nframes
* 
* @return 
*/
extern void Audio_Callback (float *input_l, float *input_r, float *output_l,
                            float *output_r, unsigned int nframes, int thread);

/* --------------------------------------------------------------------------*/
/** 
* @brief Process the spectrum 
* 
* @param thread
* @param results
* 
* @return 
*/
extern void Process_Spectrum (int thread, float *results);
/* --------------------------------------------------------------------------*/
/** 
* @brief Process Panadapter
* 
* @param thread
* @param results
* 
* @return 
*/
extern void Process_Panadapter (int thread, float *results);
/* --------------------------------------------------------------------------*/
/** 
* @brief Process Phase 
* 
* @param thread
* @param results
* @param numpoints
* 
* @return 
*/
extern void Process_Phase (int thread, float *results, int numpoints);
/* --------------------------------------------------------------------------*/
/** 
* @brief Process scope 
* 
* @param thread
* @param results
* @param numpoints
* 
* @return 
*/
extern void Process_Scope (int thread, float *results, int numpoints);
/* --------------------------------------------------------------------------*/
/** 
* @brief Calculate the RX meter 
* 
* @param subrx
* @param mt
* 
* @return 
*/
extern float CalculateRXMeter(int thread,unsigned int subrx, int mt);

/* --------------------------------------------------------------------------*/
/** 
* @brief Set the sample rate 
* 
* @param sampleRate
* 
* @return 
*/
extern int SetSampleRate(double sampleRate);

/* --------------------------------------------------------------------------*/
/** 
* @brief Set the Oscillator frequency 
* 
* @param frequency
* 
* @return 
*/
extern int SetRXOsc(unsigned int thread, unsigned subrx, double freq);

/* --------------------------------------------------------------------------*/
/** 
* @brief Set the receiver output gain
* 
* @param gain
* 
* @return 
*/
extern int SetRXOutputGain(unsigned int thread, unsigned subrx, double gain);

/* --------------------------------------------------------------------------*/
/** 
* @brief Set the receiver pan position
* 
* @param pos
* 
* @return 
*/
extern int SetRXPan(unsigned int thread, unsigned subrx, float pos);
extern int SetRingBufferOffset(unsigned int thread, int offset);
extern void SetSpectrumPolyphase (unsigned int thread, BOOLEAN setit);
extern void SetSquelchVal (unsigned int thread, unsigned int subrx, float setit);
extern void SetSquelchState (unsigned int thread, unsigned int subrx, BOOLEAN setit);
extern void SetRXDCBlock(unsigned int thread, unsigned int subrx, BOOLEAN setit);
extern void SetNBvals (unsigned int thread, unsigned subrx, double threshold);
extern void SetNRvals (unsigned int thread, unsigned subrx, int taps, int delay, double gain, double leakage);
extern void SetMode (unsigned int thread, unsigned int subrx, SDRMODE m);
extern void SetRXFilter (unsigned int thread, unsigned int subrx, double low_frequency, double high_frequency);
extern void SetRXAGC (unsigned int thread, unsigned subrx, AGCMODE setit);
extern void SetNR (unsigned int thread, unsigned subrx, BOOLEAN setit);
extern void SetNB (unsigned int thread, unsigned subrx, BOOLEAN setit);
extern void SetSDROM (unsigned int thread, unsigned subrx, BOOLEAN setit);
extern void SetANF (unsigned int thread, unsigned subrx, BOOLEAN setit);
extern void SetSubRXSt(unsigned int thread, unsigned int subrx, BOOLEAN setit);
extern void SetSDROMvals (unsigned int thread, unsigned subrx, double threshold);
extern void SetANFvals (unsigned int thread, unsigned subrx, int taps, int delay, double gain, double leakage);
extern void SetTRX (unsigned int thread, TRXMODE setit);
extern void SetThreadProcessingMode (unsigned int thread, RUNMODE runmode);
extern int reset_for_buflen (unsigned int, int);
extern void SetTXDCBlock (unsigned int thread, BOOLEAN setit);
extern void SetTXFMDeviation(unsigned int thread, double deviation);
extern int SetTXFilter (unsigned int thread, double low_frequency, double high_frequency);
extern int SetTXOsc (unsigned int thread, double newfreq);
extern void SetTXCompandSt (unsigned int thread, BOOLEAN setit);
extern void SetTXCompand (unsigned int thread, double setit);
extern void SetTXAMCarrierLevel (unsigned int thread, double setit);
extern void SetTXLevelerSt (unsigned int thread, BOOLEAN state);
extern void SetTXLevelerAttack (unsigned int thread, int attack);
extern void SetTXLevelerHang (unsigned int thread, int decay);
extern void SetTXLevelerTop (unsigned int thread, double maxgain);
extern float CalculateTXMeter(int thread,unsigned int subrx);
extern void SetCorrectIQEnable(int setit);
extern void SetCorrectRXIQMu (unsigned int thread, unsigned int subrx, double mu);
extern void SetW3SZBUF (int newbufsz);
#endif
