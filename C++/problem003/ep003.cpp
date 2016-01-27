// ep003.cpp
// solution to project euler problem 3: what is the largest prime factor of 600851475143?
// Oliver Thomson Brown
// 2016-01-27

#include <iostream>
#include "ep003.h"

using std::cout;        using std::endl;

int main(void)
{
    const int target = 13195;
    int lpf;

    lpf = LargestPrimeFactor(target);

    cout << "Largest prime factor of " << target << " is " << lpf << "." << endl;

    return 0;
}
