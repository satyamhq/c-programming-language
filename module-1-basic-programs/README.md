# Module 1: Basic C Programs

Welcome to **Module 1** of the C Programming Course! This module contains **50 fundamental C programs** that cover the essential concepts every beginner must learn.

---

## 📋 Table of Contents

- [Overview](#overview)
- [Prerequisites](#prerequisites)
- [How to Compile and Run](#how-to-compile-and-run)
- [Program List](#program-list)
- [Concepts Covered](#concepts-covered)

---

## 📖 Overview

This module is designed for beginners who are learning C programming. Each program is well-documented with:
- Clear comments explaining the logic
- Concepts covered in the program
- Easy-to-understand variable names

---

## 🔧 Prerequisites

- **GCC Compiler** (MinGW for Windows, or GCC for Linux/Mac)
- **Text Editor or IDE** (VS Code, Code::Blocks, Dev-C++, etc.)
- Basic understanding of programming concepts

---

## 🚀 How to Compile and Run

### On Windows (using MinGW):
```bash
gcc filename.c -o program.exe
./program.exe
```

### On Linux/Mac:
```bash
gcc filename.c -o program
./program
```

### For programs using math.h (programs 29, 30, 42, 48):
```bash
gcc filename.c -o program -lm
```

---

## 📚 Program List

### Section 1: Basics (01-10)
| # | Program | Description |
|---|---------|-------------|
| 01 | [hello-world.c](01-hello-world.c) | The classic first program - printing to console |
| 02 | [add-user-input.c](02-add-user-input.c) | Addition of two numbers with user input |
| 03 | [balance-fee-input.c](03-balance-fee-input.c) | Multiple data type inputs (int, float, char) |
| 04 | [reg-fee-program.c](04-reg-fee-program.c) | Constants using #define and const |
| 05 | [memory-size.c](05-memory-size.c) | sizeof operator for all data types |
| 06 | [area-of-circle.c](06-area-of-circle.c) | Calculate area using π * r² |
| 07 | [area-of-rectangle.c](07-area-of-rectangle.c) | Calculate area = length × width |
| 08 | [area-of-triangle.c](08-area-of-triangle.c) | Calculate area = ½ × base × height |
| 09 | [simple-interest.c](09-simple-interest.c) | Calculate SI = (P × R × T) / 100 |
| 10 | [celsius-to-fahrenheit.c](10-celsius-to-fahrenheit.c) | Temperature conversion C → F |

### Section 2: Conversions & Swapping (11-20)
| # | Program | Description |
|---|---------|-------------|
| 11 | [fahrenheit-to-celsius.c](11-fahrenheit-to-celsius.c) | Temperature conversion F → C |
| 12 | [swap-two-numbers.c](12-swap-two-numbers.c) | Swap using third variable |
| 13 | [swap-without-third-variable.c](13-swap-without-third-variable.c) | Swap using arithmetic |
| 14 | [sum-of-digits.c](14-sum-of-digits.c) | Calculate sum of digits |
| 15 | [reverse-number.c](15-reverse-number.c) | Reverse a number |
| 16 | [factorial.c](16-factorial.c) | Calculate n! (factorial) |
| 17 | [power-of-number.c](17-power-of-number.c) | Calculate base^exponent |
| 18 | [ascii-value.c](18-ascii-value.c) | Print ASCII value of character |
| 19 | [quotient-remainder.c](19-quotient-remainder.c) | Division quotient and remainder |
| 20 | [average-of-numbers.c](20-average-of-numbers.c) | Calculate average of N numbers |

### Section 3: More Calculations (21-30)
| # | Program | Description |
|---|---------|-------------|
| 21 | [kilometers-to-miles.c](21-kilometers-to-miles.c) | Distance conversion |
| 22 | [perimeter-of-rectangle.c](22-perimeter-of-rectangle.c) | Calculate perimeter |
| 23 | [circumference-of-circle.c](23-circumference-of-circle.c) | Calculate 2πr |
| 24 | [arithmetic-operations.c](24-arithmetic-operations.c) | All arithmetic operations demo |
| 25 | [size-of-datatypes.c](25-size-of-datatypes.c) | Size of all C data types |
| 26 | [count-digits.c](26-count-digits.c) | Count digits in a number |
| 27 | [multiplication-table.c](27-multiplication-table.c) | Print multiplication table |
| 28 | [first-n-natural-numbers.c](28-first-n-natural-numbers.c) | Print 1 to N with sum |
| 29 | [square-root.c](29-square-root.c) | Calculate √n using math.h |
| 30 | [compound-interest.c](30-compound-interest.c) | Calculate compound interest |

### Section 4: Conditions & Comparisons (31-40)
| # | Program | Description |
|---|---------|-------------|
| 31 | [even-odd.c](31-even-odd.c) | Check if number is even/odd |
| 32 | [positive-negative-zero.c](32-positive-negative-zero.c) | Check number sign |
| 33 | [max-of-two.c](33-max-of-two.c) | Find maximum of two numbers |
| 34 | [max-of-three.c](34-max-of-three.c) | Find maximum of three numbers |
| 35 | [for-loop-numbers.c](35-for-loop-numbers.c) | For loop demonstration |
| 36 | [while-loop-numbers.c](36-while-loop-numbers.c) | While loop demonstration |
| 37 | [do-while-loop.c](37-do-while-loop.c) | Do-while loop demonstration |
| 38 | [sum-even-odd.c](38-sum-even-odd.c) | Sum of even and odd numbers |
| 39 | [fibonacci-series.c](39-fibonacci-series.c) | Generate Fibonacci sequence |
| 40 | [prime-number.c](40-prime-number.c) | Check if number is prime |

### Section 5: Advanced Basics (41-50)
| # | Program | Description |
|---|---------|-------------|
| 41 | [palindrome-number.c](41-palindrome-number.c) | Check palindrome number |
| 42 | [armstrong-number.c](42-armstrong-number.c) | Check Armstrong number |
| 43 | [gcd.c](43-gcd.c) | Find GCD (Euclidean algorithm) |
| 44 | [lcm.c](44-lcm.c) | Find LCM using GCD |
| 45 | [prime-in-range.c](45-prime-in-range.c) | Print primes in range |
| 46 | [calculator-switch.c](46-calculator-switch.c) | Calculator using switch-case |
| 47 | [decimal-to-binary.c](47-decimal-to-binary.c) | Number system conversion |
| 48 | [binary-to-decimal.c](48-binary-to-decimal.c) | Number system conversion |
| 49 | [factors-of-number.c](49-factors-of-number.c) | Find all factors |
| 50 | [leap-year.c](50-leap-year.c) | Check leap year |

---

## 🎯 Concepts Covered

### Basic Concepts
- ✅ `#include` directive
- ✅ `main()` function
- ✅ `printf()` and `scanf()`
- ✅ Data types (int, float, double, char)
- ✅ Variables and constants
- ✅ `sizeof` operator

### Operators
- ✅ Arithmetic operators (+, -, *, /, %)
- ✅ Comparison operators (==, !=, <, >, <=, >=)
- ✅ Logical operators (&&, ||, !)
- ✅ Ternary operator (?:)

### Control Structures
- ✅ if-else statements
- ✅ if-else-if ladder
- ✅ switch-case statement
- ✅ for loop
- ✅ while loop
- ✅ do-while loop
- ✅ break statement

### Mathematical Operations
- ✅ Area and perimeter calculations
- ✅ Temperature conversions
- ✅ Interest calculations
- ✅ Number operations (factorial, power, digits)
- ✅ Number system conversions (binary/decimal)

### Number Theory
- ✅ Prime numbers
- ✅ Palindrome numbers
- ✅ Armstrong numbers
- ✅ GCD and LCM
- ✅ Fibonacci series
- ✅ Perfect numbers

---

## 📝 Tips for Beginners

1. **Start from Program 01** and progress sequentially
2. **Type the code yourself** instead of copy-pasting
3. **Read the comments** to understand the logic
4. **Experiment** by modifying values and logic
5. **Debug errors** by reading compiler messages carefully

---

## 📫 Need Help?

If you encounter any issues:
1. Check if you have GCC installed: `gcc --version`
2. Make sure to save files with `.c` extension
3. Read compiler error messages carefully
4. Use `-lm` flag for math.h functions

---

**Happy Coding! 🚀**

*Made with ❤️ for C Programming Learners*
