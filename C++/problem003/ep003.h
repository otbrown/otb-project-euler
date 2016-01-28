#ifndef _ep003_h
#define _ep003_h

// function which returns the largest prime factor of a target 
long int LargestPrimeFactor(long int target);

// test if factor is a factor of target
bool IsFactor(long int target, long int factor);

// test if number is prime
bool IsPrime(long int x);

// calculate modular exponentiation
int ModularExp(int base, long int exponent, long int modulus); 
#endif
