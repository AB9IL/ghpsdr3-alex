/*
 * File:   Band.cpp
 * Author: John Melton, G0ORX/N6LYT
 * 
 * Created on 13 August 2010, 14:52
 */

/* Copyright (C)
* 2009 - John Melton, G0ORX/N6LYT
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

#include "Band.h"
#include "Mode.h"

Band::Band() {
    int i;

    currentBand=BAND_40;
    currentStack=0;
    for(i=0;i<BAND_LAST;i++) {
        stack[i]=0;
    }

    bandstack[BAND_17][0].setFrequency(18068600LL);
    bandstack[BAND_17][0].setMode(MODE_CWU);
    bandstack[BAND_17][0].setFilter(4);
    bandstack[BAND_17][0].setSpectrumHigh(-40);
    bandstack[BAND_17][0].setSpectrumLow(-160);
    bandstack[BAND_17][0].setWaterfallHigh(-60);
    bandstack[BAND_17][0].setWaterfallLow(-125);
    bandstack[BAND_17][1].setFrequency(18125000LL);
    bandstack[BAND_17][1].setMode(MODE_USB);
    bandstack[BAND_17][1].setFilter(3);
    bandstack[BAND_17][1].setSpectrumHigh(-40);
    bandstack[BAND_17][1].setSpectrumLow(-160);
    bandstack[BAND_17][1].setWaterfallHigh(-60);
    bandstack[BAND_17][1].setWaterfallLow(-125);
    bandstack[BAND_17][2].setFrequency(18140000LL);
    bandstack[BAND_17][2].setMode(MODE_USB);
    bandstack[BAND_17][2].setFilter(3);
    bandstack[BAND_17][2].setSpectrumHigh(-40);
    bandstack[BAND_17][2].setSpectrumLow(-160);
    bandstack[BAND_17][2].setWaterfallHigh(-60);
    bandstack[BAND_17][2].setWaterfallLow(-125);
    bandstack[BAND_17][3].setFrequency(0LL);

    bandstack[BAND_15][0].setFrequency(21001000LL);
    bandstack[BAND_15][0].setMode(MODE_CWU);
    bandstack[BAND_15][0].setFilter(4);
    bandstack[BAND_15][0].setSpectrumHigh(-40);
    bandstack[BAND_15][0].setSpectrumLow(-160);
    bandstack[BAND_15][0].setWaterfallHigh(-60);
    bandstack[BAND_15][0].setWaterfallLow(-125);
    bandstack[BAND_15][1].setFrequency(21255000LL);
    bandstack[BAND_15][1].setMode(MODE_USB);
    bandstack[BAND_15][1].setFilter(3);
    bandstack[BAND_15][1].setSpectrumHigh(-40);
    bandstack[BAND_15][1].setSpectrumLow(-160);
    bandstack[BAND_15][1].setWaterfallHigh(-60);
    bandstack[BAND_15][1].setWaterfallLow(-125);
    bandstack[BAND_15][2].setFrequency(21300000LL);
    bandstack[BAND_15][2].setMode(MODE_USB);
    bandstack[BAND_15][2].setFilter(3);
    bandstack[BAND_15][2].setSpectrumHigh(-40);
    bandstack[BAND_15][2].setSpectrumLow(-160);
    bandstack[BAND_15][2].setWaterfallHigh(-60);
    bandstack[BAND_15][2].setWaterfallLow(-125);
    bandstack[BAND_15][3].setFrequency(0LL);

    bandstack[BAND_12][0].setFrequency(24895000LL);
    bandstack[BAND_12][0].setMode(MODE_CWU);
    bandstack[BAND_12][0].setFilter(4);
    bandstack[BAND_12][0].setSpectrumHigh(-40);
    bandstack[BAND_12][0].setSpectrumLow(-160);
    bandstack[BAND_12][0].setWaterfallHigh(-60);
    bandstack[BAND_12][0].setWaterfallLow(-125);
    bandstack[BAND_12][1].setFrequency(24900000LL);
    bandstack[BAND_12][1].setMode(MODE_CWU);
    bandstack[BAND_12][1].setFilter(4);
    bandstack[BAND_12][1].setSpectrumHigh(-40);
    bandstack[BAND_12][1].setSpectrumLow(-160);
    bandstack[BAND_12][1].setWaterfallHigh(-60);
    bandstack[BAND_12][1].setWaterfallLow(-125);
    bandstack[BAND_12][2].setFrequency(24910000LL);
    bandstack[BAND_12][2].setMode(MODE_CWU);
    bandstack[BAND_12][2].setFilter(4);
    bandstack[BAND_12][2].setSpectrumHigh(-40);
    bandstack[BAND_12][2].setSpectrumLow(-160);
    bandstack[BAND_12][2].setWaterfallHigh(-60);
    bandstack[BAND_12][2].setWaterfallLow(-125);
    bandstack[BAND_12][3].setFrequency(0LL);

    bandstack[BAND_10][0].setFrequency(28010000LL);
    bandstack[BAND_10][0].setMode(MODE_CWU);
    bandstack[BAND_10][0].setFilter(4);
    bandstack[BAND_10][0].setSpectrumHigh(-40);
    bandstack[BAND_10][0].setSpectrumLow(-160);
    bandstack[BAND_10][0].setWaterfallHigh(-60);
    bandstack[BAND_10][0].setWaterfallLow(-125);
    bandstack[BAND_10][1].setFrequency(28300000LL);
    bandstack[BAND_10][1].setMode(MODE_USB);
    bandstack[BAND_10][1].setFilter(3);
    bandstack[BAND_10][1].setSpectrumHigh(-40);
    bandstack[BAND_10][1].setSpectrumLow(-160);
    bandstack[BAND_10][1].setWaterfallHigh(-60);
    bandstack[BAND_10][1].setWaterfallLow(-125);
    bandstack[BAND_10][2].setFrequency(28400000LL);
    bandstack[BAND_10][2].setMode(MODE_USB);
    bandstack[BAND_10][2].setFilter(3);
    bandstack[BAND_10][2].setSpectrumHigh(-40);
    bandstack[BAND_10][2].setSpectrumLow(-160);
    bandstack[BAND_10][2].setWaterfallHigh(-60);
    bandstack[BAND_10][2].setWaterfallLow(-125);
    bandstack[BAND_10][3].setFrequency(0LL);

    bandstack[BAND_6][0].setFrequency(50010000LL);
    bandstack[BAND_6][0].setMode(MODE_CWU);
    bandstack[BAND_6][0].setFilter(4);
    bandstack[BAND_6][0].setSpectrumHigh(-40);
    bandstack[BAND_6][0].setSpectrumLow(-160);
    bandstack[BAND_6][0].setWaterfallHigh(-60);
    bandstack[BAND_6][0].setWaterfallLow(-125);
    bandstack[BAND_6][1].setFrequency(50125000LL);
    bandstack[BAND_6][1].setMode(MODE_USB);
    bandstack[BAND_6][1].setFilter(3);
    bandstack[BAND_6][1].setSpectrumHigh(-40);
    bandstack[BAND_6][1].setSpectrumLow(-160);
    bandstack[BAND_6][1].setWaterfallHigh(-60);
    bandstack[BAND_6][1].setWaterfallLow(-125);
    bandstack[BAND_6][2].setFrequency(50200000LL);
    bandstack[BAND_6][2].setMode(MODE_USB);
    bandstack[BAND_6][2].setFilter(3);
    bandstack[BAND_6][2].setSpectrumHigh(-40);
    bandstack[BAND_6][2].setSpectrumLow(-160);
    bandstack[BAND_6][2].setWaterfallHigh(-60);
    bandstack[BAND_6][2].setWaterfallLow(-125);
    bandstack[BAND_6][3].setFrequency(0LL);

    bandstack[BAND_GEN][0].setFrequency(909000LL);
    bandstack[BAND_GEN][0].setMode(MODE_AM);
    bandstack[BAND_GEN][0].setFilter(3);
    bandstack[BAND_GEN][0].setSpectrumHigh(-40);
    bandstack[BAND_GEN][0].setSpectrumLow(-160);
    bandstack[BAND_GEN][0].setWaterfallHigh(-60);
    bandstack[BAND_GEN][0].setWaterfallLow(-125);
    bandstack[BAND_GEN][1].setFrequency(6145000LL);
    bandstack[BAND_GEN][1].setMode(MODE_AM);
    bandstack[BAND_GEN][1].setFilter(3);
    bandstack[BAND_GEN][1].setSpectrumHigh(-40);
    bandstack[BAND_GEN][1].setSpectrumLow(-160);
    bandstack[BAND_GEN][1].setWaterfallHigh(-60);
    bandstack[BAND_GEN][1].setWaterfallLow(-125);
    bandstack[BAND_GEN][2].setFrequency(11765000LL);
    bandstack[BAND_GEN][2].setMode(MODE_AM);
    bandstack[BAND_GEN][2].setFilter(3);
    bandstack[BAND_GEN][2].setSpectrumHigh(-40);
    bandstack[BAND_GEN][2].setSpectrumLow(-160);
    bandstack[BAND_GEN][2].setWaterfallHigh(-60);
    bandstack[BAND_GEN][2].setWaterfallLow(-125);
    bandstack[BAND_GEN][3].setFrequency(15400000LL);
    bandstack[BAND_GEN][3].setMode(MODE_AM);
    bandstack[BAND_GEN][3].setFilter(3);
    bandstack[BAND_GEN][3].setSpectrumHigh(-40);
    bandstack[BAND_GEN][3].setSpectrumLow(-160);
    bandstack[BAND_GEN][3].setWaterfallHigh(-60);
    bandstack[BAND_GEN][3].setWaterfallLow(-125);
    bandstack[BAND_GEN][4].setFrequency(17795000LL);
    bandstack[BAND_GEN][4].setMode(MODE_AM);
    bandstack[BAND_GEN][4].setFilter(3);
    bandstack[BAND_GEN][4].setSpectrumHigh(-40);
    bandstack[BAND_GEN][4].setSpectrumLow(-160);
    bandstack[BAND_GEN][4].setWaterfallHigh(-60);
    bandstack[BAND_GEN][4].setWaterfallLow(-125);

    bandstack[BAND_WWV][0].setFrequency(2500000LL);
    bandstack[BAND_WWV][0].setMode(MODE_AM);
    bandstack[BAND_WWV][0].setFilter(3);
    bandstack[BAND_WWV][0].setSpectrumHigh(-40);
    bandstack[BAND_WWV][0].setSpectrumLow(-160);
    bandstack[BAND_WWV][0].setWaterfallHigh(-60);
    bandstack[BAND_WWV][0].setWaterfallLow(-125);
    bandstack[BAND_WWV][1].setFrequency(5000000LL);
    bandstack[BAND_WWV][1].setMode(MODE_AM);
    bandstack[BAND_WWV][1].setFilter(3);
    bandstack[BAND_WWV][1].setSpectrumHigh(-40);
    bandstack[BAND_WWV][1].setSpectrumLow(-160);
    bandstack[BAND_WWV][1].setWaterfallHigh(-60);
    bandstack[BAND_WWV][1].setWaterfallLow(-125);
    bandstack[BAND_WWV][2].setFrequency(10000000LL);
    bandstack[BAND_WWV][2].setMode(MODE_AM);
    bandstack[BAND_WWV][2].setFilter(3);
    bandstack[BAND_WWV][2].setSpectrumHigh(-40);
    bandstack[BAND_WWV][2].setSpectrumLow(-160);
    bandstack[BAND_WWV][2].setWaterfallHigh(-60);
    bandstack[BAND_WWV][2].setWaterfallLow(-125);
    bandstack[BAND_WWV][3].setFrequency(15000000LL);
    bandstack[BAND_WWV][3].setMode(MODE_AM);
    bandstack[BAND_WWV][3].setFilter(3);
    bandstack[BAND_WWV][3].setSpectrumHigh(-40);
    bandstack[BAND_WWV][3].setSpectrumLow(-160);
    bandstack[BAND_WWV][3].setWaterfallHigh(-60);
    bandstack[BAND_WWV][3].setWaterfallLow(-125);
    bandstack[BAND_WWV][4].setFrequency(20000000LL);
    bandstack[BAND_WWV][4].setMode(MODE_AM);
    bandstack[BAND_WWV][4].setFilter(3);
    bandstack[BAND_WWV][4].setSpectrumHigh(-40);
    bandstack[BAND_WWV][4].setSpectrumLow(-160);
    bandstack[BAND_WWV][4].setWaterfallHigh(-60);
    bandstack[BAND_WWV][4].setWaterfallLow(-125);

    limits.clear();
    limits << BandLimit(1800000LL,2000000LL);
    limits << BandLimit(3500000LL,4000000LL);
    limits << BandLimit(5330500LL,5403500LL);
    limits << BandLimit(7000000LL,7300000LL);
    limits << BandLimit(10100000LL,10150000LL);
    limits << BandLimit(14000000LL,14350000LL);
    limits << BandLimit(18068000LL,18168000LL);
    limits << BandLimit(21000000LL,21450000LL);
    limits << BandLimit(24890000LL,24990000LL);
    limits << BandLimit(28000000LL,29700000LL);
    limits << BandLimit(50000000LL,54000000LL);
    limits << BandLimit(144000000LL,148000000LL);
    limits << BandLimit(222000000LL,224980000LL);
    limits << BandLimit(420000000LL,450000000LL);
    limits << BandLimit(902000000LL,928000000LL);
    limits << BandLimit(1240000000LL,1300000000LL);
    limits << BandLimit(2300000000LL,2450000000LL);
    limits << BandLimit(3456000000LL,3456400000LL);
    limits << BandLimit(5760000000LL,5760400000LL);
    limits << BandLimit(10368000000LL,10368400000LL);
    limits << BandLimit(24192000000LL,24192400000LL);
    limits << BandLimit(47088000000LL,47088400000LL);
    limits << BandLimit(0l,0L);

}

Band::~Band() {
    // save state
    
}

void Band::readSettings(QSettings *settings)
{
    settings->beginGroup("TEST");
        bandstack[BAND_160][0].setFrequency(settings->value("testFrequency",1810000).toLongLong());
    settings->endGroup();
}

void Band::loadSettings(QSettings* settings) {
    int i,j;
    QString s;
    BandLimit limitItem;
    long long limitMin,limitMax;

     settings->beginGroup("Band");
    // Quick memory number 1
    bandstack[BAND_160][0].setFrequency(settings->value("frequency.0.0",1810000).toLongLong());
    bandstack[BAND_160][0].setMode(settings->value("mode.0.0",MODE_CWL).toInt());
    bandstack[BAND_160][0].setFilter(settings->value("filter.0.0",4).toInt());
    bandstack[BAND_160][0].setSpectrumHigh(settings->value("spectrumHigh.0.0",-40).toInt());
    bandstack[BAND_160][0].setSpectrumLow(settings->value("spectrumLow.0.0",-160).toInt());
    bandstack[BAND_160][0].setWaterfallHigh(settings->value("waterfallHigh.0.0",-60).toInt());
    bandstack[BAND_160][0].setWaterfallLow(settings->value("waterfallLow.0.0",-125).toInt());
    bandstack[BAND_160][0].setInfo(settings->value("info.0.0",2).toInt());  //Count of Quick Memories 0 .. n
    // Quick memory number 2
    bandstack[BAND_160][1].setFrequency(settings->value("frequency.1.1",1835000).toLongLong());
    bandstack[BAND_160][1].setMode(settings->value("mode.1.1",MODE_LSB).toInt());
    bandstack[BAND_160][1].setFilter(settings->value("filter.1.1",4).toInt());
    bandstack[BAND_160][1].setSpectrumHigh(settings->value("spectrumHigh.1.1",-40).toInt());
    bandstack[BAND_160][1].setSpectrumLow(settings->value("spectrumLow.1.1",-160).toInt());
    bandstack[BAND_160][1].setWaterfallHigh(settings->value("waterfallHigh.1.1",-60).toInt());
    bandstack[BAND_160][1].setWaterfallLow(settings->value("waterfallLow.1.1",-125).toInt());
    bandstack[BAND_160][1].setInfo(settings->value("info.1.1",0).toInt());  //Pointer to stack for reading
    // Quick memory number 3
    bandstack[BAND_160][2].setFrequency(settings->value("frequency.1.2",1845000).toLongLong());
    bandstack[BAND_160][2].setMode(settings->value("mode.1.2",MODE_AM).toInt());
    bandstack[BAND_160][2].setFilter(settings->value("filter.1.2",4).toInt());
    bandstack[BAND_160][2].setSpectrumHigh(settings->value("spectrumHigh.1.2",-40).toInt());
    bandstack[BAND_160][2].setSpectrumLow(settings->value("spectrumLow.1.2",-160).toInt());
    bandstack[BAND_160][2].setWaterfallHigh(settings->value("waterfallHigh.1.2",-60).toInt());
    bandstack[BAND_160][2].setWaterfallLow(settings->value("waterfallLow.1.2",-125).toInt());
    bandstack[BAND_160][2].setInfo(settings->value("info.1.2",0).toInt());  //Pointer to stack for storing
    // Current working frequency
    bandstack[BAND_160][3].setFrequency(settings->value("frequency.0.3",0).toLongLong());  //Terminator

    // Quick memory number 1
    bandstack[BAND_80][0].setFrequency(settings->value("frequency.1.0",3501000).toLongLong());
    bandstack[BAND_80][0].setMode(settings->value("mode.1.0",MODE_CWL).toInt());
    bandstack[BAND_80][0].setFilter(settings->value("filter.1.0",4).toInt());
    bandstack[BAND_80][0].setSpectrumHigh(settings->value("spectrumHigh.1.0",-40).toInt());
    bandstack[BAND_80][0].setSpectrumLow(settings->value("spectrumLow.1.0",-160).toInt());
    bandstack[BAND_80][0].setWaterfallHigh(settings->value("waterfallHigh.1.0",-60).toInt());
    bandstack[BAND_80][0].setWaterfallLow(settings->value("waterfallLow.1.0",-125).toInt());
    bandstack[BAND_80][0].setInfo(settings->value("info.1.0",2).toInt());  //Count of Quick Memories 0 .. n
    // Quick memory number 2
    bandstack[BAND_80][1].setFrequency(settings->value("frequency.1.1",3751000).toLongLong());
    bandstack[BAND_80][1].setMode(settings->value("mode.1.1",MODE_LSB).toInt());
    bandstack[BAND_80][1].setFilter(settings->value("filter.1.1",5).toInt());
    bandstack[BAND_80][1].setSpectrumHigh(settings->value("spectrumHigh.1.1",-40).toInt());
    bandstack[BAND_80][1].setSpectrumLow(settings->value("spectrumLow.1.1",-160).toInt());
    bandstack[BAND_80][1].setWaterfallHigh(settings->value("waterfallHigh.1.1",-60).toInt());
    bandstack[BAND_80][1].setWaterfallLow(settings->value("waterfallLow.1.1",-125).toInt());
    bandstack[BAND_80][1].setInfo(settings->value("info.1.1",0).toInt());  //Pointer to stack for reading
    // Quick memory number 3
    bandstack[BAND_80][2].setFrequency(settings->value("frequency.1.2",3850000).toLongLong());
    bandstack[BAND_80][2].setMode(settings->value("mode.1.2",MODE_LSB).toInt());
    bandstack[BAND_80][2].setFilter(settings->value("filter.1.2",5).toInt());
    bandstack[BAND_80][2].setSpectrumHigh(settings->value("spectrumHigh.1.2",-40).toInt());
    bandstack[BAND_80][2].setSpectrumLow(settings->value("spectrumLow.1.2",-160).toInt());
    bandstack[BAND_80][2].setWaterfallHigh(settings->value("waterfallHigh.1.2",-60).toInt());
    bandstack[BAND_80][2].setWaterfallLow(settings->value("waterfallLow.1.2",-125).toInt());
    bandstack[BAND_80][2].setInfo(settings->value("info.1.2",0).toInt());  //Pointer to stack for storing
    // Current working frequency
    bandstack[BAND_80][3].setFrequency(settings->value("frequency.1.3",0).toLongLong());  //Terminator

    // Quick memory number 1
    bandstack[BAND_60][0].setFrequency(settings->value("frequency.2.0",5330500).toLongLong());
    bandstack[BAND_60][0].setMode(settings->value("mode.2.0",MODE_CWL).toInt());
    bandstack[BAND_60][0].setFilter(settings->value("filter.2.0",3).toInt());
    bandstack[BAND_60][0].setSpectrumHigh(settings->value("spectrumHigh.2.0",-40).toInt());
    bandstack[BAND_60][0].setSpectrumLow(settings->value("spectrumLow.2.0",-160).toInt());
    bandstack[BAND_60][0].setWaterfallHigh(settings->value("waterfallHigh.2.0",-60).toInt());
    bandstack[BAND_60][0].setWaterfallLow(settings->value("waterfallLow.2.0",-125).toInt());
    bandstack[BAND_60][0].setInfo(settings->value("info.2.0",4).toInt());  //Count of Quick Memories 0 .. n
    // Quick memory number 2
    bandstack[BAND_60][1].setFrequency(settings->value("frequency.2.1",5346500).toLongLong());
    bandstack[BAND_60][1].setMode(settings->value("mode.2.1",MODE_LSB).toInt());
    bandstack[BAND_60][1].setFilter(settings->value("filter.2.1",3).toInt());
    bandstack[BAND_60][1].setSpectrumHigh(settings->value("spectrumHigh.2.1",-40).toInt());
    bandstack[BAND_60][1].setSpectrumLow(settings->value("spectrumLow.2.1",-160).toInt());
    bandstack[BAND_60][1].setWaterfallHigh(settings->value("waterfallHigh.2.1",-60).toInt());
    bandstack[BAND_60][1].setWaterfallLow(settings->value("waterfallLow.2.1",-125).toInt());
    bandstack[BAND_60][1].setInfo(settings->value("info.2.1",0).toInt());  //Pointer to stack for reading
    // Quick memory number 3
    bandstack[BAND_60][2].setFrequency(settings->value("frequency.2.2",5366500).toLongLong());
    bandstack[BAND_60][2].setMode(settings->value("mode.2.2",MODE_LSB).toInt());
    bandstack[BAND_60][2].setFilter(settings->value("filter.2.2",3).toInt());
    bandstack[BAND_60][2].setSpectrumHigh(settings->value("spectrumHigh.2.2",-40).toInt());
    bandstack[BAND_60][2].setSpectrumLow(settings->value("spectrumLow.2.2",-160).toInt());
    bandstack[BAND_60][2].setWaterfallHigh(settings->value("waterfallHigh.2.2",-60).toInt());
    bandstack[BAND_60][2].setWaterfallLow(settings->value("waterfallLow.2.2",-125).toInt());
    bandstack[BAND_60][2].setInfo(settings->value("info.2.2",0).toInt());  //Pointer to stack for storing
    // Quick memory number 4
    bandstack[BAND_60][3].setFrequency(settings->value("frequency.2.3",5371500).toLongLong());
    bandstack[BAND_60][3].setMode(settings->value("mode.2.3",MODE_LSB).toInt());
    bandstack[BAND_60][3].setFilter(settings->value("filter.2.3",3).toInt());
    bandstack[BAND_60][3].setSpectrumHigh(settings->value("spectrumHigh.2.3",-40).toInt());
    bandstack[BAND_60][3].setSpectrumLow(settings->value("spectrumLow.2.3",-160).toInt());
    bandstack[BAND_60][3].setWaterfallHigh(settings->value("waterfallHigh.2.3",-60).toInt());
    bandstack[BAND_60][3].setWaterfallLow(settings->value("waterfallLow.2.3",-125).toInt());
    bandstack[BAND_60][3].setInfo(settings->value("info.2.3",0).toInt());  //Reserved for total entries
    // Quick memory number 5
    bandstack[BAND_60][4].setFrequency(settings->value("frequency.2.4",5403500).toLongLong());
    bandstack[BAND_60][4].setMode(settings->value("mode.2.4",MODE_LSB).toInt());
    bandstack[BAND_60][4].setFilter(settings->value("filter.2.4",3).toInt());
    bandstack[BAND_60][4].setSpectrumHigh(settings->value("spectrumHigh.2.4",-40).toInt());
    bandstack[BAND_60][4].setSpectrumLow(settings->value("spectrumLow.2.4",-160).toInt());
    bandstack[BAND_60][4].setWaterfallHigh(settings->value("waterfallHigh.2.4",-60).toInt());
    bandstack[BAND_60][4].setWaterfallLow(settings->value("waterfallLow.2.4",-125).toInt());
    bandstack[BAND_60][4].setInfo(settings->value("info.2.4",0).toInt());  //Not used. Band terminated by being 5 entries

    // Quick memory number 1
    bandstack[BAND_40][0].setFrequency(settings->value("frequency.3.0",7001000).toLongLong());
    bandstack[BAND_40][0].setMode(settings->value("mode.3.0",MODE_CWL).toInt());
    bandstack[BAND_40][0].setFilter(settings->value("filter.3.0",4).toInt());
    bandstack[BAND_40][0].setSpectrumHigh(settings->value("spectrumHigh.3.0",-40).toInt());
    bandstack[BAND_40][0].setSpectrumLow(settings->value("spectrumLow.3.0",-160).toInt());
    bandstack[BAND_40][0].setWaterfallHigh(settings->value("waterfallHigh.3.0",-60).toInt());
    bandstack[BAND_40][0].setWaterfallLow(settings->value("waterfallLow.3.0",-125).toInt());
    bandstack[BAND_40][0].setInfo(settings->value("info.3.0",2).toInt());  //Count of Quick Memories 0 .. n
    // Quick memory number 2
    bandstack[BAND_40][1].setFrequency(settings->value("frequency.3.1",3751000).toLongLong());
    bandstack[BAND_40][1].setMode(settings->value("mode.3.1",MODE_LSB).toInt());
    bandstack[BAND_40][1].setFilter(settings->value("filter.3.1",3).toInt());
    bandstack[BAND_40][1].setSpectrumHigh(settings->value("spectrumHigh.3.1",-40).toInt());
    bandstack[BAND_40][1].setSpectrumLow(settings->value("spectrumLow.3.1",-160).toInt());
    bandstack[BAND_40][1].setWaterfallHigh(settings->value("waterfallHigh.3.1",-60).toInt());
    bandstack[BAND_40][1].setWaterfallLow(settings->value("waterfallLow.3.1",-125).toInt());
    bandstack[BAND_40][1].setInfo(settings->value("info.3.1",0).toInt());  //Pointer to stack for reading
    // Quick memory number 3
    bandstack[BAND_40][2].setFrequency(settings->value("frequency.3.2",3850000).toLongLong());
    bandstack[BAND_40][2].setMode(settings->value("mode.3.2",MODE_LSB).toInt());
    bandstack[BAND_40][2].setFilter(settings->value("filter.3.2",3).toInt());
    bandstack[BAND_40][2].setSpectrumHigh(settings->value("spectrumHigh.3.2",-40).toInt());
    bandstack[BAND_40][2].setSpectrumLow(settings->value("spectrumLow.3.2",-160).toInt());
    bandstack[BAND_40][2].setWaterfallHigh(settings->value("waterfallHigh.3.2",-60).toInt());
    bandstack[BAND_40][2].setWaterfallLow(settings->value("waterfallLow.3.2",-125).toInt());
    bandstack[BAND_40][2].setInfo(settings->value("info.3.2",0).toInt());  //Pointer to stack for storing
    // Current working frequency
    bandstack[BAND_40][3].setFrequency(settings->value("frequency.1.3",0).toLongLong());  //Terminator

    // Quick memory number 1
    bandstack[BAND_30][0].setFrequency(settings->value("frequency.4.0",10120000).toLongLong());
    bandstack[BAND_30][0].setMode(settings->value("mode.4.0",MODE_CWU).toInt());
    bandstack[BAND_30][0].setFilter(settings->value("filter.4.0",4).toInt());
    bandstack[BAND_30][0].setSpectrumHigh(settings->value("spectrumHigh.4.0",-40).toInt());
    bandstack[BAND_30][0].setSpectrumLow(settings->value("spectrumLow.4.0",-160).toInt());
    bandstack[BAND_30][0].setWaterfallHigh(settings->value("waterfallHigh.4.0",-60).toInt());
    bandstack[BAND_30][0].setWaterfallLow(settings->value("waterfallLow.4.0",-125).toInt());
    bandstack[BAND_30][0].setInfo(settings->value("info.4.0",2).toInt());  //Count of Quick Memories 0 .. n
    // Quick memory number 2
    bandstack[BAND_30][1].setFrequency(settings->value("frequency.4.1",10130000).toLongLong());
    bandstack[BAND_30][1].setMode(settings->value("mode.4.1",MODE_CWU).toInt());
    bandstack[BAND_30][1].setFilter(settings->value("filter.4.1",4).toInt());
    bandstack[BAND_30][1].setSpectrumHigh(settings->value("spectrumHigh.4.1",-40).toInt());
    bandstack[BAND_30][1].setSpectrumLow(settings->value("spectrumLow.4.1",-160).toInt());
    bandstack[BAND_30][1].setWaterfallHigh(settings->value("waterfallHigh.4.1",-60).toInt());
    bandstack[BAND_30][1].setWaterfallLow(settings->value("waterfallLow.4.1",-125).toInt());
    bandstack[BAND_30][1].setInfo(settings->value("info.4.1",0).toInt());  //Pointer to stack for reading
    // Quick memory number 3
    bandstack[BAND_30][2].setFrequency(settings->value("frequency.4.2",10140000).toLongLong());
    bandstack[BAND_30][2].setMode(settings->value("mode.4.2",MODE_CWU).toInt());
    bandstack[BAND_30][2].setFilter(settings->value("filter.4.2",4).toInt());
    bandstack[BAND_30][2].setSpectrumHigh(settings->value("spectrumHigh.4.2",-40).toInt());
    bandstack[BAND_30][2].setSpectrumLow(settings->value("spectrumLow.4.2",-160).toInt());
    bandstack[BAND_30][2].setWaterfallHigh(settings->value("waterfallHigh.4.2",-60).toInt());
    bandstack[BAND_30][2].setWaterfallLow(settings->value("waterfallLow.4.2",-125).toInt());
    bandstack[BAND_30][2].setInfo(settings->value("info.4.2",0).toInt());  //Pointer to stack for storing
    // Current working frequency
    bandstack[BAND_30][3].setFrequency(settings->value("frequency.4.3",0).toLongLong());  //Terminator

    // Quick memory number 1
    bandstack[BAND_20][0].setFrequency(settings->value("frequency.5.0",14010000).toLongLong());
    bandstack[BAND_20][0].setMode(settings->value("mode.5.0",MODE_CWU).toInt());
    bandstack[BAND_20][0].setFilter(settings->value("filter.5.0",4).toInt());
    bandstack[BAND_20][0].setSpectrumHigh(settings->value("spectrumHigh.5.0",-40).toInt());
    bandstack[BAND_20][0].setSpectrumLow(settings->value("spectrumLow.5.0",-160).toInt());
    bandstack[BAND_20][0].setWaterfallHigh(settings->value("waterfallHigh.5.0",-60).toInt());
    bandstack[BAND_20][0].setWaterfallLow(settings->value("waterfallLow.5.0",-125).toInt());
    bandstack[BAND_20][0].setInfo(settings->value("info.5.0",2).toInt());  //Count of Quick Memories 0 .. n
    // Quick memory number 2
    bandstack[BAND_20][1].setFrequency(settings->value("frequency.5.1",14230000).toLongLong());
    bandstack[BAND_20][1].setMode(settings->value("mode.5.1",MODE_USB).toInt());
    bandstack[BAND_20][1].setFilter(settings->value("filter.5.1",3).toInt());
    bandstack[BAND_20][1].setSpectrumHigh(settings->value("spectrumHigh.5.1",-40).toInt());
    bandstack[BAND_20][1].setSpectrumLow(settings->value("spectrumLow.5.1",-160).toInt());
    bandstack[BAND_20][1].setWaterfallHigh(settings->value("waterfallHigh.5.1",-60).toInt());
    bandstack[BAND_20][1].setWaterfallLow(settings->value("waterfallLow.5.1",-125).toInt());
    bandstack[BAND_20][1].setInfo(settings->value("info.5.1",0).toInt());  //Pointer to stack for reading
    // Quick memory number 3
    bandstack[BAND_20][2].setFrequency(settings->value("frequency.5.2",14336000).toLongLong());
    bandstack[BAND_20][2].setMode(settings->value("mode.5.2",MODE_USB).toInt());
    bandstack[BAND_20][2].setFilter(settings->value("filter.5.2",3).toInt());
    bandstack[BAND_20][2].setSpectrumHigh(settings->value("spectrumHigh.5.2",-40).toInt());
    bandstack[BAND_20][2].setSpectrumLow(settings->value("spectrumLow.5.2",-160).toInt());
    bandstack[BAND_20][2].setWaterfallHigh(settings->value("waterfallHigh.5.2",-60).toInt());
    bandstack[BAND_20][2].setWaterfallLow(settings->value("waterfallLow.5.2",-125).toInt());
    bandstack[BAND_20][2].setInfo(settings->value("info.5.2",0).toInt());  //Pointer to stack for storing
    // Current working frequency
    bandstack[BAND_20][3].setFrequency(settings->value("frequency.5.3",0).toLongLong());  //Terminator



    if(settings->contains("currentBand")) {
        currentBand=settings->value("currentBand").toInt();
        currentStack=settings->value("currentStack").toInt();
        for(i=6;i<BAND_LAST;i++) {
            s.sprintf("stack.%d",i);
            stack[i]=settings->value(s).toInt();
            qDebug() << "Band::loadSettings: " << i << " stack=" << stack[i];
            for(j=0;j<BANDSTACK_ENTRIES;j++) {
                s.sprintf("frequency.%d.%d",i,j);
                bandstack[i][j].setFrequency(settings->value(s).toLongLong());
                qDebug() << "Band::loadSettings: " << i << ":" << j << "=" << bandstack[i][j].getFrequency();
                if(bandstack[i][j].getFrequency()==0LL) break;
                s.sprintf("filter.%d.%d",i,j);
                bandstack[i][j].setFilter(settings->value(s).toInt());
                s.sprintf("mode.%d.%d",i,j);
                bandstack[i][j].setMode(settings->value(s).toInt());
                //            bandstack[i][j].setStep(settings->value("step").toInt());
                s.sprintf("spectrumHigh.%d.%d",i,j);
                bandstack[i][j].setSpectrumHigh(settings->value(s).toInt());
                s.sprintf("spectrumLow.%d.%d",i,j);
                bandstack[i][j].setSpectrumLow(settings->value(s).toInt());
                s.sprintf("waterfallHigh.%d.%d",i,j);
                bandstack[i][j].setWaterfallHigh(settings->value(s).toInt());
                s.sprintf("waterfallLow.%d.%d",i,j);
                bandstack[i][j].setWaterfallLow(settings->value(s).toInt());
            }
        }
        settings->endGroup();
    }
    settings->beginGroup("bandLimits");
    if(settings->contains("limits.22.min")) { //We have a table of valid limits stored
        limits.clear();
        for (i=0;i<23;i++) {
            s.sprintf("limits.%d.min",i);
            limitMin=settings->value(s).toLongLong();
            s.sprintf("limits.%d.max",i);
            limitMax=settings->value(s).toLongLong();
            limits << BandLimit(limitMin,limitMax);
        }
    }
    settings->endGroup();
    qDebug()<<Q_FUNC_INFO<<":  bandstack[BAND_160][0].getFrequency() = "<<bandstack[BAND_160][0].getFrequency();
}

void Band::saveSettings(QSettings* settings) {
    int i,j;
    QString s;
    BandLimit limitItem;

    settings->beginGroup("Band");
    settings->setValue("currentBand",currentBand);
    settings->setValue("currentStack",currentStack);

    for(i=0;i<BAND_LAST;i++) {
        s.sprintf("stack.%d",i);
        settings->setValue(s,stack[i]);
        for(j=0;j<BANDSTACK_ENTRIES;j++) {
            if(bandstack[i][j].getFrequency()!=0LL) {
                s.sprintf("frequency.%d.%d",i,j);
                settings->setValue(s,bandstack[i][j].getFrequency());
                s.sprintf("filter.%d.%d",i,j);
                settings->setValue(s,bandstack[i][j].getFilter());
                s.sprintf("mode.%d.%d",i,j);
                settings->setValue(s,bandstack[i][j].getMode());
                s.sprintf("spectrumHigh.%d.%d",i,j);
                settings->setValue(s,bandstack[i][j].getSpectrumHigh());
                s.sprintf("spectrumLow.%d.%d",i,j);
                settings->setValue(s,bandstack[i][j].getSpectrumLow());
                s.sprintf("waterfallHigh.%d.%d",i,j);
                settings->setValue(s,bandstack[i][j].getWaterfallHigh());
                s.sprintf("waterfallLow.%d.%d",i,j);
                settings->setValue(s,bandstack[i][j].getWaterfallLow());
            } else {
                break;
            }
        }
    }
    settings->endGroup();

    settings->beginGroup("bandLimits");
    i = 0;
    limitItem = limits.at(i);
    while (limitItem.min()!=0LL) {
        s.sprintf("limits.%d.min",i);
        settings->setValue(s,limitItem.min());
        s.sprintf("limits.%d.max",i);
        settings->setValue(s,limitItem.max());
        i++;
        limitItem = limits.at(i);
    }
    s.sprintf("limits.%d.min",i);
    settings->setValue(s,0);
    s.sprintf("limits.%d.max",i);
    settings->setValue(s,0);
    settings->endGroup();
}

void Band::initBand(int b) {
    currentBand=b;
    qDebug() << __FUNCTION__ << ": currentBand = " << currentBand; //gvj temp
    emit bandChanged(currentBand, currentBand);
}

int Band::getBand() {
    return currentBand;
}

QString Band::getStringBand() {
    QString b="Gen";

    b=getStringBand(currentBand);

    b.append("(");
    b.append(QString::number(currentStack));
    b.append(")");

    return b;
}

QString Band::getStringBand(int band) {
    QString b="Gen";

    switch(band) {
        case BAND_160:
            b="160 Mtrs";
            break;
        case BAND_80:
            b="80 Mtrs";
            break;
        case BAND_60:
            b="60 Mtrs";
            break;
        case BAND_40:
            b="40 Mtrs";
            break;
        case BAND_30:
            b="30 Mtrs";
            break;
        case BAND_20:
            b="20 Mtrs";
            break;
        case BAND_17:
            b="17 Mtrs";
            break;
        case BAND_15:
            b="15 Mtrs";
            break;
        case BAND_12:
            b="12 Mtrs";
            break;
        case BAND_10:
            b="10 Mtrs";
            break;
        case BAND_6:
            b="6 Mtrs";
            break;
        case BAND_GEN:
            b="Gen";
            break;
        case BAND_WWV:
            b="WWV";
            break;
    }

    return b;
}

int Band::getBandStackEntry() {
    return currentStack;
}


long long Band::getFrequency() {
    return bandstack[currentBand][currentStack].getFrequency();
}

int Band::getMode() {
    return bandstack[currentBand][currentStack].getMode();
}

int Band::getFilter() {
    return bandstack[currentBand][currentStack].getFilter();
}

int Band::getInfo() {
    return bandstack[currentBand][currentStack].getInfo();
}

int Band::getSpectrumHigh() {
    return bandstack[currentBand][currentStack].getSpectrumHigh();
}

int Band::getSpectrumLow() {
    return bandstack[currentBand][currentStack].getSpectrumLow();
}

int Band::getWaterfallHigh() {
    return bandstack[currentBand][currentStack].getWaterfallHigh();
}

int Band::getWaterfallLow() {
    return bandstack[currentBand][currentStack].getWaterfallLow();
}

BandLimit Band::getBandLimits(long long minDisplay, long long maxDisplay) {
    BandLimit result=limits.at(limits.size()-1);

    qDebug() << "Band::getBandLimits: " << minDisplay << "," << maxDisplay;
    for(int i=0;i<limits.size();i++) {
        result=limits.at(i);

        if((result.min()>=minDisplay&&result.min()<=maxDisplay) || // band min within the display
           (result.max()<=maxDisplay&&result.max()>=minDisplay) || // band max within the display
           (minDisplay>=result.min()&&maxDisplay<=result.max())) { // display within a band
            break;
        }
    }
    qDebug() << "gvj value of result is min, max ... " << result.min() << "," << result.max();
    return result;

}

void Band::setFrequency(long long f) {  //Called by UI::frequencyChanged(long long frequency)
    BandLimit band;
    int newBand, newStack;

    for(newBand=0;newBand<limits.size();newBand++) {      //Check to see what band this frequency lies in
        band=limits.at(newBand);
        if((band.min()<=f)&&(band.max()>=f)) {; // then frequency is within this band
            break;
        }
    }
    if(newBand == limits.size()) { //frequency not found within any band so it is "GEN"
        newBand = BAND_GEN;
    }

    qDebug() << "In setFrequency(), the value of newBand, currentBand & f = " << newBand <<", " << currentBand << ", " << f;

    if(currentBand!=newBand) {   //True if we changed band so setup new band
        newStack = stack[newBand];
        bandstack[newBand][newStack].setFrequency(f);
        bandstack[newBand][newStack].setMode(getMode());
        bandstack[newBand][newStack].setFilter(getFilter());
        bandstack[newBand][newStack].setSpectrumHigh(getSpectrumHigh());
        bandstack[newBand][newStack].setSpectrumLow(getSpectrumLow());
        bandstack[newBand][newStack].setWaterfallHigh(getWaterfallHigh());
        bandstack[newBand][newStack].setWaterfallLow(getWaterfallLow());
        selectBand(newBand);
    } else {
        bandstack[currentBand][currentStack].setFrequency(f);
    }
}

void Band::setMode(int m) {
    bandstack[currentBand][currentStack].setMode(m);
}

void Band::setFilter(int f) {
    bandstack[currentBand][currentStack].setFilter(f);
}

void Band::setSpectrumHigh(int h) {
    bandstack[currentBand][currentStack].setSpectrumHigh(h);
}

void Band::setSpectrumLow(int l) {
    bandstack[currentBand][currentStack].setSpectrumLow(l);
}

void Band::setWaterfallHigh(int h) {
    bandstack[currentBand][currentStack].setWaterfallHigh(h);
}

void Band::setWaterfallLow(int l) {
    bandstack[currentBand][currentStack].setWaterfallLow(l);
}

/*
void Band::bandSelected(int b,long long currentFrequency) {
    long long f=0;
    int previousBand=currentBand;
    currentBand=b;

    // save the current frequency in the current bandstack entry
    bandstack[currentBand][currentStack].setFrequency(currentFrequency);

    if(previousBand==currentBand) {
        // step through band stack
        currentStack++;
        if(currentStack==BANDSTACK_ENTRIES) {
            currentStack=0;
        } else if(bandstack[currentBand][currentStack].getFrequency()==0LL) {
            currentStack=0;
        }


        qDebug() << "same band currentStack " << currentStack;

    } else {
        // save the current stack
        //stack[currentBand]=currentStack;

        // change the band
        //currentBand=b;
        // get the last stack entry used
        currentStack=stack[currentBand];
        bandstack[currentBand][currentStack].setFrequency(currentFrequency);
        bandstack[currentBand][currentStack].setMode(getMode());
        bandstack[currentBand][currentStack].setFilter(getFilter());
        qDebug() << "currentBand currentStack " << currentBand << ", " << currentStack;
        emit bandChanged(previousBand,currentBand);
    }

//    f = bandstack[currentBand][currentStack].getFrequency();
//    return f;
}
*/

