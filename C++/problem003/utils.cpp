// utils.cpp
// functions to facilitate primarity testing
// Oliver Thomson Brown
// 2016-01-28

#include "ep003.h"

int ModularExp(int base, long int exponent, long int modulus)
{
    // modular exponentiaition code taken from 'Memory
    // Efficient Method' pseudo-code given on the 
    // 'Modular Exponentiation' Wikipedia page

    int result;
    long int exp_prime;

    if (modulus == 1) {
        return 0;
    } else {
        result = 1;
        for (exp_prime = 1; exp_prime <= exponent; exp_prime++) {
            result = (result * base) % modulus;
        }
    }

    return result;
}
