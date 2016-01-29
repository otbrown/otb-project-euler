// ep003.cpp
// solution to project euler problem 3: what is the largest prime factor of 600851475143?
// test target is 13195, with lpf=29
// Oliver Thomson Brown
// 2016-01-27

#include <iostream>
#include <chrono>
#include <algorithm>
#include <vector>
#include "ep004.h"

using std::cout;        using std::endl;

int main(void)
{
    const int numDigits = 2;
    const int upper = 99;
    const int lower = 10;
    int a, b;
    int pali = -1;
    int rng = (upper - lower + 1) * (upper - lower + 1);
    std::vector<int> product(rng);
    std::vector<int>::iterator iter = product.begin();

    auto t_start = std::chrono::high_resolution_clock::now();

    for (a = lower; a < (upper + 1); ++a) {
        for (b = lower; b < (upper + 1); ++b) {
             *iter = a * b;
             ++iter;
        }
    }

    std::sort(product.begin(), product.end());

    for (iter = (product.end() - 1); iter != product.begin(); --iter) {
        if (IsPali(*iter)) {
            pali = *iter;
            break;
        }
    }

    auto t_finish = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double, std::milli> dt = t_finish - t_start;
    
    cout << "Largest palindromic product of two " << numDigits << "-digit numbers is " << pali << "." << endl
         << "Answer took " << dt.count() << "ms." << endl;

    return 0;
}
