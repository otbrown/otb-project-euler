// ep003.cpp
// solution to project euler problem 3: what is the largest prime factor of 600851475143?
// test target is 13195, with lpf=29
// Oliver Thomson Brown
// 2016-01-27

#include <iostream>
#include <chrono>
#include "ep003.h"

using std::cout;        using std::endl;

int main(void)
{
    //const long int target = 13195;
    const long int target = 600851475143;
    long int lpf;

    auto t_start = std::chrono::high_resolution_clock::now();

    lpf = LargestPrimeFactor(target);

    auto t_finish = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> dt = t_finish - t_start;
    
    cout << "Largest prime factor of " << target << " is " << lpf << "." << endl
         << "Answer took " << dt.count() << "s." << endl;

    return 0;
}
