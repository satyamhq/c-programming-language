# CSE101: COMPUTER PROGRAMMING — Complete Study Material
### 📘 Exam-Ready | Interview-Focused | Concept-Driven

> **Syllabus:** CSE101 Computer Programming (C Language + C++ Basics)  
> **Credits:** L:3 T:0 P:2 | **Credits: 4**  
> **Prepared for:** Session 2025–26

---

## 📋 TABLE OF CONTENTS

| Unit | Topic |
|------|-------|
| I | Basics and Introduction to C |
| II | Control Structures and I/O Functions |
| III | User-Defined Functions and Storage Classes |
| IV | Arrays in C |
| V | Pointers, Dynamic Memory Allocation, and Strings |
| VI | Derived Types: Structures, Unions & C++ Basics |
| 📝 | Quick Revision Notes & Cheat Sheet |

---

# ══════════════════════════════════════
# UNIT I — BASICS AND INTRODUCTION TO C
# ══════════════════════════════════════

## 📖 1.1 NOTES

### 1.1.1 What is C?

C is a **general-purpose, procedural, middle-level programming language** developed by **Dennis Ritchie** at Bell Labs in **1972**. It combines the power of assembly language with the readability of high-level languages.

```
High-Level Language (Python, Java)
        ↓ (abstraction)
Middle-Level Language (C)     ← You are here
        ↓ (closer to hardware)
Low-Level Language (Assembly, Machine Code)
```

**Why Learn C?**
- Mother of modern languages (C++, Java, Python are influenced by C)
- Fast execution, direct memory access
- Used in OS kernels, embedded systems, compilers, databases

---

### 1.1.2 C Character Set

The building blocks of C programs:

| Category | Characters |
|----------|-----------|
| **Letters** | A–Z, a–z |
| **Digits** | 0–9 |
| **Special Symbols** | `+ - * / % = < > ! & | ^ ~ ? : ; , . ( ) { } [ ] # @ _` |
| **Whitespace** | space, tab `\t`, newline `\n`, carriage return `\r` |

---

### 1.1.3 Identifiers and Keywords

**Identifiers:** User-defined names for variables, functions, arrays, etc.

**Rules for Identifiers:**
- Can contain letters, digits, and underscore `_`
- Must begin with a letter or underscore
- Case-sensitive (`Age` ≠ `age`)
- Cannot be a keyword
- No limit on length (first 31 characters are significant per ANSI C)

```c
// Valid identifiers
int studentAge;
float _salary;
char first_name[20];

// Invalid identifiers
int 2count;      // starts with digit
float my-salary; // hyphen not allowed
int int;         // keyword
```

**Keywords (32 Reserved Words in C):**

```
auto      break     case      char      const     continue
default   do        double    else      enum      extern
float     for       goto      if        int       long
register  return    short     signed    sizeof    static
struct    switch    typedef   union     unsigned  void
volatile  while
```

> 🔑 **Exam Tip:** Keywords are always lowercase in C. There are exactly **32 keywords** in ANSI C.

---

### 1.1.4 Data Types

Data types define the type and size of data stored in a variable.

#### Primary Data Types

| Data Type | Size | Range | Format Specifier |
|-----------|------|-------|-----------------|
| `char` | 1 byte | -128 to 127 (signed) | `%c` |
| `unsigned char` | 1 byte | 0 to 255 | `%c` |
| `int` | 2 or 4 bytes | -32768 to 32767 (2-byte) | `%d` |
| `unsigned int` | 2 or 4 bytes | 0 to 65535 (2-byte) | `%u` |
| `short int` | 2 bytes | -32768 to 32767 | `%hd` |
| `long int` | 4 bytes | -2,147,483,648 to 2,147,483,647 | `%ld` |
| `float` | 4 bytes | 3.4E-38 to 3.4E+38 (~6 decimal places) | `%f` |
| `double` | 8 bytes | 1.7E-308 to 1.7E+308 (~15 decimal places) | `%lf` |
| `long double` | 10/12/16 bytes | Extended precision | `%Lf` |
| `void` | 0 bytes | No value | — |

#### Memory Layout Analogy
```
char   → [  1 byte  ]
int    → [  4 bytes            ]
float  → [  4 bytes            ]
double → [  8 bytes                        ]
```

#### Derived Data Types
- **Arrays** — collection of same-type elements
- **Pointers** — store memory addresses
- **Structures** — collection of different-type elements
- **Unions** — shared memory for different types

#### User-Defined Types
- `typedef` — create aliases for types
- `enum` — enumeration constants

---

### 1.1.5 Constants and Variables

**Constants:** Values that do not change during program execution.

```c
// Integer constants
42, -7, 0, 0x1F (hex), 077 (octal)

// Float constants
3.14, -2.5, 6.02e23

// Character constants
'A', 'z', '\n', '\t', '\0'

// String constants
"Hello, World!"

// Symbolic constants (using #define)
#define PI 3.14159
#define MAX 100

// Using const keyword
const int SIZE = 50;
```

**Variables:** Named memory locations whose values can change.

```c
// Declaration
int age;
float salary;
char grade;

// Initialization
int age = 21;
float salary = 45000.50;
char grade = 'A';

// Multiple declarations
int a, b, c;
int x = 1, y = 2, z = 3;
```

**Variable Naming Convention:**
```
camelCase    → studentAge (recommended)
snake_case   → student_age
PascalCase   → StudentAge (usually for functions/classes)
```

---

### 1.1.6 Operators

#### 1. Arithmetic Operators

| Operator | Operation | Example | Result |
|----------|-----------|---------|--------|
| `+` | Addition | `5 + 3` | `8` |
| `-` | Subtraction | `5 - 3` | `2` |
| `*` | Multiplication | `5 * 3` | `15` |
| `/` | Division | `5 / 2` | `2` (integer division) |
| `%` | Modulo (remainder) | `5 % 2` | `1` |

```c
// Integer vs Float division
int a = 5 / 2;      // Result: 2 (truncated)
float b = 5.0 / 2;  // Result: 2.5
float c = 5 / 2.0;  // Result: 2.5
```

> 🔑 **Exam Tip:** Modulo `%` works only on integers. `5.0 % 2` is a compilation error!

#### 2. Unary Operators

| Operator | Operation | Example |
|----------|-----------|---------|
| `++` (prefix) | Increment first, then use | `++a` |
| `++` (postfix) | Use first, then increment | `a++` |
| `--` (prefix) | Decrement first, then use | `--a` |
| `--` (postfix) | Use first, then decrement | `a--` |
| `-` | Unary minus (negate) | `-a` |
| `!` | Logical NOT | `!a` |
| `~` | Bitwise NOT (complement) | `~a` |
| `sizeof` | Size of data type | `sizeof(int)` |

```c
int a = 5;
int b = ++a;  // a becomes 6, b = 6
int c = a++;  // c = 6, then a becomes 7

// sizeof examples
printf("%zu", sizeof(int));    // 4
printf("%zu", sizeof(char));   // 1
printf("%zu", sizeof(double)); // 8
```

#### 3. Relational Operators

| Operator | Meaning | Example | Result |
|----------|---------|---------|--------|
| `==` | Equal to | `5 == 5` | `1 (true)` |
| `!=` | Not equal to | `5 != 3` | `1 (true)` |
| `>` | Greater than | `5 > 3` | `1 (true)` |
| `<` | Less than | `5 < 3` | `0 (false)` |
| `>=` | Greater than or equal | `5 >= 5` | `1 (true)` |
| `<=` | Less than or equal | `5 <= 4` | `0 (false)` |

> 🔑 **Common Mistake:** `=` is assignment, `==` is comparison!

#### 4. Logical Operators

| Operator | Meaning | Truth Table |
|----------|---------|-------------|
| `&&` | Logical AND | True only if BOTH are true |
| `\|\|` | Logical OR | True if ANY one is true |
| `!` | Logical NOT | Reverses truth value |

```
A     B     A&&B    A||B    !A
0     0      0       0       1
0     1      0       1       1
1     0      0       1       0
1     1      1       1       0
```

**Short-Circuit Evaluation:**
```c
// If first is false, second is not evaluated
if (a != 0 && b/a > 2) { ... }  // Safe: avoids division by zero

// If first is true, second is not evaluated
if (a == 0 || b/a < 5) { ... }
```

#### 5. Assignment Operators

| Operator | Equivalent |
|----------|-----------|
| `a = 5` | `a = 5` |
| `a += 5` | `a = a + 5` |
| `a -= 5` | `a = a - 5` |
| `a *= 5` | `a = a * 5` |
| `a /= 5` | `a = a / 5` |
| `a %= 5` | `a = a % 5` |
| `a &= 5` | `a = a & 5` |
| `a \|= 5` | `a = a \| 5` |
| `a ^= 5` | `a = a ^ 5` |
| `a <<= 2` | `a = a << 2` |
| `a >>= 2` | `a = a >> 2` |

#### 6. Conditional (Ternary) Operator

```
condition ? expression_if_true : expression_if_false
```

```c
int a = 10, b = 20;
int max = (a > b) ? a : b;  // max = 20

// Equivalent if-else
if (a > b)
    max = a;
else
    max = b;

// Nested ternary
int sign = (x > 0) ? 1 : (x < 0) ? -1 : 0;
```

#### 7. Bitwise Operators

Operate on individual bits of integers.

| Operator | Name | Operation |
|----------|------|-----------|
| `&` | Bitwise AND | 1 only if both bits are 1 |
| `\|` | Bitwise OR | 1 if any bit is 1 |
| `^` | Bitwise XOR | 1 if bits are different |
| `~` | Bitwise NOT | Inverts all bits |
| `<<` | Left Shift | Shift bits left (multiply by 2) |
| `>>` | Right Shift | Shift bits right (divide by 2) |

```c
int a = 12;  // Binary: 1100
int b = 10;  // Binary: 1010

a & b  = 8   // 1000 (AND)
a | b  = 14  // 1110 (OR)
a ^ b  = 6   // 0110 (XOR)
~a     = -13 // ...11110011 (NOT, 2's complement)
a << 1 = 24  // 11000 (left shift = multiply by 2)
a >> 1 = 6   // 0110  (right shift = divide by 2)
```

**Bitwise Applications:**
```c
// Check if a number is odd
if (n & 1) printf("Odd");

// Set a bit at position p
n = n | (1 << p);

// Clear a bit at position p
n = n & ~(1 << p);

// Toggle a bit at position p
n = n ^ (1 << p);
```

#### Operator Precedence (High to Low)

```
Precedence  Operators                     Associativity
    1        () [] -> .                   Left to Right
    2        ! ~ ++ -- + - * & sizeof     Right to Left (Unary)
    3        * / %                        Left to Right
    4        + -                          Left to Right
    5        << >>                        Left to Right
    6        < <= > >=                    Left to Right
    7        == !=                        Left to Right
    8        &                            Left to Right
    9        ^                            Left to Right
   10        |                            Left to Right
   11        &&                           Left to Right
   12        ||                           Left to Right
   13        ?:                           Right to Left
   14        = += -= *= /= ...            Right to Left
   15        ,                            Left to Right
```

