// lpf.cpp
// file which implements largest prime factor algorithm
// Oliver Thomson Brown
// 2016-01-27

#include "ep003.h"

long int LargestPrimeFactor (long int target)
{
    int i;
    long int lpf = -1;

    for (i = 2; i < (target / 2); i++) {
       if (IsFactor(target, i)) {
           lpf = target / i;
           if (IsPrime(lpf)) break;
       }
    }

    return lpf;
}
