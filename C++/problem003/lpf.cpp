// lpf.cpp
// file which implements largest prime factor algorithm
// Oliver Thomson Brown
// 2016-01-27

#include <cmath>
#include "ep003.h"

long int LargestPrimeFactor (long int target)
{
	long int i = 3;
	long int targetRt;	

	while (IsFactor(target, 2)) target /= 2;

	if (IsPrime(target)) return target;
	
	targetRt = (long int) std::sqrt(target);
	while (i <= targetRt) {
		if (IsFactor(target, i)) {
			if (IsPrime(i)) {
				while (IsFactor(target, i)) target /= i;
				if (IsPrime(target)) break;
				targetRt = (long int) std::sqrt(target);
			}
		}
		i += 2;
	}

	return target;
}