> 🔑 **Memory Aid:** "UMLAS" — Unary, Multiplicative, Left/Right-shift, Additive, Shifts, Relational...

---

### 1.1.7 Expressions

An **expression** is a combination of variables, constants, and operators that evaluates to a value.

```c
// Types of expressions
5 + 3              // Arithmetic expression → 8
a > b              // Relational expression → 0 or 1
a && b             // Logical expression → 0 or 1
x = 5              // Assignment expression → 5 (also assigns)
a > b ? a : b      // Conditional expression
```

---

## 🧪 1.2 MCQs — UNIT I

### Easy Level

**Q1.** Which of the following is NOT a valid identifier in C?
- (a) `_count`
- (b) `my_variable`
- (c) `2ndValue`  ✅ *(Correct — starts with digit)*
- (d) `VALUE`

**Explanation:** Identifiers cannot begin with a digit.

---

**Q2.** How many keywords are there in ANSI C?
- (a) 16
- (b) 24
- (c) 32  ✅
- (d) 40

---

**Q3.** What is the size of `double` in C?
- (a) 4 bytes
- (b) 6 bytes
- (c) 8 bytes  ✅
- (d) 10 bytes

---

**Q4.** Which operator is used to find the remainder of division?
- (a) `/`
- (b) `//`
- (c) `%`  ✅
- (d) `rem`

---

**Q5.** What will `5 / 2` evaluate to in C (both integers)?
- (a) 2.5
- (b) 2  ✅
- (c) 3
- (d) 2.0

**Explanation:** Integer division truncates the decimal.

---

**Q6.** Which of the following is a valid declaration of a char variable?
- (a) `character ch;`
- (b) `char ch;`  ✅
- (c) `Chr ch;`
- (d) `CHAR ch;`

---

**Q7.** The `sizeof` operator returns:
- (a) Number of elements in array
- (b) Size in bytes of its operand  ✅
- (c) Size in bits
- (d) Number of characters

---

**Q8.** Which is the correct symbol for logical AND in C?
- (a) `&`
- (b) `AND`
- (c) `&&`  ✅
- (d) `||`

---

### Medium Level

**Q9.** What is the output of:
```c
int a = 5;
printf("%d", a++);
```
- (a) 6
- (b) 5  ✅
- (c) 4
- (d) Compile error

**Explanation:** Postfix `a++` uses value first (5), then increments.

---

**Q10.** What is the value of `x` after: `int x = 10; x >>= 2;`?
- (a) 40
- (b) 5
- (c) 2
- (d) 2  ✅ *(10 >> 2 = 10/4 = 2)*

**Explanation:** Right shift by 2 = divide by 2² = 4. 10/4 = 2 (integer).

---

**Q11.** Which of these is a symbolic constant definition?
- (a) `int MAX = 100;`
- (b) `const int MAX = 100;`  ✅
- (c) `variable MAX = 100;`
- (d) `symbol MAX = 100;`

---

**Q12.** What is the result of `'A' + 1` in C?
- (a) 'A1'
- (b) 'B'  ✅ *(ASCII of A is 65; 65+1=66 = 'B')*
- (c) Compile error
- (d) 1

---

**Q13.** What will `printf("%d", 10 & 3)` print?
```
10 = 1010
 3 = 0011
&  = 0010 = 2
```
- (a) 10
- (b) 3
- (c) 2  ✅
- (d) 0

---

**Q14.** Which statement about `unsigned int` is correct?
- (a) Can store negative numbers
- (b) Has same size as `int` but different range  ✅
- (c) Has double the size of `int`
- (d) Cannot be used in arithmetic

---

**Q15.** What is the output of:
```c
int x = 5, y = 3;
printf("%d", x > y ? x : y);
```
- (a) 5  ✅
- (b) 3
- (c) 1
- (d) 0

---

**Q16.** Which is the correct way to define a constant in C using preprocessor?
- (a) `constant PI = 3.14;`
- (b) `#define PI 3.14`  ✅
- (c) `#constant PI 3.14`
- (d) `define PI = 3.14`

---

### Hard Level

**Q17.** What is the output of:
```c
int a = 2, b = 3, c;
c = a++ * ++b;
printf("%d %d %d", a, b, c);
```
- (a) 3 4 8  ✅
- (b) 3 4 6
- (c) 2 4 8
- (d) 3 3 6

**Explanation:** `a++` uses `a=2` then increments a to 3. `++b` increments b to 4 then uses 4. `c = 2 * 4 = 8`. So output: `3 4 8`.

---

**Q18.** What is the output of:
```c
int x = ~0;
printf("%d", x);
```
- (a) 0
- (b) -1  ✅
- (c) 1
- (d) 255

