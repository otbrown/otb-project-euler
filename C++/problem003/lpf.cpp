// lpf.cpp
// file which implements largest prime factor algorithm
// Oliver Thomson Brown
// 2016-01-27

#include "ep003.h"

long int LargestPrimeFactor (long int target)
{
    int i;
    long int lpf = -1;

    if(IsFactor(target, 2)) {
        lpf = target / 2;
        if (IsPrime(lpf)) return lpf;
    }

    for (i = 3; i < (target / 2); i = i + 2) {
       if (IsFactor(target, i)) {
           lpf = target / i;
           if (IsPrime(lpf)) break;
       }
    }

    return lpf;
}
