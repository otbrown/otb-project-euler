// utilTest.cpp
// Oliver Thomson Brown
// 2016-02-01

#include <iostream>
#include "ep015.h"

using std::cout;    using std::endl;

int main (void)
{
    const int BIT_WIDTH = 4;
    unsigned long long int* bounds;
    int base = 2;
    int exp1 = 3;
    int exp2 = 10;
    int exp3 = 15;
    unsigned long long int dec;

    bounds = GetBounds(BIT_WIDTH);

    cout << "BIT_WIDTH = " << BIT_WIDTH << endl;
    cout << "Upper Bound: " << bounds[1] << endl;
    cout << "Lower Bound: " << bounds[0] << endl;
    cout << endl;

    cout << base << "^" << exp1 << ": " << IntPow(base, exp1) << endl;
    cout << base << "^" << exp2 << ": " << IntPow(base, exp2) << endl;
    cout << base << "^" << exp3 << ": " << IntPow(base, exp3) << endl;
    cout << endl;

    for (dec = bounds[0]; dec < (bounds[1] + 1); dec++) {
        cout << dec << ": ";
        if (IsValid(dec, BIT_WIDTH)) cout << "VALID" << endl;
        else cout << "INVALID" << endl;
    }

    delete[] bounds;

    return 0;
}