**Explanation:** `~0` inverts all bits of 0 (all zeros become all ones = -1 in 2's complement).

---

**Q19.** Which expression correctly tests if bit 3 of variable `x` is set?
- (a) `x & 3`
- (b) `x & (1 << 3)`  ✅
- (c) `x | 3`
- (d) `x ^ 3`

---

**Q20.** What is the value of `x` after: `int x = 5; x = x << 1 + x >> 1;`?
- (a) 10
- (b) 5
- (c) 0  ✅
- (d) Undefined

**Explanation:** Due to precedence: `+` > `<<` and `>>`. So: `x = x << (1 + x) >> 1` = `5 << 6 >> 1` = `320 >> 1` = `160`... Actually: let's re-evaluate. `<<` and `>>` have same precedence as `+`? No — `+` has higher precedence than `<<`/`>>`. So: `1 + x` = 6, then `x << 6 >> 1` = `5 * 64 / 2` = `160`. Result: `x = 160`. This is a tricky precedence question — always use parentheses!

---

**Q21.** What will `printf("%d", sizeof('A'))` output on a 32-bit system?
- (a) 1
- (b) 2
- (c) 4  ✅
- (d) 8

**Explanation:** In C (not C++), character constants like `'A'` are of type `int`, so `sizeof('A')` = `sizeof(int)` = 4.

---

**Q22.** Which of the following correctly swaps `a` and `b` using XOR without a temp variable?
- (a) `a = a ^ b; b = a ^ b; a = a ^ b;`  ✅
- (b) `a = a + b; b = a - b; a = a - b;`
- (c) Both (a) and (b)  ✅
- (d) Neither

---

## 💻 1.3 CODING QUESTIONS — UNIT I

### Beginner

**B1.** Write a C program to find the size of all basic data types.
```c
#include <stdio.h>
int main() {
    printf("char      : %zu bytes\n", sizeof(char));
    printf("int       : %zu bytes\n", sizeof(int));
    printf("float     : %zu bytes\n", sizeof(float));
    printf("double    : %zu bytes\n", sizeof(double));
    printf("long int  : %zu bytes\n", sizeof(long int));
    return 0;
}
```

---

**B2.** Write a program to swap two numbers using a third variable.
```c
#include <stdio.h>
int main() {
    int a = 10, b = 20, temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
```

---

**B3.** Write a program to compute simple interest.
```c
#include <stdio.h>
int main() {
    float principal, rate, time, si;
    printf("Enter Principal, Rate, Time: ");
    scanf("%f %f %f", &principal, &rate, &time);
    si = (principal * rate * time) / 100;
    printf("Simple Interest = %.2f\n", si);
    return 0;
}
```

---

### Intermediate

**I1.** Write a program to check if a given number is even or odd using bitwise AND.
```c
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    // Odd numbers have LSB = 1
    if (n & 1)
        printf("%d is Odd\n", n);
    else
        printf("%d is Even\n", n);
    return 0;
}
```

---

**I2.** Write a program to count the number of 1-bits in an integer (bit counting).
```c
#include <stdio.h>
int main() {
    int n, count = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    while (n) {
        count += n & 1;  // check LSB
        n >>= 1;         // right shift
    }
    printf("Number of 1-bits: %d\n", count);
    return 0;
}
/* Interview Note: This is also called "Population Count" or "Hamming Weight" */
```

---

**I3.** Write a program to demonstrate operator precedence.
```c
#include <stdio.h>
int main() {
    int a = 10, b = 5, c = 2;
    // Without parentheses
    int result1 = a + b * c;         // 10 + 10 = 20 (* before +)
    // With parentheses
    int result2 = (a + b) * c;       // 15 * 2 = 30
    int result3 = a > b && b > c;    // 1 && 1 = 1
    int result4 = a++ + ++b;         // 10 + 6 = 16
    printf("a+b*c     = %d\n", result1);
    printf("(a+b)*c   = %d\n", result2);
    printf("a>b&&b>c  = %d\n", result3);
    printf("a++ + ++b = %d\n", result4);
    printf("After: a=%d, b=%d\n", a, b);
    return 0;
}
```

---

### Advanced / Interview Style

**A1.** 🎯 **Interview Question:** Swap two numbers without using a temporary variable (3 methods).
```c
#include <stdio.h>
int main() {
    int a = 15, b = 25;
    printf("Before: a=%d, b=%d\n", a, b);

    // Method 1: Arithmetic
    a = a + b;   // a = 40
    b = a - b;   // b = 15
    a = a - b;   // a = 25

    printf("Method 1: a=%d, b=%d\n", a, b);

    // Reset
    a = 15; b = 25;

    // Method 2: XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("Method 2: a=%d, b=%d\n", a, b);

    // Reset
    a = 15; b = 25;

    // Method 3: Ternary (single line)
    a = (a == b) ? b : (b = a, a + b - (a = b));

    printf("Method 3: a=%d, b=%d\n", a, b);
    return 0;
}
/*
 * Note: XOR method fails if a and b point to same memory location.
 * Arithmetic method can overflow for very large integers.
 * In production code, always use a temp variable for clarity.
 */
```

---

**A2.** 🎯 **Interview Question:** Given an integer, check if it is a power of 2.
```c
#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int n) {
    // A power of 2 has exactly one bit set
    // n & (n-1) clears the lowest set bit
    // For power of 2: 8 = 1000, 7 = 0111, 8&7 = 0000
    if (n <= 0) return false;
    return (n & (n - 1)) == 0;
}

int main() {
    int nums[] = {1, 2, 3, 4, 16, 15, 64};
    int size = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < size; i++) {
        printf("%d is %sa power of 2\n", nums[i],
               isPowerOfTwo(nums[i]) ? "" : "NOT ");
    }
    return 0;
}
```

---

## 📝 1.4 SHORT & LONG ANSWER QUESTIONS

### Short Answer (2-3 marks)

1. **What is the difference between `=` and `==` in C?**
   - `=` is the assignment operator; it stores a value in a variable.
   - `==` is the equality operator; it compares two values and returns 0 or 1.
   - Example: `a = 5` stores 5 in a; `a == 5` checks if a equals 5.

2. **Differentiate between prefix and postfix increment operators.**
   - Prefix (`++a`): Increments first, then returns the incremented value.
   - Postfix (`a++`): Returns the current value first, then increments.

3. **What is short-circuit evaluation in C?**
   - In `&&`: If the first operand is false, the second is not evaluated.
   - In `||`: If the first operand is true, the second is not evaluated.
   - This is used for optimization and safe evaluation (e.g., avoiding division by zero).

4. **What is the difference between `int` and `unsigned int`?**
   - Both occupy the same memory (typically 4 bytes).
   - `int` can store negative values (-2^31 to 2^31-1).
   - `unsigned int` stores only non-negative values (0 to 2^32-1).

### Long Answer (5-10 marks)

**L1.** Explain all bitwise operators in C with examples and their real-world applications.
*(See detailed notes in section 1.1.6 — expand with masking, flags, encryption basics)*

**L2.** What is operator precedence and associativity? Explain with a complex expression.
*(Discuss the full precedence table; trace evaluation of `a++ * 3 + b >> 1 && c`)*

**L3.** Describe the C character set and rules for forming valid identifiers with examples.

---

## 🎭 1.5 CASE STUDIES

**Case Study 1:** A school system stores student grades as characters and marks as integers. Design the appropriate data types for: student name, roll number, percentage, pass/fail status, and grade.
```
name        → char name[50]
roll_no     → int
percentage  → float
passed      → int (0 or 1) or _Bool
grade       → char
```

**Case Study 2:** An embedded system needs to control 8 LEDs using a single byte. Each bit represents one LED. Write expressions to turn on LED 3, turn off LED 5, and toggle LED 7.
```c
unsigned char leds = 0b00000000;
leds |= (1 << 3);   // Turn ON LED 3
leds &= ~(1 << 5);  // Turn OFF LED 5
leds ^= (1 << 7);   // Toggle LED 7
```

---

# ══════════════════════════════════════════════
# UNIT II — CONTROL STRUCTURES AND I/O FUNCTIONS
# ══════════════════════════════════════════════

## 📖 2.1 NOTES

### 2.1.1 Control Structures Overview

Control structures direct the flow of program execution. Without them, code executes sequentially.

```
Types of Control Structures
├── Sequential (default — top to bottom)
├── Selection (Decision Making)
│   ├── if
│   ├── if-else
│   ├── if-else if-else
│   └── switch-case
└── Iteration (Loops)
    ├── while
    ├── for
    └── do-while
```

---

### 2.1.2 Decision Making Statements

#### if Statement
```c
// Syntax
if (condition) {
    // statements executed if condition is true
}

// Example
int marks = 75;
if (marks >= 60) {
    printf("First Division\n");
}
```

#### if-else Statement
```c
if (condition) {
    // if-block
} else {
    // else-block
}

// Example
int n = -5;
if (n >= 0)
    printf("Non-negative\n");
else
    printf("Negative\n");
```

#### if-else if-else (Ladder)
```c
int marks = 72;
if (marks >= 90)
    printf("Grade A+\n");
else if (marks >= 80)
    printf("Grade A\n");
else if (marks >= 70)
    printf("Grade B\n");
else if (marks >= 60)
    printf("Grade C\n");
else
    printf("Fail\n");
```

#### Nested if
```c
int a = 10, b = 20, c = 30;
int max;

if (a > b) {
    if (a > c)
        max = a;
    else
        max = c;
} else {
    if (b > c)
        max = b;
    else
        max = c;
}
printf("Max = %d\n", max);  // Max = 30
```

#### switch-case Statement

```c
// Syntax
switch (expression) {
    case constant1:
        // statements
        break;
    case constant2:
        // statements
        break;
    // ...
    default:
        // statements (if no case matches)
}
```

```c
// Example — Day of week
int day = 3;
switch (day) {
    case 1: printf("Monday\n");    break;
    case 2: printf("Tuesday\n");   break;
    case 3: printf("Wednesday\n"); break;
    case 4: printf("Thursday\n");  break;
    case 5: printf("Friday\n");    break;
    case 6: printf("Saturday\n");  break;
    case 7: printf("Sunday\n");    break;
    default: printf("Invalid day\n");
}
```

**Fall-through (without break):**
```c
char grade = 'B';
switch (grade) {
    case 'A':
    case 'B':
    case 'C':
        printf("Pass\n");  // All of A, B, C reach here
        break;
    case 'D':
    case 'F':
        printf("Fail\n");
        break;
    default:
        printf("Invalid grade\n");
}
```

**switch vs if-else:**

| Feature | switch | if-else |
|---------|--------|---------|
| Expression type | Integer/char only | Any (including float, string) |
| Multiple conditions | Fall-through allowed | No fall-through |
| Performance | Faster (jump table) | Slower for many conditions |
| Range checking | Not possible | Possible (`x > 0 && x < 10`) |

> 🔑 **Exam Tip:** `switch` works only with `int`, `char`, `enum` — NOT with `float` or `double`!

---

### 2.1.3 Loops

#### while Loop

```c
// Syntax
while (condition) {
    // body
    // update condition
}

// Example: Print 1 to 5
int i = 1;
while (i <= 5) {
    printf("%d ", i);
    i++;
}
// Output: 1 2 3 4 5
```

#### for Loop

```c
// Syntax
for (initialization; condition; update) {
    // body
}

// Example
for (int i = 1; i <= 5; i++) {
    printf("%d ", i);
}

// Multiple initializations/updates
for (int i = 0, j = 10; i < j; i++, j--) {
    printf("i=%d, j=%d\n", i, j);
}

// Infinite loop
for (;;) {
    // runs forever (use break to exit)
}
```

#### do-while Loop

```c
// Syntax — body executes at least once
do {
    // body
} while (condition);

// Example: Input validation
int n;
do {
    printf("Enter a positive number: ");
    scanf("%d", &n);
} while (n <= 0);
printf("You entered: %d\n", n);
```

**Comparison of Loops:**

| Feature | while | for | do-while |
|---------|-------|-----|----------|
| Entry-controlled | ✅ | ✅ | ❌ |
| Exit-controlled | ❌ | ❌ | ✅ |
| Minimum executions | 0 | 0 | 1 |
| Best for | Unknown iterations | Known iterations | Menu-driven programs |

---

### 2.1.4 Jump Statements

#### break
```c
// Exits innermost loop or switch
for (int i = 1; i <= 10; i++) {
    if (i == 5) break;
    printf("%d ", i);
}
// Output: 1 2 3 4
```

#### continue
```c
// Skips current iteration, continues loop
for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0) continue;  // skip even
    printf("%d ", i);
}
// Output: 1 3 5 7 9
```

#### goto (Use Sparingly!)
```c
// Transfers control to a labeled statement
int i = 1;
loop:
    printf("%d ", i);
    i++;
    if (i <= 5) goto loop;
// Output: 1 2 3 4 5

// Common use: Breaking out of nested loops
for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
        if (i == 1 && j == 1) goto done;
done:
    printf("Exited nested loop\n");
```

> ⚠️ `goto` makes code hard to read and maintain. Avoid in modern programming.

#### return
```c
int add(int a, int b) {
    return a + b;  // returns value and exits function
}

void print() {
    printf("Hello\n");
    return;  // optional for void functions
}
```

---

### 2.1.5 Type Conversion

#### Implicit (Automatic) Conversion
```c
int a = 5;
float b = 2.5;
float result = a + b;  // a is auto-converted to float → 7.5

// Hierarchy: char → short → int → long → float → double → long double
```

#### Explicit (Type Casting)
```c
int a = 5, b = 2;
float result = (float)a / b;  // → 2.5 (not 2)

// Common patterns
int x = (int)3.9;   // → 3 (truncation, not rounding!)
char c = (char)65;  // → 'A'
```

---

### 2.1.6 Type Modifiers

Modifiers change the range/size of basic types:

| Modifier | Effect |
|----------|--------|
| `signed` | Allows negative values (default for int, char) |
| `unsigned` | Positive values only, doubles positive range |
| `short` | Reduces size (usually 2 bytes for int) |
| `long` | Increases size (4 or 8 bytes for int, 8-16 for double) |

```c
short int       s = 32767;    // 2 bytes
long int        l = 2147483647L;  // at least 4 bytes
long long int   ll = 9223372036854775807LL;  // 8 bytes
unsigned long   ul = 4294967295UL;
```

---

### 2.1.7 Input/Output Functions

#### Formatted I/O

**printf()** — Formatted output
```c
printf(format_string, arg1, arg2, ...);

// Format specifiers
printf("%d", 42);          // integer: 42
printf("%5d", 42);         // right-aligned in width 5:    42
printf("%-5d|", 42);       // left-aligned:  42   |
printf("%05d", 42);        // zero-padded: 00042
printf("%f", 3.14);        // float: 3.140000
printf("%.2f", 3.14159);   // 2 decimal places: 3.14
printf("%e", 3.14);        // scientific: 3.140000e+00
printf("%s", "Hello");     // string
printf("%c", 'A');         // char
printf("%x", 255);         // hexadecimal: ff
printf("%o", 255);         // octal: 377
printf("%%");              // literal %
```

**scanf()** — Formatted input
```c
scanf(format_string, &var1, &var2, ...);

int age;
float gpa;
char name[50];

scanf("%d", &age);          // read int
scanf("%f", &gpa);          // read float
scanf("%s", name);          // read string (no & needed for arrays)
scanf("%d %f", &age, &gpa); // read multiple
```

> 🔑 **Common Mistake:** Forgetting `&` in `scanf` causes undefined behavior!

#### Unformatted I/O

| Function | Direction | Character | String |
|----------|-----------|-----------|--------|
| `getchar()` | Input | ✅ | ❌ |
| `putchar()` | Output | ✅ | ❌ |
| `gets()` | Input | ❌ | ✅ |
| `puts()` | Output | ❌ | ✅ |

```c
// Character I/O
char ch = getchar();   // reads one character
putchar(ch);           // prints one character

// String I/O
char str[100];
gets(str);             // reads until newline (UNSAFE — no bounds check!)
puts(str);             // prints string + newline automatically

// SAFER alternative (C99+)
fgets(str, sizeof(str), stdin);  // reads at most sizeof(str)-1 chars
```

> ⚠️ `gets()` is deprecated/removed in C11 due to buffer overflow risks. Use `fgets()` instead!

---

### 2.1.8 Designing Structured Programs

A structured program follows these principles:
1. **Single entry, single exit** per function
2. **Top-down design** — break problem into smaller subproblems
3. **Use of meaningful names**
4. **Avoidance of goto**

**Flowchart Symbols:**
```
[Terminal]     — Oval (Start/End)
[Process]      — Rectangle (statements)
[Decision]     — Diamond (conditions)
[I/O]          — Parallelogram
[Connector]    — Circle
[Arrow]        — Flow direction
```

---

## 🧪 2.2 MCQs — UNIT II

### Easy Level

**Q1.** Which loop guarantees at least one execution of its body?
- (a) for
- (b) while
- (c) do-while  ✅
- (d) All of the above

---

**Q2.** The `break` statement in a loop:
- (a) Exits only the innermost loop  ✅
- (b) Exits all nested loops
- (c) Skips current iteration
- (d) Does nothing

---

**Q3.** Which format specifier is used for `double` in `scanf`?
- (a) `%f`
- (b) `%d`
- (c) `%lf`  ✅
- (d) `%ld`

---

**Q4.** What is the output of:
```c
for (int i = 0; i < 5; i++);
printf("%d", i);
```
- (a) 0 1 2 3 4
- (b) 5
- (c) Compile error  ✅
- (d) 4

**Explanation:** The semicolon after the for loop creates an empty loop body. `i` is out of scope after the loop (C99 scoping).

---

**Q5.** Which statement is used to skip the rest of the current iteration?
- (a) break
- (b) continue  ✅
- (c) exit
- (d) return

---

**Q6.** Which of the following cannot be used as a switch expression?
- (a) int
- (b) char
- (c) float  ✅
- (d) enum

---

**Q7.** `puts("Hello")` is equivalent to:
- (a) `printf("Hello")`
- (b) `printf("Hello\n")`  ✅
- (c) `printf("Hello ");`
- (d) `printf("Hello\t")`

---

**Q8.** The default case in switch is:
- (a) Mandatory
- (b) Optional  ✅
- (c) Always executed
- (d) Must be last

---

### Medium Level

**Q9.** What is the output?
```c
int i = 0;
do {
    printf("%d ", i);
    i++;
} while (i < 0);
```
- (a) Nothing
- (b) 0  ✅
- (c) 0 1 2 ...
- (d) Infinite loop

---

**Q10.** What is the output?
```c
for (int i = 1; i <= 5; i++) {
    if (i == 3) continue;
    printf("%d ", i);
}
```
- (a) 1 2 3 4 5
- (b) 1 2 4 5  ✅
- (c) 1 2
- (d) 3

---

**Q11.** How many times does this loop execute?
```c
int i = 1;
while (i++ <= 5);
```
- (a) 4
- (b) 5
- (c) 6  ✅
- (d) Infinite

**Explanation:** The loop checks `i++ <= 5`. When i=5, condition is true (using 5, then i becomes 6). When i=6, `6++ <= 5` is false, but 6 was used. Total checks: i=1,2,3,4,5,6 → 6 checks, loop body executes 5 times (empty body).

---

**Q12.** `scanf("%s", name)` reads:
- (a) Entire line including spaces
- (b) Until whitespace is encountered  ✅
- (c) Until newline only
- (d) Fixed number of characters

---

**Q13.** Which is the correct way to print a `long int`?
- (a) `printf("%d", x)`
- (b) `printf("%ld", x)`  ✅
- (c) `printf("%li", x)`
- (d) `printf("%L", x)`

---

**Q14.** What does `(float)5 / 2` evaluate to?
- (a) 2
- (b) 2.0
- (c) 2.5  ✅
- (d) 2.50000

---

### Hard Level

**Q15.** What is the output?
```c
int x = 5;
switch (x) {
    case 5: printf("Five");
    case 6: printf("Six");
    default: printf("Default");
}
```
- (a) Five
- (b) FiveSix
- (c) FiveSixDefault  ✅
- (d) Default

**Explanation:** Without `break`, all cases after matching fall through.

---

**Q16.** What is the output of this nested loop?
```c
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
        if (j == 2) break;
        printf("%d%d ", i, j);
    }
}
```
- (a) 11 21 31  ✅
- (b) 11 12 13 21 22...
- (c) 11 12 21 22 31 32
- (d) 11

---

**Q17.** What is the issue with this code?
```c
char name[10];
gets(name);
```
- (a) Syntax error
- (b) Buffer overflow risk  ✅
- (c) name must be a pointer
- (d) gets doesn't exist

---

**Q18.** How many times is the loop body executed?
```c
for (int i = 10; i > 0; i -= 3);
```
- (a) 3
- (b) 4  ✅
- (c) 10
- (d) 0

**Explanation:** i=10,7,4,1 (4 iterations). Next: i=1-3=-2 < 0, stops.

---

**Q19.** What will this output?
```c
int i = 0;
for (i = 0; i < 5; printf("%d", i), i++);
```
- (a) 0 1 2 3 4
- (b) 01234  ✅
- (c) 12345
- (d) Nothing

---

**Q20.** Which is correct regarding `printf` return value?
- (a) It returns void
- (b) It returns the number of characters printed  ✅
- (c) It returns 1 on success
- (d) It returns the format string length

---

## 💻 2.3 CODING QUESTIONS — UNIT II

### Beginner

**B1.** Print multiplication table of a given number.
```c
#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);
    return 0;
}
```

**B2.** Find if a year is a leap year.
```c
#include <stdio.h>
int main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("%d is a Leap Year\n", year);
    else
        printf("%d is NOT a Leap Year\n", year);
    return 0;
}
```

---

### Intermediate

**I1.** Print all prime numbers between 1 and N.
```c
#include <stdio.h>
int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d:\n", n);
    for (int i = 2; i <= n; i++) {
        int isPrime = 1;
        for (int j = 2; j * j <= i; j++) {  // optimized: check up to sqrt(i)
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
```

**I2.** Print the following pattern:
```
*
**
***
****
*****
```
```c
#include <stdio.h>
int main() {
    int n;
    printf("Enter rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
```

**I3.** Calculator using switch-case.
```c
#include <stdio.h>
int main() {
    double a, b, result;
    char op;
    printf("Enter: num operator num (e.g., 5 + 3): ");
    scanf("%lf %c %lf", &a, &op, &b);
    switch (op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/':
            if (b == 0) { printf("Division by zero!\n"); return 1; }
            result = a / b;
            break;
        case '%':
            if ((int)b == 0) { printf("Division by zero!\n"); return 1; }
            result = (int)a % (int)b;
            break;
        default:
            printf("Unknown operator\n"); return 1;
    }
    printf("Result: %.2lf\n", result);
    return 0;
}
```

---

### Advanced / Interview

**A1.** 🎯 Print Floyd's Triangle.
```
1
2  3
4  5  6
7  8  9  10
```
```c
#include <stdio.h>
int main() {
    int n, num = 1;
    printf("Rows: "); scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("%-4d", num++);
        printf("\n");
    }
    return 0;
}
```

**A2.** 🎯 **Interview:** Fibonacci sequence using loops — detect if a number is Fibonacci.
```c
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// A number is Fibonacci if (5n^2 + 4) or (5n^2 - 4) is a perfect square
bool isFibonacci(int n) {
    long long a = 5LL * n * n + 4;
    long long b = 5LL * n * n - 4;
    long long sqA = (long long)sqrt((double)a);
    long long sqB = (long long)sqrt((double)b);
    return (sqA * sqA == a) || (sqB * sqB == b);
}

int main() {
    printf("Fibonacci numbers up to 100:\n");
    for (int i = 0; i <= 100; i++)
        if (isFibonacci(i))
            printf("%d ", i);
    printf("\n");
    return 0;
}
```

**A3.** 🎯 **Interview:** Reverse a number and check if palindrome.
```c
#include <stdio.h>
int main() {
    int n, original, reversed = 0, remainder;
    printf("Enter number: "); scanf("%d", &n);
    original = n;
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    printf("Reversed: %d\n", reversed);
    if (original == reversed)
        printf("%d is a Palindrome\n", original);
    else
        printf("%d is NOT a Palindrome\n", original);
    return 0;
}
```

---

## 📝 2.4 SHORT & LONG ANSWER QUESTIONS

**Short:**
1. Difference between `while` and `do-while` loop.
2. Why is `gets()` considered unsafe? What is the alternative?
3. What is fall-through in switch-case? When is it useful?
4. Explain implicit and explicit type conversion with examples.

**Long:**
1. Explain all looping constructs in C with syntax, flowcharts, and examples.
2. Compare `switch` vs `if-else`. When should each be preferred?
3. Write and explain a menu-driven program using switch and loops for a bank account system.

---

## 🎭 2.5 CASE STUDY

**Case Study:** ATM Machine Simulation
Design a program that simulates a basic ATM: check balance, deposit, withdraw, and exit.

```c
#include <stdio.h>
int main() {
    float balance = 10000.0;
    int choice;
    float amount;
    do {
        printf("\n=== ATM MENU ===\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Choose: "); scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Balance: Rs. %.2f\n", balance);
                break;
            case 2:
                printf("Deposit amount: "); scanf("%f", &amount);
                if (amount > 0) { balance += amount; printf("Deposited. New Balance: %.2f\n", balance); }
                else printf("Invalid amount\n");
                break;
            case 3:
                printf("Withdraw amount: "); scanf("%f", &amount);
                if (amount > 0 && amount <= balance) { balance -= amount; printf("Withdrawn. Balance: %.2f\n", balance); }
                else printf("Insufficient funds or invalid amount\n");
                break;
            case 4:
                printf("Thank you!\n"); break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);
    return 0;
}
```

---

# ══════════════════════════════════════════════════════════
# UNIT III — USER-DEFINED FUNCTIONS AND STORAGE CLASSES
# ══════════════════════════════════════════════════════════

## 📖 3.1 NOTES

### 3.1.1 Functions — Why Use Them?

A **function** is a self-contained block of code that performs a specific task.

**Benefits:**
- **Modularity** — break large programs into manageable pieces
- **Reusability** — write once, use many times
- **Readability** — easier to understand and maintain
- **Debugging** — isolate and fix bugs per function

```
Program Structure:
main()
 ├── inputData()
 ├── processData()
 │    ├── validate()
 │    └── calculate()
 └── displayResult()
```

---

### 3.1.2 Function Components

#### 1. Function Prototype (Declaration)
```c
return_type function_name(parameter_list);

// Examples
int add(int a, int b);          // returns int, takes two ints
void printMessage(void);        // returns nothing, takes nothing
float area(float radius);       // returns float, takes float
char getGrade(int marks);       // returns char, takes int
```

> 🔑 Prototype tells the compiler about the function before its actual definition.

#### 2. Function Definition
```c
return_type function_name(parameter_list) {
    // function body
    return value;   // if not void
}

int add(int a, int b) {
    return a + b;
}
```

#### 3. Function Call
```c
int result = add(5, 3);         // Call with arguments
printMessage();                  // Call without arguments
printf("%f", area(7.0));        // Call inside expression
```

#### Complete Example
```c
#include <stdio.h>

// Prototypes
int factorial(int n);
int isPrime(int n);

int main() {
    int num = 5;
    printf("%d! = %d\n", num, factorial(num));
    printf("%d is %sprime\n", num, isPrime(num) ? "" : "not ");
    return 0;
}

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++)
        result *= i;
    return result;
}

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}
```

---

### 3.1.3 Parameter Passing

#### Call by Value (Pass by Value)
```c
// Changes inside function do NOT affect original
void doubleIt(int x) {
    x = x * 2;      // local copy only
    printf("Inside: %d\n", x);
}

int main() {
    int a = 10;
    doubleIt(a);
    printf("Outside: %d\n", a);   // Still 10!
    return 0;
}
/* Output:
   Inside: 20
   Outside: 10  */
```

#### Call by Reference (Pass by Address)
```c
// Changes inside function DO affect original (via pointer)
void doubleIt(int *x) {
    *x = *x * 2;    // modifies through pointer
    printf("Inside: %d\n", *x);
}

int main() {
    int a = 10;
    doubleIt(&a);   // pass address of a
    printf("Outside: %d\n", a);  // Now 20!
    return 0;
}
/* Output:
   Inside: 20
   Outside: 20  */
```

**Comparison:**

| Feature | Call by Value | Call by Reference |
|---------|--------------|-------------------|
| What is passed | Copy of value | Address of variable |
| Original affected | No | Yes |
| Memory | Extra copy created | No extra copy |
| Usage | When original must not change | When original must be modified |

---

### 3.1.4 Math Library Functions

Include `<math.h>` and link with `-lm`.

| Function | Description | Example |
|----------|-------------|---------|
| `sqrt(x)` | Square root | `sqrt(16.0)` → 4.0 |
| `pow(x, y)` | x to power y | `pow(2, 10)` → 1024.0 |
| `fabs(x)` | Absolute value (float) | `fabs(-3.5)` → 3.5 |
| `ceil(x)` | Round up | `ceil(4.2)` → 5.0 |
| `floor(x)` | Round down | `floor(4.9)` → 4.0 |
| `round(x)` | Round to nearest | `round(4.5)` → 5.0 |
| `log(x)` | Natural log (base e) | `log(M_E)` → 1.0 |
| `log10(x)` | Log base 10 | `log10(100)` → 2.0 |
| `sin(x)` | Sine (radians) | `sin(M_PI/2)` → 1.0 |
| `cos(x)` | Cosine (radians) | `cos(0)` → 1.0 |
| `exp(x)` | e^x | `exp(1)` → 2.718 |

```c
#include <stdio.h>
#include <math.h>
int main() {
    // Hypotenuse of right triangle
    double a = 3.0, b = 4.0;
    double hyp = sqrt(a*a + b*b);
    printf("Hypotenuse = %.1f\n", hyp);  // 5.0
    return 0;
}
// Compile: gcc program.c -lm
```

---

### 3.1.5 Recursive Functions

A function that calls itself is called **recursive**.

**Key Elements:**
1. **Base case** — condition to stop recursion
2. **Recursive case** — function calls itself with simpler input

```c
// Factorial: n! = n * (n-1)!
int factorial(int n) {
    if (n == 0 || n == 1) return 1;  // base case
    return n * factorial(n - 1);     // recursive case
}

/* Call trace for factorial(4):
   factorial(4) = 4 * factorial(3)
                     = 3 * factorial(2)
                           = 2 * factorial(1)
                                 = 1  (base case)
                           = 2 * 1 = 2
                     = 3 * 2 = 6
   factorial(4) = 4 * 6 = 24 */
```

```c
// Fibonacci: F(n) = F(n-1) + F(n-2)
int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

// Tower of Hanoi
void hanoi(int n, char from, char to, char via) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }
    hanoi(n-1, from, via, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    hanoi(n-1, via, to, from);
}
```

**Recursion vs Iteration:**

| Aspect | Recursion | Iteration |
|--------|-----------|-----------|
| Code clarity | Elegant for tree/divide-conquer | Verbose but clear |
| Memory | Stack frames (more memory) | Less memory |
| Speed | Slower (function call overhead) | Faster |
| Risk | Stack overflow | Infinite loop |

---

### 3.1.6 Scope Rules

**Local Scope:** Variables declared inside a function/block.
```c
void myFunc() {
    int x = 10;   // x is local to myFunc
    {
        int y = 20;  // y is local to this block
        printf("%d\n", x);  // OK
        printf("%d\n", y);  // OK
    }
    // printf("%d\n", y);  // ERROR: y out of scope
}
```

**Global Scope:** Variables declared outside all functions.
```c
int globalVar = 100;  // accessible everywhere

void func1() { printf("%d\n", globalVar); }  // OK
void func2() { globalVar = 200; }             // OK (modifies global)
```

---

### 3.1.7 Storage Classes

Storage classes define the **scope**, **lifetime**, and **storage location** of variables.

| Storage Class | Scope | Lifetime | Default Value | Location |
|---------------|-------|----------|---------------|----------|
| `auto` | Local (block) | Block | Garbage | Stack |
| `register` | Local (block) | Block | Garbage | CPU Register |
| `static` | Local (block) or file | Program | 0 | Data segment |
| `extern` | Global (file) | Program | 0 | Data segment |

#### auto (Default)
```c
void func() {
    auto int x = 10;   // 'auto' is implicit, rarely written
    // x is destroyed when function exits
}
```

#### register
```c
void countDown() {
    register int i;    // Hint: store in CPU register for speed
    for (i = 1000; i > 0; i--)
        ;  // tight loop benefits from register
}
// Note: Cannot use & with register variables
```

#### static
```c
void counter() {
    static int count = 0;  // initialized only once, retains value!
    count++;
    printf("Call #%d\n", count);
}
int main() {
    counter();  // Call #1
    counter();  // Call #2
    counter();  // Call #3
    return 0;
}
```

#### extern
```c
// file1.c
int sharedVar = 50;  // defined here

// file2.c
extern int sharedVar;  // declared here — uses file1.c's variable
void func() {
    printf("%d\n", sharedVar);  // accesses file1.c's variable
}
```

---

## 🧪 3.2 MCQs — UNIT III

**Q1.** A function prototype does NOT need to include:
- (a) Return type
- (b) Function name
- (c) Parameter names  ✅
- (d) Semicolon

**Explanation:** Parameter names are optional in prototypes (types are sufficient): `int add(int, int);`

---

**Q2.** In call by value:
- (a) Address is passed
- (b) Actual parameter is changed
- (c) A copy is passed  ✅
- (d) Pointer is used

---

**Q3.** Which storage class stores variable in CPU register?
- (a) auto
- (b) register  ✅
- (c) static
- (d) extern

---

**Q4.** What is the default value of a global `int` variable?
- (a) Garbage
- (b) NULL
- (c) 0  ✅
- (d) Undefined

---

**Q5.** A `static` local variable:
- (a) Is destroyed when function exits
- (b) Retains its value between calls  ✅
- (c) Has global scope
- (d) Must be initialized

---

**Q6.** What is the base case of a recursive function?
- (a) The recursive call
- (b) Condition that stops recursion  ✅
- (c) Return statement
- (d) The first call

---

**Q7.** `sqrt()` is declared in which header?
- (a) `<stdlib.h>`
- (b) `<string.h>`
- (c) `<math.h>`  ✅
- (d) `<stdio.h>`

---

**Q8.** Which storage class is used to share a variable across multiple files?
- (a) auto
- (b) static
- (c) register
- (d) extern  ✅

---

**Q9.** What is the output?
```c
void change(int x) { x = 100; }
int main() {
    int a = 10;
    change(a);
    printf("%d", a);
}
```
- (a) 100
- (b) 10  ✅
- (c) 0
- (d) Garbage

---

**Q10 (Hard).** What is the output?
```c
void f() {
    static int x = 5;
    x++;
    printf("%d ", x);
}
int main() {
    f(); f(); f();
    return 0;
}
```
- (a) 5 5 5
- (b) 6 7 8  ✅
- (c) 5 6 7
- (d) 6 6 6

---

**Q11 (Hard).** Recursion requires which data structure internally?
- (a) Queue
- (b) Heap
- (c) Stack  ✅
- (d) Tree

---

**Q12.** `pow(2, 10)` returns:
- (a) `1024` (int)
- (b) `1024.000000` (double)  ✅
- (c) `20` (float)
- (d) Compile error

---

## 💻 3.3 CODING QUESTIONS — UNIT III

**B1.** Function to check if a number is palindrome.
```c
#include <stdio.h>
int isPalindrome(int n) {
    int original = n, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}
int main() {
    int n; scanf("%d", &n);
    printf("%d is %sa palindrome\n", n, isPalindrome(n) ? "" : "NOT ");
    return 0;
}
```

**I1.** Recursive GCD (Euclidean algorithm).
```c
#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;  // avoid overflow vs a*b/gcd
}
int main() {
    int a = 48, b = 18;
    printf("GCD(%d,%d) = %d\n", a, b, gcd(a, b));   // 6
    printf("LCM(%d,%d) = %d\n", a, b, lcm(a, b));   // 144
    return 0;
}
```

**I2.** Demonstrate static variable as a counter.
```c
#include <stdio.h>
int getID() {
    static int id = 1000;
    return id++;  // auto-increment ID generator
}
int main() {
    for (int i = 0; i < 5; i++)
        printf("User ID: %d\n", getID());
    return 0;
}
// Output: 1000, 1001, 1002, 1003, 1004
```

**A1.** 🎯 **Interview:** Recursive Binary Search.
```c
#include <stdio.h>
int binarySearch(int arr[], int low, int high, int target) {
    if (low > high) return -1;  // base case: not found
    int mid = low + (high - low) / 2;  // avoids overflow
    if (arr[mid] == target) return mid;
    if (arr[mid] < target) return binarySearch(arr, mid+1, high, target);
    return binarySearch(arr, low, mid-1, target);
}
int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = 10, target = 23;
    int result = binarySearch(arr, 0, n-1, target);
    if (result != -1) printf("Found %d at index %d\n", target, result);
    else printf("%d not found\n", target);
    return 0;
}
```

---

# ════════════════════
# UNIT IV — ARRAYS IN C
# ════════════════════

## 📖 4.1 NOTES

### 4.1.1 What is an Array?

An **array** is a collection of elements of the **same data type** stored in **contiguous memory locations**.

```
int arr[5] = {10, 20, 30, 40, 50};

Memory Layout:
Index:   [0]  [1]  [2]  [3]  [4]
Value:    10   20   30   40   50
Address: 100  104  108  112  116  (assuming 4 bytes per int)

Key: arr[i] is at address: base_address + i * sizeof(data_type)
```

### 4.1.2 1D Arrays

```c
// Declaration
int arr[5];                         // uninitialized (garbage values)
int arr[5] = {10, 20, 30, 40, 50}; // fully initialized
int arr[5] = {10, 20};              // partial: {10, 20, 0, 0, 0}
int arr[] = {1, 2, 3, 4, 5};       // size auto-determined (5)

// Access
printf("%d", arr[2]);   // 30 (0-indexed!)
arr[3] = 99;            // modify element

// Iterate
for (int i = 0; i < 5; i++)
    printf("%d ", arr[i]);
```

**Array Bounds:** C does NOT check bounds! Accessing `arr[10]` on a 5-element array is **undefined behavior** (security risk!).

### 4.1.3 2D Arrays

```c
// Declaration: [rows][columns]
int matrix[3][4];
int matrix[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};
// Short form
int mat[3][3] = {1,2,3,4,5,6,7,8,9};

// Access: matrix[row][col]
printf("%d", matrix[1][2]);  // 7

// Iterate
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++)
        printf("%4d", matrix[i][j]);
    printf("\n");
}
```

**Memory Layout of 2D Array (Row-Major Order):**
```
matrix[0][0] matrix[0][1] matrix[0][2]
matrix[1][0] matrix[1][1] matrix[1][2]
matrix[2][0] matrix[2][1] matrix[2][2]

In memory: [0][0] [0][1] [0][2] [1][0] [1][1] [1][2] [2][0] [2][1] [2][2]
(All stored consecutively — row by row)
```

### 4.1.4 Passing Arrays to Functions

```c
// Arrays are always passed by reference (pointer to first element)
void printArray(int arr[], int n) {   // or: int *arr
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void doubleArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        arr[i] *= 2;  // modifies original!
}

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int n = 5;
    printArray(nums, n);     // Pass: array name = pointer to first element
    doubleArray(nums, n);
    printArray(nums, n);     // Modified!
    return 0;
}
```

### 4.1.5 Array Operations

#### Insertion
```c
void insert(int arr[], int *n, int pos, int val) {
    // Shift elements right from end to pos
    for (int i = *n - 1; i >= pos; i--)
        arr[i + 1] = arr[i];
    arr[pos] = val;
    (*n)++;
}
```

#### Deletion
```c
void delete(int arr[], int *n, int pos) {
    // Shift elements left from pos+1
    for (int i = pos; i < *n - 1; i++)
        arr[i] = arr[i + 1];
    (*n)--;
}
```

### 4.1.6 Searching

#### Linear Search — O(n)
```c
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++)
        if (arr[i] == key) return i;
    return -1;  // not found
}
// Best: O(1), Worst: O(n), Average: O(n/2)
// Works on unsorted arrays
```

#### Binary Search — O(log n)
```c
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;  // avoids overflow
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
// Requires SORTED array
// Best: O(1), Worst: O(log n)
```

**Comparison:**

| Feature | Linear Search | Binary Search |
|---------|--------------|---------------|
| Array type | Sorted or unsorted | Must be sorted |
| Time complexity | O(n) | O(log n) |
| Space | O(1) | O(1) iterative, O(log n) recursive |
| Best for | Small or unsorted data | Large sorted data |

### 4.1.7 Bubble Sort — O(n²)

```c
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break;  // Optimized: early exit if already sorted
    }
}

/* Trace for {64, 34, 25, 12, 22}:
   Pass 1: 34 25 12 22 [64]
   Pass 2: 25 12 22 [34 64]
   Pass 3: 12 22 [25 34 64]
   Pass 4: 12 [22 25 34 64]
   Final: 12 22 25 34 64 ✅
*/
```

---

## 🧪 4.2 MCQs — UNIT IV

**Q1.** Array subscripts in C start at:
- (a) 1
- (b) 0  ✅
- (c) -1
- (d) Programmer-defined

**Q2.** `int arr[5] = {1, 2}` — what is `arr[4]`?
- (a) Garbage
- (b) 2
- (c) 0  ✅
- (d) Undefined

**Q3.** What is the address of `arr[3]` if `arr` starts at `1000` and `int` is 4 bytes?
- (a) 1003
- (b) 1012  ✅
- (c) 1008
- (d) 1016

**Explanation:** 1000 + 3 × 4 = 1012

**Q4.** Binary search requires the array to be:
- (a) Filled completely
- (b) Sorted  ✅
- (c) Of fixed size
- (d) Integer type only

**Q5.** The time complexity of Bubble Sort in the worst case is:
- (a) O(n)
- (b) O(n log n)
- (c) O(n²)  ✅
- (d) O(log n)

**Q6.** When an array is passed to a function:
- (a) A copy is made
- (b) Its address (pointer) is passed  ✅
- (c) Size must be passed inside array
- (d) It cannot be passed

**Q7 (Medium).** What is the output?
```c
int arr[3] = {10, 20, 30};
printf("%d", *(arr + 1));
```
- (a) 10
- (b) 20  ✅
- (c) 30
- (d) Address

**Q8 (Hard).** For a 2D array `int mat[4][5]`, which expression correctly accesses element at row 2, col 3?
- (a) `mat[3][2]`
- (b) `mat[2][3]`  ✅
- (c) `*(mat + 2 + 3)`
- (d) `mat[2,3]`

**Q9 (Hard).** What is the size of `int arr[3][4]`?
- (a) 12 bytes
- (b) 48 bytes  ✅ *(3 × 4 × 4 bytes)*
- (c) 7 bytes
- (d) 7 × 4 bytes

**Q10.** In bubble sort, after the first pass:
- (a) Array is fully sorted
- (b) Largest element is at the end  ✅
- (c) Smallest element is at start
- (d) Nothing changes

---

## 💻 4.3 CODING QUESTIONS — UNIT IV

**B1.** Find maximum and minimum in an array.
```c
#include <stdio.h>
int main() {
    int arr[] = {14, 3, 77, 8, 45, 92, 1};
    int n = 7, max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Max = %d, Min = %d\n", max, min);
    return 0;
}
```

**I1.** Matrix Multiplication.
```c
#include <stdio.h>
#define N 3
void multiply(int A[N][N], int B[N][N], int C[N][N]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            C[i][j] = 0;
            for (int k = 0; k < N; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
}
int main() {
    int A[N][N] = {{1,2,3},{4,5,6},{7,8,9}};
    int B[N][N] = {{9,8,7},{6,5,4},{3,2,1}};
    int C[N][N];
    multiply(A, B, C);
    printf("Result:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%4d", C[i][j]);
        printf("\n");
    }
    return 0;
}
```

**A1.** 🎯 **Interview:** Remove duplicates from a sorted array.
```c
#include <stdio.h>
int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;
    int j = 0;  // index of last unique element
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j])
            arr[++j] = arr[i];
    }
    return j + 1;  // new length
}
int main() {
    int arr[] = {1, 1, 2, 3, 3, 4, 4, 5};
    int n = 8;
    n = removeDuplicates(arr, n);
    printf("After removing duplicates: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");  // 1 2 3 4 5
    return 0;
}
```

---

# ══════════════════════════════════════════════════════════════
# UNIT V — POINTERS, DYNAMIC MEMORY ALLOCATION, AND STRINGS
# ══════════════════════════════════════════════════════════════

## 📖 5.1 NOTES

### 5.1.1 Pointers — Introduction

A **pointer** is a variable that stores the **memory address** of another variable.

```c
int a = 10;
int *p = &a;    // p holds address of a

// Operators:
// & (address-of)    → gets address of a variable
// * (dereference)   → gets value at address

printf("%d", a);    // 10  (value)
printf("%p", p);    // address of a (e.g., 0x7fff5abc1234)
printf("%d", *p);   // 10  (value at address p points to)
```

**Memory visualization:**
```
Variable a:    Address 2000 → Value: 10
Pointer p:     Address 4000 → Value: 2000

*p = *(2000) = 10
```

### 5.1.2 Types of Pointers

#### Null Pointer
```c
int *p = NULL;   // Points to nothing (address 0)
if (p == NULL) printf("Pointer is null\n");
// Always check before dereferencing!
```

#### Void Pointer (Generic)
```c
void *vp;       // Can point to any type
int x = 10;
float f = 3.14;
vp = &x;
printf("%d\n", *(int*)vp);   // Must cast before dereferencing
vp = &f;
printf("%.2f\n", *(float*)vp);
```

#### Wild Pointer
```c
int *p;  // uninitialized — points to random address
*p = 10; // DANGEROUS! Undefined behavior
// Fix: always initialize: int *p = NULL;
```

#### Dangling Pointer
```c
int *p = (int*)malloc(sizeof(int));
*p = 100;
free(p);
// p is now dangling — points to freed memory
p = NULL;  // Fix: set to NULL after free
```

### 5.1.3 Pointer Arithmetic

```c
int arr[] = {10, 20, 30, 40, 50};
int *p = arr;   // p points to arr[0]

p++;            // now points to arr[1] (advances by sizeof(int) bytes)
printf("%d", *p);   // 20

p += 2;         // now points to arr[3]
printf("%d", *p);   // 40

printf("%d", *(arr + 4));  // 50 — pointer + index

// Pointer difference
int *q = &arr[3];
printf("%d", q - p);   // 1 (q is 1 element ahead of p at arr[3])
```

**Valid pointer operations:**
- `ptr + n`, `ptr - n` (move by n elements)
- `ptr1 - ptr2` (difference in number of elements)
- `ptr++`, `ptr--`
- Comparison: `ptr1 < ptr2`, `ptr1 == ptr2`

**Invalid:** `ptr1 + ptr2`, `ptr * n`

### 5.1.4 Pointers and Arrays

```c
int arr[] = {1, 2, 3, 4, 5};
int *p = arr;

// These are equivalent:
arr[i]     ↔    *(arr + i)
&arr[i]    ↔    arr + i
p[i]       ↔    *(p + i)

// Difference: arr is a constant pointer (cannot do arr++)
//             p is a pointer variable (can do p++)
```

### 5.1.5 Passing Pointers to Functions

```c
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    swap(&x, &y);
    printf("%d %d\n", x, y);  // 10 5
    return 0;
}
```

### 5.1.6 Dynamic Memory Allocation

Allocate memory at runtime from the **heap**.

| Function | Purpose | Returns |
|----------|---------|---------|
| `malloc(size)` | Allocate `size` bytes (uninitialized) | `void*` or NULL |
| `calloc(n, size)` | Allocate `n` elements of `size` bytes each (zero-initialized) | `void*` or NULL |
| `realloc(ptr, newsize)` | Resize previously allocated block | `void*` or NULL |
| `free(ptr)` | Release allocated memory | void |

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    // malloc
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) { printf("Memory error!\n"); return 1; }

    for (int i = 0; i < n; i++) arr[i] = i + 1;
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    // realloc — grow array
    arr = (int*)realloc(arr, (n + 5) * sizeof(int));
    for (int i = n; i < n + 5; i++) arr[i] = 0;

    // calloc — allocate and zero-initialize
    int *arr2 = (int*)calloc(n, sizeof(int));
    // arr2 elements are all 0

    free(arr);   // always free when done
    free(arr2);
    arr = NULL;  // prevent dangling pointer
    arr2 = NULL;
    return 0;
}
```

**malloc vs calloc:**

| Feature | malloc | calloc |
|---------|--------|--------|
| Arguments | 1 (total bytes) | 2 (count, size) |
| Initialization | Not initialized (garbage) | Zero-initialized |
| Speed | Slightly faster | Slightly slower |

---

### 5.1.7 Strings in C

A string in C is a **null-terminated character array**: `char str[] = "Hello";`

```
'H' 'e' 'l' 'l' 'o' '\0'
[0] [1] [2] [3] [4]  [5]
```

```c
// Initialization methods
char str1[] = "Hello";              // size = 6 (includes \0)
char str2[10] = "Hello";           // size = 10 (extra padding with \0)
char str3[] = {'H','e','l','l','o','\0'}; // explicit
char *str4 = "Hello";              // string literal (read-only!)

