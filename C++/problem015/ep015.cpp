// ep015.cpp
// solution to project euler problem 15: how many valid routes exist to 
// reach the bottom corner of an 20 x 20 grid, when you can only move down
// or to the right one square at a time
// test gride is 2 x 2, with 6 paths
// Oliver Thomson Brown
// 2016-02-01

// I'm phrasing the problem as "in a 2n width binary number, how many numbers have half 1s, half 0s?"

#include <iostream>
#include <chrono>
#include "ep015.h"

using std::cout;        using std::endl;

int main(void)
{
    const int GRID_SIZE = 2;
    unsigned long long int numPaths = 0;
 
    auto t_start = std::chrono::high_resolution_clock::now();

    numPaths = CountPaths(GRID_SIZE); 

    auto t_finish = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double, milli> dt = t_finish - t_start;
    
    cout << "Number of valid paths in a " << GRID_SIZE << " x " << GRID_SIZE << "grid is " << numPaths << "." << endl
         << "Answer took " << dt.count() << "ms." << endl;

    return 0;
}
