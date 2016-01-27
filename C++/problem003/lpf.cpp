// lpf.cpp
// file which implements largest prime factor algorithm
// Oliver Thomson Brown
// 2016-01-27

#include "ep003.h"

int LargestPrimeFactor (int target)
{
    int i;
    int lpf = -1;

    for (i = 2; i < (target / 2); i++) {
       if (IsFactor(target, i)) {
           lpf = target / i;
           if (IsPrime(lpf)) break;
       }
    }

    return lpf;
}