// Reading
scanf("%s", str1);                 // reads until whitespace
fgets(str1, sizeof(str1), stdin);  // reads entire line (safer)
```

### 5.1.8 String Functions (`<string.h>`)

| Function | Description | Example |
|----------|-------------|---------|
| `strlen(s)` | Length (not counting `\0`) | `strlen("Hello")` → 5 |
| `strcpy(dst, src)` | Copy src to dst | `strcpy(a, "Hi")` |
| `strncpy(dst, src, n)` | Copy at most n chars | Safer version |
| `strcat(dst, src)` | Append src to dst | `strcat(a, " World")` |
| `strncat(dst, src, n)` | Append at most n chars | Safer version |
| `strcmp(s1, s2)` | Compare strings (0=equal, <0, >0) | `strcmp("abc","abc")` → 0 |
| `strncmp(s1,s2,n)` | Compare n chars | Safer version |
| `strchr(s, c)` | Find first occurrence of char | Returns pointer or NULL |
| `strstr(s1, s2)` | Find substring | Returns pointer or NULL |
| `strupr(s)` | Convert to uppercase (non-standard) | `strupr("hello")` → "HELLO" |
| `strlwr(s)` | Convert to lowercase (non-standard) | |
| `strrev(s)` | Reverse string (non-standard) | |

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s1[20] = "Hello";
    char s2[] = "World";

    printf("Length: %zu\n", strlen(s1));    // 5
    strcat(s1, " ");
    strcat(s1, s2);
    printf("%s\n", s1);                     // Hello World
    printf("Compare: %d\n", strcmp("abc", "abd")); // negative

    // Manual reverse (strrev may not be available everywhere)
    char s[] = "abcde";
    int len = strlen(s);
    for (int i = 0, j = len-1; i < j; i++, j--) {
        char t = s[i]; s[i] = s[j]; s[j] = t;
    }
    printf("%s\n", s);  // edcba
    return 0;
}
```

