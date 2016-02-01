// utils.cpp
// Oliver Thomson Brown
// 2016-02-01

#include "ep015.h"

// find the upper and lower bounds of valid bit strings
unsigned long long int* GetBounds(const int BIT_WIDTH)
{
    unsigned long long int* bounds = new unsigned long long int[2];

    bounds[0] = IntPow(2, (BIT_WIDTH / 2)) - 1;
    bounds[1] = IntPow(2, BIT_WIDTH) - 1 - bounds[0];

    return bounds;
}

// determine if the Hamming weight of the fixed width binary representation is BIT_WIDTH / 2
bool IsValid(unsigned long long int decInt, const int BIT_WIDTH)
{
    // relies on decInt having *at least* (BIT_WIDTH / 2) set bits
    int setCount = 0;
    int setLimit = BIT_WIDTH / 2;

    while (decInt > 0) {
        setCount += (decInt % 2);
        if (setCount > setLimit) return false;
        decInt /= 2;
    }
    
    return true;
}

// calculate the exponentiation of two integers
unsigned long long int IntPow(int intBase, int exponent)
{
    // uses exponentiation by squaring as read on Wikipedia
    // does not check that input is valid and is not 0 or 1
    unsigned long long int remain = 1;
    unsigned long long int base = (unsigned long long int) intBase;

    while (exponent > 1) {
        if ((exponent % 2) == 1) {
            remain *= base;
            base *= base;
            exponent--;
        } else base*= base;

        exponent /= 2;
    }

    return base * remain;
} 
