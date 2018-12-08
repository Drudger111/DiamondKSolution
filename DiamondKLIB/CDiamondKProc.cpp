#include "stdafx.h"
#include "CDiamondKProc.h"



CDiamondKProc::CDiamondKProc()
	:sdArray((swingDataEX*)dkDataVar)
	, sdLen(dkDataVarSize / sizeof(swingDataEX))
	, tickCountA(0)
	, tickCountB(0)
{
}


CDiamondKProc::~CDiamondKProc()
{
	//nothing to clean up
}

//
//From indexBegin to indexEnd, search data for values that are higher than threshold.
//Return the first index where data has values that meet this criteria for at least winLength samples.
//
long CDiamondKProc::searchContinuityAboveValue(float data, unsigned long indexBegin, unsigned long indexEnd, float threshold, unsigned long winLength){

	tickCountB = 0;
	tickCountA=GetTickCount64();

	float			dbVal		= 0;
	unsigned int	x			= 0;
	int				sampleCount	= 0;
	int				c			= 0;
	long			retIDX		= 0;
	float			lastVal		= 0;

	//  Since I have no way of knowing what "data" is, which field it represents, 
	//  or what it looks like. I will assume it is the awDist value in the array.
	//  awDist is the distance in 3 dimensional space between the 
	//  "a" coordinate and the "w" coordinate.

	if (indexBegin > (sdLen - winLength) || indexEnd > (sdLen - winLength)) {
		tickCountB = GetTickCount64();
		return -1;
	}

	lastVal = data;

	for (x = indexBegin; x < indexEnd; x++) {
		if (sdArray[x].awDist > lastVal&&sdArray[x].awDist < (lastVal + threshold)) {
			lastVal = sdArray[x].awDist;
			if (sampleCount == 0) {
				retIDX = x;
			}
			sampleCount++;
			if (sampleCount >= winLength) {
				break;
			}
		}
		else {
			retIDX = -1;
			sampleCount = 0;
		}
	}

	tickCountB = GetTickCount64();
	return retIDX;
}

//
//From indexBegin to indexEnd(where indexBegin is larger than indexEnd), 
//search data for values that are higher than thresholdLo and lower than thresholdHi.
//Return the first index where data has values that meet this criteria for at least winLength samples.
//
long CDiamondKProc::backSearchContinuityWithinRange(float data, unsigned long indexBegin, unsigned long indexEnd, float thresholdLo, float thresholdHi, unsigned longwinLength) {
	long iVal = -1;

	return iVal;
}

//
//From indexBegin to indexEnd, search data1 for values that are higher than threshold1 and 
//also search data2 for values that are higher than threshold2.
//Return the first index where both data1 and data2 have values that meet these criteria for at least 
//winLength samples.
//
long CDiamondKProc::searchContinuityAboveValueTwoSignals(float data1, float data2, unsigned long indexBegin, unsigned long indexEnd,float threshold1,float threshold2, unsigned long winLength) {
	long iVal = -1;

	return iVal;
}

//
//From indexBegin to indexEnd, search data for values that are higher than thresholdLo and lower than thresholdHi.
//Return the the starting index and ending index of all continuous samples that meet this criteria for at least 
//winLength data points.
//
long CDiamondKProc::searchMultiContinuityWithinRange(float data, unsigned long indexBegin, unsigned long indexEnd,float thresholdLo,float thresholdHi, unsigned long winLength) {
	long iVal = -1;

	return iVal;
}

ULONGLONG CDiamondKProc::GetLastExecTime() {

	if(tickCountB > tickCountA) {
		return (tickCountB - tickCountA);
	}
	return 0;
}