### 5.1.9 Character Arithmetic

```c
// Characters are integers (ASCII values)
char c = 'A';          // 65
printf("%d\n", c);     // 65
printf("%c\n", c + 1); // B

// Case conversion
char upper = 'Z';
char lower = upper + 32;    // 'z' (or use tolower() from ctype.h)
char back = lower - 32;     // 'Z'

// Check digit/alpha
#include <ctype.h>
isalpha('A')   // true
isdigit('5')   // true
isspace(' ')   // true
toupper('a')   // 'A'
tolower('A')   // 'a'
```

---

## 🧪 5.2 MCQs — UNIT V

**Q1.** Which operator gives the address of a variable?
- (a) `*`
- (b) `&`  ✅
- (c) `#`
- (d) `@`

**Q2.** A null pointer:
- (a) Points to address 1
- (b) Points to address 0 (or NULL)  ✅
- (c) Has no value
- (d) Causes compile error

**Q3.** Which function allocates memory and initializes it to zero?
- (a) malloc
- (b) calloc  ✅
- (c) realloc
- (d) alloc

**Q4.** `strlen("Computer")` returns:
- (a) 9
- (b) 8  ✅
- (c) 7
- (d) 10

**Q5.** What does `strcmp("abc", "abc")` return?
- (a) 1
- (b) -1
- (c) 0  ✅
- (d) "abc"

