# 🚀 BigInt C++ Library (Arbitrary-Precision Arithmetic)

A high-performance C++ library designed to handle mathematical operations on integers of unlimited size, bypassing the 64-bit hardware limitations of standard data types (`unsigned long long`).

![Language](https://img.shields.io/badge/language-C++-blue.svg)
![License](https://img.shields.io/badge/license-MIT-green.svg)
![Build](https://img.shields.io/badge/build-passing-brightgreen.svg)

## 📌 Overview
Standard CPU registers are limited to 64 bits, meaning they cannot store numbers larger than $1.8 \times 10^{19}$. This library utilizes **dynamic memory allocation (`std::vector` / `std::string`)** and **operator overloading** to perform arithmetic on numbers with thousands of digits.

## ⚙️ Key Features
- **Unlimited Precision:** Capacity is limited only by system RAM.
- **Operator Overloading:** Use standard operators (`+`, `-`, `*`, `/`, `%`) directly on `BigInt` objects.
- **Mathematical Algorithms:**
  - Implements $O(N^2)$ multiplication logic.
  - Custom Division and Modulo algorithms for large strings.
  - **Factorial & Fibonacci** generators capable of computing massive sequences (e.g., Factorial 100).

## 📸 Demo Output
*Below is the library calculating Factorial(100) — a 158-digit number that standard C++ cannot handle.*
<img width="1598" height="1034" alt="demo_output3 png" src="https://github.com/user-attachments/assets/47ff2054-7cb3-4e34-aa87-50ce3bd083f2" />
<img width="1633" height="1016" alt="demo_output2 png" src="https://github.com/user-attachments/assets/7b438231-a132-4044-8271-68ca2e5ac651" />
<img width="1519" height="966" alt="demo_output1 png" src="https://github.com/user-attachments/assets/a1189914-bee6-43f4-a629-8188a520a273" />


## 🛠️ How to Run
You can clone this repository and compile it using `g++`.

```bash
# Clone the repository
git clone [https://github.com/Dhruva105/BigInt-CPP-Library.git](https://github.com/Dhruva105/BigInt-CPP-Library.git)

# Navigate to the folder
cd BigInt-CPP-Library

# Compile the driver code
g++ main.cpp BigInt.cpp -o big_integer_system

# Run the executable
./big_integer_system
```
## 💻 Usage Example
Here is how you can use the library in your own code:

C++

#include "BigInt.h"

int main() {
    BigInt num1 = "123456789123456789";
    BigInt num2 = 100;

    // Automatic arbitrary-precision arithmetic
    BigInt result = num1 * num2;

    cout << "Result: " << result << endl;
    return 0;
}

    return 0;
}
