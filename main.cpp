#include <iostream>
#include "BigInt.h"

using namespace std;

int main() {
    // 1. Basic Number Creation
    BigInt first("12345");
    cout << "The number of digits in first big integer = " << Length(first) << '\n';

    BigInt second(12345);
    if (first == second) cout << "first and second are equal!\n";
    else cout << "Not equal!\n";

    // 2. Addition
    BigInt third("10000");
    BigInt fourth("100000");
    BigInt sum = third + fourth;
    cout << "Sum of " << third << " + " << fourth << " = " << sum << '\n';

    // 3. Multiplication (Large Numbers)
    BigInt product = second * third;
    cout << "Product of " << second << " * " << third << " = " << product << '\n';

    // 4. Factorial (The Real Power of BigInt)
    // 100! is massive, standard int cannot hold it.
    cout << "------------------------- Factorial ------------------------------\n";
    for (int i = 0; i <= 100; i++) { // calculating up to 20! for display
        BigInt fact = Factorial(i);
        cout << "Factorial of " << i << " = " << fact << '\n';
    }

    // 5. Fibonacci
    cout << "------------------------- Fibonacci ------------------------------\n";
    for (int i = 0; i <= 100; i++) {
        BigInt Fib = NthFibonacci(i);
        cout << "Fibonacci " << i << " = " << Fib << '\n';
    }

    return 0;
}