**Q6.** Which is the correct way to allocate an array of 10 integers?
- (a) `int *p = malloc(10);`
- (b) `int *p = malloc(10 * sizeof(int));`  ✅
- (c) `int p = malloc(10);`
- (d) `int *p = alloc(10, int);`

**Q7 (Medium).** What is printed?
```c
int arr[] = {10, 20, 30};
int *p = arr + 1;
printf("%d", *(p - 1) + *(p + 1));
```
- (a) 30
- (b) 40  ✅  *(10 + 30 = 40)*
- (c) 20
- (d) 50

**Q8 (Medium).** A dangling pointer is:
- (a) Uninitialized pointer
- (b) NULL pointer
- (c) Pointer to freed/out-of-scope memory  ✅
- (d) void pointer

**Q9 (Hard).** What is the output?
```c
char *s = "Hello";
printf("%c", *(s + 4));
```
- (a) l
- (b) o  ✅
- (c) H
- (d) \0

**Q10 (Hard).** After `realloc(ptr, 0)`:
- (a) Memory is NOT freed
- (b) It's equivalent to free(ptr)  ✅
- (c) Compile error
- (d) ptr becomes null automatically

---

## 💻 5.3 CODING QUESTIONS — UNIT V

**B1.** Demonstrate pointer basics.
```c
#include <stdio.h>
int main() {
    int a = 42;
    int *p = &a;
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", (void*)&a);
    printf("Value of p (address): %p\n", (void*)p);
    printf("Value at p (*p): %d\n", *p);
    *p = 100;
    printf("a after *p=100: %d\n", a);  // 100
    return 0;
}
```

