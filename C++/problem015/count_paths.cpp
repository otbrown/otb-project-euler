// count_paths.cpp
// function which given a grid counts the number of
// valid paths as described in Project Euler problem
// 15
// Oliver Thomson Brown
// 2016-02-01

#include "ep015.h"

unsigned long long int CountPaths(const int GRID_SIZE)
{
    const int BIT_WIDTH = 2 * GRID_SIZE;
    unsigned long long int count, decInt;
    unsigned long long int* bounds;

    // for example for BIT_WIDTH=4 lower is 0011, upper is 1100
    bounds = GetBounds(BIT_WIDTH);

    count = 0;
    for (decInt = bounds[0]; decInt < bounds[1] + 1; decInt++) {
        if (IsValid(decInt, BIT_WIDTH)) count++;
    }

    delete[] bounds;

    return count;
}
