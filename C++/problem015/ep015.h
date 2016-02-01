#ifndef _ep015_h_
#define _ep015_h_

// solver function, just takes basic problem parameter
unsigned long long int CountPaths(const int GRID_SIZE);

// finds upper and lower bound on valid bit strings
unsigned long long int* GetBounds(const int BIT_WIDTH);

// check if binary representation of decInt has a Hamming weight of BIT_WIDTH / 2
// (are there an even number of 'downs' and 'rights')
bool IsValid(unsigned long long int decInt, const int BIT_WIDTH);

// function to calculate integer powers using exponentiation by squaring
unsigned long long int IntPow(int base, int exponent);

#endif