**I1.** Dynamic array that doubles capacity when full.
```c
#include <stdio.h>
#include <stdlib.h>
int main() {
    int capacity = 4, size = 0;
    int *arr = (int*)malloc(capacity * sizeof(int));
    int values[] = {1, 5, 3, 9, 7, 2, 8, 4};
    for (int i = 0; i < 8; i++) {
        if (size == capacity) {
            capacity *= 2;
            arr = (int*)realloc(arr, capacity * sizeof(int));
            printf("Resized to capacity: %d\n", capacity);
        }
        arr[size++] = values[i];
    }
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    free(arr);
    return 0;
}
```

**A1.** 🎯 **Interview:** Check if string is palindrome using pointers.
```c
#include <stdio.h>
#include <string.h>
int isPalindrome(char *s) {
    char *left = s;
    char *right = s + strlen(s) - 1;
    while (left < right) {
        if (*left != *right) return 0;
        left++;
        right--;
    }
    return 1;
}
int main() {
    char words[][20] = {"racecar", "hello", "madam", "world"};
    for (int i = 0; i < 4; i++)
        printf("%s: %s\n", words[i], isPalindrome(words[i]) ? "Palindrome" : "Not Palindrome");
    return 0;
}
```

**A2.** 🎯 Count occurrences of each character in a string.
```c
#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int freq[256] = {0};  // frequency for each ASCII character
    printf("Enter string: "); fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i] && s[i] != '\n'; i++)
        freq[(unsigned char)s[i]]++;
    printf("Character Frequencies:\n");
    for (int i = 0; i < 256; i++)
        if (freq[i] > 0)
            printf("'%c' (%d): %d\n", i, i, freq[i]);
    return 0;
}
```

---

# ══════════════════════════════════════════════════════════
# UNIT VI — STRUCTURES, UNIONS & C++ BASICS
# ══════════════════════════════════════════════════════════

## 📖 6.1 NOTES

### 6.1.1 Structures

A **structure** is a user-defined data type that groups variables of different types under one name.

```c
// Declaration
struct Student {
    int rollNo;
    char name[50];
    float gpa;
    char grade;
};

// Definition (creating instances)
struct Student s1;
struct Student s2 = {101, "Alice", 9.1, 'A'};

// Access with dot operator
s1.rollNo = 102;
strcpy(s1.name, "Bob");
s1.gpa = 8.5;

printf("Name: %s, GPA: %.1f\n", s1.name, s1.gpa);
```

**typedef with struct:**
```c
typedef struct {
    int x;
    int y;
} Point;

Point p1 = {10, 20};   // No need to write 'struct Point'
```

### 6.1.2 Structures and Pointers

```c
struct Student s = {101, "Alice", 9.1, 'A'};
struct Student *p = &s;

// Access via pointer: two ways
(*p).rollNo     // dereference then dot
p->rollNo       // arrow operator (preferred)

printf("Roll: %d, Name: %s\n", p->rollNo, p->name);
```

### 6.1.3 Nested Structures

```c
struct Date {
    int day, month, year;
};

struct Employee {
    int empID;
    char name[50];
    float salary;
    struct Date dob;    // nested structure
    struct Date joiningDate;
};

struct Employee e1;
e1.dob.day = 15;
e1.dob.month = 8;
e1.dob.year = 1990;
```

### 6.1.4 Array of Structures

```c
struct Student class[30];   // 30 students

for (int i = 0; i < 30; i++) {
    printf("Enter roll no: ");
    scanf("%d", &class[i].rollNo);
    printf("Enter name: ");
    scanf("%s", class[i].name);
    printf("Enter GPA: ");
    scanf("%f", &class[i].gpa);
}
```

### 6.1.5 Unions

A **union** is like a structure but all members **share the same memory location**.

```c
union Data {
    int i;
    float f;
    char str[10];
};

union Data d;
d.i = 10;
printf("i = %d\n", d.i);   // 10

d.f = 3.14;
printf("f = %.2f\n", d.f); // 3.14
// Note: d.i is now garbage! Only last assigned member is valid
```

**Memory:**
```
struct: allocates memory for ALL members (sum of sizes)
union:  allocates memory for LARGEST member only

struct Data { int i; float f; char str[10]; }
→ size = 4 + 4 + 10 = 18 bytes (approximately, with padding)

union Data { int i; float f; char str[10]; }
→ size = max(4, 4, 10) = 10 bytes
```

**Structure vs Union:**

| Feature | Structure | Union |
|---------|-----------|-------|
| Memory | Sum of all members | Size of largest member |
| Active members | All at same time | Only one at a time |
| Use case | Record all fields | Save memory, one-at-a-time |

### 6.1.6 C++ Basics

#### Input/Output: cin and cout
```cpp
#include <iostream>
using namespace std;

int main() {
    int age;
    string name;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
    return 0;
}
```

#### Classes in C++
```cpp
#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, width;    // data members

public:
    // Constructor
    Rectangle(float l, float w) : length(l), width(w) {}

    // Inline member function
    float area() { return length * width; }

    // Non-inline member function
    void display();
};

// Non-inline definition (outside class)
void Rectangle::display() {
    cout << "Length: " << length << ", Width: " << width << endl;
    cout << "Area: " << area() << endl;
}

int main() {
    Rectangle r1(5.0, 3.0);
    r1.display();   // Length: 5, Width: 3, Area: 15
    return 0;
}
```

#### Static Members
```cpp
class Counter {
private:
    int id;
    static int count;   // shared across all objects

public:
    Counter() { count++; id = count; }
    static int getCount() { return count; }   // static member function
    int getID() { return id; }
};

int Counter::count = 0;   // define outside class

int main() {
    Counter c1, c2, c3;
    cout << "Total objects: " << Counter::getCount() << endl;  // 3
    cout << c2.getID() << endl;  // 2
    return 0;
}
```

#### OOP vs Procedural Comparison