//** Checks a band change signal for either a switch to a new band or traverse the quick memory. **/
//Called by VFO band button click or main menu band selection which will pass band or band button ID.
//Also called by a frequency change which takes us out of currend band. e.g Keypad or VFO frequency change.
void Band::selectBand(int b) {
    int previousBand=currentBand;
    currentBand=b;

    qDebug() << "Band::selectBand: previousBand:" << previousBand << " currentBand:" << currentBand << " currentStack:" << currentStack;
    if(previousBand==currentBand) { //We are going to traverse the quick memory for the current band
        // step through band stack
        currentStack++;
        if(currentStack == BANDSTACK_ENTRIES) {
            currentStack = 0;
        } else if (bandstack[currentBand][currentStack].getFrequency() == 0LL) {
            currentStack = 0;
        }
        stack[currentBand]=currentStack;
    } else {
        // Stepping to a new band
        qDebug() << "Band::selectBand: new band: stack: " << stack[previousBand];
        currentStack=stack[currentBand];
    }

    qDebug() << "selectBand " << currentBand << ":" << currentStack << " f=" << bandstack[currentBand][currentStack].getFrequency();

    emit bandChanged(previousBand,currentBand);
}

void Band::quickMemStore()
{
    qDebug()<<Q_FUNC_INFO<<"Got to QuickMemStore";
}

