// lpf.cpp
// file which implements largest prime factor algorithm
// Oliver Thomson Brown
// 2016-01-27

#include <cmath>
#include "ep003.h"

long int LargestPrimeFactor (long int target, long int lowerBound)
{
    long int i;
    long int lpf = -1;
	long int targetRt; 

	if (lowerBound == 2) {
		if (IsFactor(target, 2)) {
			target /= 2;
			lpf = LargestPrimeFactor(target, 2);
		} else {
			lpf = LargestPrimeFactor(target, 3);
		} 
	}

	if (!IsPrime(target)) {	
		targetRt = (long int) std::sqrt(target); 

		for (i = lowerBound; i < targetRt; i += 2) {
			if (IsFactor(target, i)) {
				if (IsPrime(i)) {
					target /= i;
					lpf = LargestPrimeFactor(target, i);
					return lpf;
				}
			}
		}
	} else {
		lpf = target;
		return lpf;
	}

	return lpf;
}
