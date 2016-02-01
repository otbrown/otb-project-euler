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
    int dec1 = 9;
    int dec2 = 10;
    int dec3 = 11;

    bounds = GetBounds(BIT_WIDTH);

    cout << "BIT_WIDTH = " << BIT_WIDTH << endl;
    cout << "Upper Bound: " << bounds[1] << endl;
    cout << "Lower Bound: " << bounds[0] << endl;
    cout << endl;

    cout << base << "^" << exp1 << ": " << IntPow(base, exp1) << endl;
    cout << base << "^" << exp2 << ": " << IntPow(base, exp2) << endl;
    cout << base << "^" << exp3 << ": " << IntPow(base, exp3) << endl;
    cout << endl;

    if (IsValid(dec1, BIT_WIDTH)) cout << "9 is 1001." << endl;
    else cout << "IsValid has failed on " << dec1 << "." << endl;
    if (IsValid(dec2, BIT_WIDTH)) cout << "10 is 1010." << endl;
    else cout << "IsValid has failed on " << dec2 << "." << endl;
    if (!IsValid(dec3, BIT_WIDTH)) cout << "11 is 1011." << endl;
    else cout << "IsValid has failed on " << dec3 << "." << endl;

    delete[] bounds;

    return 0;
}
