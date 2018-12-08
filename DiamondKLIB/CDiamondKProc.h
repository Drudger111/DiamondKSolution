#pragma once
#include "latestSwing.h"
#include "swingData.h"



	public class CDiamondKProc
	{


	public:
		CDiamondKProc();
		~CDiamondKProc();
		
		ULONGLONG GetLastExecTime();

		long searchContinuityAboveValue(float data, unsigned long indexBegin, unsigned long indexEnd, float threshold, unsigned long winLength);
		long backSearchContinuityWithinRange(float data, unsigned long indexBegin, unsigned long indexEnd, float thresholdLo, float thresholdHi, unsigned longwinLength);
		long searchContinuityAboveValueTwoSignals(float data1, float data2, unsigned long indexBegin, unsigned long indexEnd, float threshold1, float threshold2, unsigned long winLength);
		long searchMultiContinuityWithinRange(float data, unsigned long indexBegin, unsigned long indexEnd, float thresholdLo, float thresholdHi, unsigned long winLength);

		swingDataEX*		sdArray;
		long				sdLen;


		ULONGLONG			tickCountA;
		ULONGLONG			tickCountB;

	};

