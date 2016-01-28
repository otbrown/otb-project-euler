// tests.cpp
// functions to test for integerness and primeness
// Oliver Thomson Brown
// 2016-01-27

#include "ep003.h"

bool IsFactor(long int target, long int factor)
{
    return (target % factor == 0) ? true : false;
}

bool IsPrime (long int factor)
{
    // uses Fermat's Little Theorem
    // cast to int should be safe as 2^int is an int
    int fermat = ModularExp(2, factor, factor);  

    return (fermat == 2) ? true : false;
}
