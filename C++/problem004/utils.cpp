// utils.cpp
// functions to facilitate the palindrome 
// test for Project Euler problem 4
// Oliver Thomson Brown
// 2016-01-29

#include "ep004.h"

int IntLen(int number)
{
    int length = 0;

    while (number > 0) {
        number /= 10;
        length++;
    }

    return length;
}

int* IntSplit(int number, int length)
{
    int i;
    int* digits = new int[length];

    for (i = 0; i < length; ++i) {
        digits[i] = number % 10;
        number /= 10;
    }

    return digits;
}
