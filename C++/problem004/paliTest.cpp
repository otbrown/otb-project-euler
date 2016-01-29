// paliTest.cpp
// function to test whether an integer
// is palindromic
// Oliver Thomson Brown
// 2016-01-29

#include "ep004.h"

bool IsPali(int number)
{
    int i;
    int length = IntLen(number);
    int* digits = IntSplit(number, length);

    for (i = 0; i < (length / 2); ++i) {
        if (digits[i] != digits[length - 1 - i]) return false;
    }

    delete[] digits;

    return true;
}
