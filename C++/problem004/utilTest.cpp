// utilTest.cpp
// demonstrates utils are functioning correctly
// Oliver Thomson Brown
// 2016-01-29

#include <iostream>
#include <cstdio>
#include "ep004.h"

using std::cout;        using std::endl;

int main (void)
{
    int i;

    int testInt1 = 100;
    int testInt2 = 9;
    int testInt3 = 1279;
    int testInt4 = 1739454;

    int len1 = IntLen(testInt1); 
    int len2 = IntLen(testInt2); 
    int len3 = IntLen(testInt3); 
    int len4 = IntLen(testInt4); 

    int* digits1 = IntSplit(testInt1, len1);
    int* digits2 = IntSplit(testInt2, len2);
    int* digits3 = IntSplit(testInt3, len3);
    int* digits4 = IntSplit(testInt4, len4);

    cout << testInt1 << " has " << len1 << " digits." << endl;
    cout << testInt2 << " has " << len2 << " digits." << endl;
    cout << testInt3 << " has " << len3 << " digits." << endl;
    cout << testInt4 << " has " << len4 << " digits." << endl;

    cout << "    N    | Digits " << endl << "---------|---------------" << endl;

    printf("%9i| ", testInt1);
    for (i = len1 - 1; i > -1; --i) printf("%2i", digits1[i]);
    cout << endl;
    
    printf("%9i| ", testInt2);
    for (i = len2 - 1; i > -1; --i) printf("%2i", digits2[i]);
    cout << endl;

    printf("%9i| ", testInt3);
    for (i = len3 - 1; i > -1; --i) printf("%2i", digits3[i]);
    cout << endl;

    printf("%9i| ", testInt4);
    for (i = len4 - 1; i > -1; --i) printf("%2i", digits4[i]);
    cout << endl;

    delete[] digits1;
    delete[] digits2;
    delete[] digits3;
    delete[] digits4;

    return 0;
}
