#pragma once
#include <windows.h>


enum dk_fnames {
	dkTS		= 0,
	dkAX		= 1,
	dkAY		= 2,
	dkAZ		= 3,
	dkWX		= 4,
	dkWY		= 5,
	dkWZ		= 6,
	dkAW		= 7,
	dkAA		= 8,
	dkWW		= 9
};

struct swingData {
	float timestamp, ax, ay, az, wx, wy, wz;
};

struct swingDataEX {
	float timestamp;
	float ax;//presumably, the x coord of either the bat or the ball 
	float ay;//presumably, the y coord of either the bat or the ball
	float az;//presumably, the z coord of either the bat or the ball
	float wx;//presumably, the x coord of either the ball or the bat
	float wy;//presumably, the y coord of either the ball or the bat
	float wz;//presumably, the z coord of either the ball or the bat
	float awDist;// Distance between (a) coord and (w) coord for the current element
	float aaDist;// Distance between (a) coord of the current element and the (a) coord of the next element
	float wwDist;// Distance between (w) coord of the current element and the (w) coord of the next element
};
