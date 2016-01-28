// lpf.cpp
// file which implements largest prime factor algorithm
// Oliver Thomson Brown
// 2016-01-27

#include "ep003.h"

long int LargestPrimeFactor (long int target)
{
    long int i;
    long int lpf = -1;

    for (i = (target / 2); i > 1; i = i - 2) {
       if (IsFactor(target, i)) {
           lpf = i;
           if (IsPrime(lpf)) break;
       }
    }

    return lpf;
}