| Aspect | Procedural (C) | Object-Oriented (C++) |
|--------|---------------|----------------------|
| Focus | Functions | Objects/Classes |
| Data | Global/local variables | Encapsulated in objects |
| Code reuse | Functions, macros | Inheritance, templates |
| Data security | Limited | Access specifiers (private) |
| Approach | Top-down | Bottom-up |
| Real-world | Step-by-step process | Models real entities |

---

## 🧪 6.2 MCQs — UNIT VI

**Q1.** A structure in C can contain:
- (a) Only same type elements
- (b) Only integers
- (c) Elements of different types  ✅
- (d) Only pointers

**Q2.** The arrow operator `->` is used to access structure members via:
- (a) Direct variable
- (b) Pointer  ✅
- (c) Reference
- (d) Index

**Q3.** The size of a union is:
- (a) Sum of all member sizes
- (b) Size of the first member
- (c) Size of the largest member  ✅
- (d) Minimum memory needed

**Q4.** In C++, `cout` is defined in:
- (a) `<stdio.h>`
- (b) `<conio.h>`
- (c) `<iostream>`  ✅
- (d) `<cout.h>`

**Q5.** Private members of a class can be accessed:
- (a) From anywhere
- (b) Only by member functions of the same class  ✅
- (c) Only from main()
- (d) From derived classes only

**Q6.** An inline function in C++:
- (a) Cannot have a body
- (b) Is expanded at the call site to avoid function call overhead  ✅
- (c) Is called only once
- (d) Returns void

**Q7.** Which keyword in C++ replaces the need to write `struct` before each structure variable declaration?
- (a) `class`
- (b) `typedef`  ✅
- (c) `define`
- (d) Not needed in C++

**Q8 (Hard).** What is the output?
```c
union Mix {
    int i;
    char c;
};
union Mix m;
m.i = 300;
printf("%d\n", m.c);
```
- (a) 300
- (b) 44  ✅ *(300 in binary = ...00101100; lowest byte = 0x2C = 44)*
- (c) 0
- (d) Garbage

**Q9.** Static member functions in C++:
- (a) Belong to instances of a class
- (b) Can be called without creating an object  ✅
- (c) Cannot access static data
- (d) Must return void

**Q10 (Hard).** Which of the following is NOT a feature of OOP?
- (a) Encapsulation
- (b) Polymorphism
- (c) Goto  ✅
- (d) Inheritance

---

## 💻 6.3 CODING QUESTIONS — UNIT VI

**B1.** Define and use a structure for a Book.
```c
#include <stdio.h>
#include <string.h>
struct Book {
    char title[100];
    char author[50];
    float price;
    int pages;
};
void display(struct Book b) {
    printf("Title: %s\nAuthor: %s\nPrice: Rs.%.2f\nPages: %d\n\n",
           b.title, b.author, b.price, b.pages);
}
int main() {
    struct Book lib[3] = {
        {"Let Us C", "Yashavant Kanetkar", 299.0, 556},
        {"C Programming", "Dennis Ritchie", 450.0, 312},
        {"ANSI C", "E. Balagurusamy", 395.0, 620}
    };
    for (int i = 0; i < 3; i++) display(lib[i]);
    return 0;
}
```

**I1.** Demonstrate difference between structure and union.
```c
#include <stdio.h>
struct S { int i; float f; char c; };
union U  { int i; float f; char c; };

int main() {
    printf("Size of struct: %zu\n", sizeof(struct S));  // ~12 bytes
    printf("Size of union:  %zu\n", sizeof(union U));   // 4 bytes

    union U u;
    u.i = 65;
    printf("u.i = %d\n", u.i);   // 65
    printf("u.c = %c\n", u.c);   // 'A' (65 = 'A' in ASCII)
    u.f = 1.5;
    printf("u.f = %.1f\n", u.f); // 1.5
    printf("u.i = %d\n", u.i);   // CORRUPTED (not 65 anymore!)
    return 0;
}
```

**A1.** 🎯 Student Report Card using structures.
```c
#include <stdio.h>
#define N 5
typedef struct {
    int roll;
    char name[30];
    float marks[5];
    float total, avg;
    char grade;
} Student;

void calculate(Student *s) {
    s->total = 0;
    for (int i = 0; i < 5; i++) s->total += s->marks[i];
    s->avg = s->total / 5.0;
    if (s->avg >= 90) s->grade = 'A';
    else if (s->avg >= 80) s->grade = 'B';
    else if (s->avg >= 70) s->grade = 'C';
    else if (s->avg >= 60) s->grade = 'D';
    else s->grade = 'F';
}

int main() {
    Student students[N] = {
        {1, "Alice", {92,88,95,90,87}},
        {2, "Bob",   {55,60,58,62,50}},
        {3, "Carol", {78,82,75,80,79}},
    };
    int n = 3;
    printf("%-5s %-10s %-7s %-5s %s\n","Roll","Name","Total","Avg","Grade");
    printf("------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        calculate(&students[i]);
        printf("%-5d %-10s %-7.1f %-5.1f %c\n",
               students[i].roll, students[i].name,
               students[i].total, students[i].avg, students[i].grade);
    }
    return 0;
}
```

---

# ═══════════════════════════════════════════════
# 📋 QUICK REVISION NOTES — LAST DAY CHEAT SHEET
# ═══════════════════════════════════════════════

## ⚡ Essential Formulas & Facts

```
sizeof(char)        = 1 byte
sizeof(int)         = 4 bytes (typically on 32/64-bit)
sizeof(float)       = 4 bytes
sizeof(double)      = 8 bytes
sizeof(pointer)     = 4 bytes (32-bit) or 8 bytes (64-bit)

Array element address = base_address + index * sizeof(type)
2D array address     = base + (i * cols + j) * sizeof(type)

n!  = n * (n-1)!   ; 0! = 1
Fib = F(n-1) + F(n-2); F(0)=0, F(1)=1

ASCII: 'A'=65, 'a'=97, '0'=48, ' '=32
Case conversion: upper_to_lower += 32; lower_to_upper -= 32
```

## 🗂️ Storage Classes Summary

| Class | Where | Scope | Lifetime | Init |
|-------|-------|-------|----------|------|
| auto | Stack | Block | Block end | Garbage |
| register | CPU reg | Block | Block end | Garbage |
| static | Data seg | Block/file | Program end | 0 |
| extern | Data seg | Global | Program end | 0 |

## 🔑 Format Specifiers Quick Reference

```
%d  → int          %ld → long int      %lld → long long
%f  → float        %lf → double        %Lf  → long double
%c  → char         %s  → string        %p   → pointer
%u  → unsigned     %x  → hexadecimal   %o   → octal
%e  → scientific   %zu → size_t
```

## 🔁 Loop Quick Reference

```c
// for loop
for (init; condition; update) { body }

// while loop (entry-controlled)
while (condition) { body; update; }

// do-while loop (exit-controlled)
do { body; update; } while (condition);

// Infinite loops
for(;;){}    while(1){}    do{}while(1);
```

## 🧠 Pointer Quick Reference

```c
int a = 10;
int *p = &a;    // p = address of a
*p = 20;        // dereference: a = 20
p++;            // next int address (p += 4 bytes)
int **pp = &p;  // pointer to pointer
```

## 📊 Searching & Sorting Complexity

| Algorithm | Best | Average | Worst | Space |
|-----------|------|---------|-------|-------|
| Linear Search | O(1) | O(n) | O(n) | O(1) |
| Binary Search | O(1) | O(log n) | O(log n) | O(1) |
| Bubble Sort | O(n) | O(n²) | O(n²) | O(1) |

## 🛡️ Memory Functions

```c
// Dynamic memory
malloc(size)           → allocate, uninitialized
calloc(n, size)        → allocate, zero-initialized
realloc(ptr, newsize)  → resize
free(ptr)              → release

// Always: check != NULL, set ptr=NULL after free
```

## 📝 String Functions Quick Reference

```c
strlen(s)           → length (without \0)
strcpy(dst, src)    → copy
strcat(dst, src)    → concatenate
strcmp(s1, s2)      → compare (0=equal, <0, >0)
strchr(s, c)        → find char → pointer or NULL
strstr(s, sub)      → find substring → pointer or NULL
```

---

## 📚 PREVIOUS YEAR QUESTION PATTERNS

### Short Questions (2-3 marks each) — typically 6-8 questions
1. What is a dangling pointer? How to avoid it?
2. Differentiate between `malloc` and `calloc`.
3. What is recursion? List its advantages and disadvantages.
4. Explain `static` storage class with an example.
5. Differentiate between structure and union.

### Long Questions (10 marks each) — typically 4-5 questions
1. Write a program to implement all sorting algorithms discussed.
2. Explain dynamic memory allocation with a complete program.
3. Write a program using structures to maintain student records.
4. Explain recursive functions with factorial and Fibonacci examples.
5. Describe all string manipulation functions with examples.

### Practical Questions (for viva/lab)
1. Write a program to check whether a given string is a palindrome.
2. Implement binary search on a sorted array.
3. Demonstrate call by value vs call by reference.
4. Program to demonstrate dangling and null pointers.
5. Create a simple linked list using structures and pointers.

---

## 🎓 INTERVIEW PREPARATION TIPS

### Most Commonly Asked C Concepts
1. **Pointer arithmetic** and the difference between `*p++`, `(*p)++`, `*(p++)`, `*(++p)`
2. **Dangling vs wild vs null pointer** differences
3. **Call by value vs call by reference** with real examples
4. **Memory layout**: stack vs heap vs data segment vs code segment
5. **Static variables** in recursive functions
6. **String reversal**, palindrome check, anagram detection
7. **Bubble sort**, its optimization with `swapped` flag
8. **Sizeof operator** on arrays vs pointers
9. **Recursion** for factorial, Fibonacci, Tower of Hanoi
10. **Macro vs function** differences

### Common Tricky Questions

```c
// Q: What is the output?
int i = 0;
printf("%d %d %d", ++i, i++, ++i);
// A: Undefined behavior (order of argument evaluation)

// Q: Difference between:
char *s1 = "hello";     // pointer to string literal (read-only)
char s2[] = "hello";    // array initialized with string (modifiable)

// Q: What does this print?
int arr[] = {1,2,3,4,5};
printf("%d", sizeof(arr)/sizeof(arr[0]));  // 5 (array length trick)

// Q: Why does this fail?
void func(int arr[]) {
    int n = sizeof(arr)/sizeof(arr[0]);  // WRONG: arr is now a pointer!
    // sizeof(pointer) / sizeof(int) = 1 or 2, not array size
}
```

---

## 📖 TEXTBOOKS & REFERENCES

**Main Textbook:**
- *Programming in C* by Ashok N. Kamthane — Pearson Education India

**References:**
- *Programming in ANSI C* by E. Balagurusamy — Tata McGraw Hill
- *C How to Program* by Paul Deitel and Harvey Deitel — Pearson Education India

---

*📌 Prepared for Session 2025–26 | CSE101 Computer Programming*  
*🎯 Focus Areas: Concept clarity + Practical coding + Interview readiness*
