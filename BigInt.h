#ifndef BIGINT_H
#define BIGINT_H

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class BigInt {
    string digits;

public:
    // Constructors
    BigInt(unsigned long long n = 0);
    BigInt(string &);
    BigInt(const char *);
    BigInt(const BigInt &); // FIXED: Added 'const' here

    // Helper Functions
    friend void divide_by_2(BigInt &a);
    friend bool Null(const BigInt &);
    friend int Length(const BigInt &);
    int operator[](const int) const;

    // Direct assignment
    BigInt &operator=(const BigInt &);

    // Post/Pre - Incrementation
    BigInt &operator++();
    BigInt operator++(int temp);
    BigInt &operator--();
    BigInt operator--(int temp);

    // Addition and Subtraction
    friend BigInt &operator+=(BigInt &, const BigInt &);
    friend BigInt operator+(const BigInt &, const BigInt &);
    friend BigInt operator-(const BigInt &, const BigInt &);
    friend BigInt &operator-=(BigInt &, const BigInt &);

    // Comparison operators
    friend bool operator==(const BigInt &, const BigInt &);
    friend bool operator!=(const BigInt &, const BigInt &);
    friend bool operator>(const BigInt &, const BigInt &);
    friend bool operator>=(const BigInt &, const BigInt &);
    friend bool operator<(const BigInt &, const BigInt &);
    friend bool operator<=(const BigInt &, const BigInt &);

    // Multiplication and Division
    friend BigInt &operator*=(BigInt &, const BigInt &);
    friend BigInt operator*(const BigInt &, const BigInt &);
    friend BigInt &operator/=(BigInt &, const BigInt &);
    friend BigInt operator/(const BigInt &, const BigInt &);

    // Modulo
    friend BigInt operator%(const BigInt &, const BigInt &);
    friend BigInt &operator%=(BigInt &, const BigInt &);

    // Power Function
    friend BigInt &operator^=(BigInt &, const BigInt &);
    friend BigInt operator^(BigInt &, const BigInt &);

    // Square Root Function
    friend BigInt sqrt(BigInt &a);

    // Read and Write
    friend ostream &operator<<(ostream &, const BigInt &);
    friend istream &operator>>(istream &, BigInt &);

    // Others
    friend BigInt NthCatalan(int n);
    friend BigInt NthFibonacci(int n);
    friend BigInt Factorial(int n);
};

// FIXED: Declare these outside the class so main.cpp can find them
BigInt NthCatalan(int n);
BigInt NthFibonacci(int n);
BigInt Factorial(int n);

#endif