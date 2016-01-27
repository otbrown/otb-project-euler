// tests.cpp
// functions to test for integerness and primeness
// Oliver Thomson Brown
// 2016-01-27

#include <cmath>
#include "ep003.h"

bool IsFactor(int target, int factor)
{
    return (target % factor == 0) ? true : false;
}

bool IsPrime (int factor)
{
    double fermat = std::exp2(factor);

    return ((int)fermat % factor == 2) ? true : false;
}
