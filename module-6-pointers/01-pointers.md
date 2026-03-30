# Pointers in C — Complete Notes

---

## 1. What is a Pointer?

A **pointer** is a variable that stores the **memory address** of another variable.

Every variable in C is stored at some memory location. A pointer holds that address instead of a value directly.

```c
int x = 10;
int *p = &x;   // p stores the address of x
```

---

## 2. Declaring a Pointer

```c
data_type *pointer_name;
```

| Declaration | Meaning |
|-------------|---------|
| `int *p` | p is a pointer to an integer |
| `char *c` | c is a pointer to a character |
| `float *f` | f is a pointer to a float |
| `double *d` | d is a pointer to a double |

---

## 3. Key Operators

### `&` — Address-of Operator
Returns the **memory address** of a variable.

```c
int x = 5;
printf("%p", &x);   // prints address of x
```

### `*` — Dereference Operator
Accesses the **value stored at** the address a pointer holds.

```c
int x = 5;
int *p = &x;
printf("%d", *p);   // prints 5 (value at the address)
```

---

## 4. Basic Example

```c
#include <stdio.h>

int main() {
    int x = 42;
    int *p = &x;

    printf("Value of x     : %d\n", x);      // 42
    printf("Address of x   : %p\n", &x);     // e.g. 0x7fff...
    printf("Value of p     : %p\n", p);      // same as &x
    printf("Value at *p    : %d\n", *p);     // 42

    *p = 100;   // modify x through pointer
    printf("New value of x : %d\n", x);      // 100

    return 0;
}
```

---

## 5. NULL Pointer

A pointer that points to **nothing** (address 0).

```c
int *p = NULL;

if (p == NULL) {
    printf("Pointer is null, don't dereference!\n");
}
```

> Always initialize pointers to NULL if not assigning an address immediately. Dereferencing a NULL pointer causes a **segmentation fault**.

---

## 6. Pointer Arithmetic

You can perform arithmetic on pointers. The pointer moves by the **size of the data type**.

```c
int arr[] = {10, 20, 30, 40};
int *p = arr;   // points to arr[0]

p++;            // now points to arr[1]
p += 2;         // now points to arr[3]
```

| Operation | Effect |
|-----------|--------|
| `p++` | Move to next element |
| `p--` | Move to previous element |
| `p + n` | Move n elements forward |
| `p1 - p2` | Number of elements between two pointers |

> The actual byte jump = `n × sizeof(data_type)`

---

## 7. Pointers and Arrays

Array name is itself a **pointer to the first element**.

```c
int arr[] = {1, 2, 3, 4, 5};
int *p = arr;   // equivalent to &arr[0]

// These are equivalent:
arr[2]      ⟺   *(arr + 2)
*(p + 2)    ⟺   p[2]
```

```c
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *p = arr;

    for (int i = 0; i < 3; i++) {
        printf("%d ", *(p + i));   // 10 20 30
    }
    return 0;
}
```

---

## 8. Pointer to Pointer (Double Pointer)

A pointer that holds the address of another pointer.

```c
int x = 5;
int *p = &x;
int **pp = &p;

printf("%d", **pp);   // 5
```

```
x   → holds value 5
p   → holds address of x
pp  → holds address of p
```

---

## 9. Pointers and Functions

### Pass by Value vs Pass by Reference

**Pass by value** — function gets a copy, original unchanged:
```c
void addTen(int n) { n += 10; }    // x not changed outside
```

**Pass by reference (using pointer)** — function modifies original:
```c
void addTen(int *n) { *n += 10; }  // x IS changed outside

int main() {
    int x = 5;
    addTen(&x);
    printf("%d", x);   // 15
}
```

### Returning a Pointer from a Function

```c
int* getAddress(int *n) {
    return n;    // valid — returning address of existing variable
}

// ⚠️ Never return address of a local variable:
int* bad() {
    int local = 5;
    return &local;   // DANGER — local is destroyed after function returns
}
```

---

## 10. Pointers and Strings

Strings in C are `char` arrays. A `char *` can point to a string.

```c
char str[] = "Hello";
char *p = str;

printf("%s", p);       // Hello
printf("%c", *p);      // H
printf("%c", *(p+1));  // e
```

String literals stored in read-only memory:
```c
char *s = "Hello";   // s points to read-only memory
// s[0] = 'h';      // ⚠️ Undefined behaviour — do NOT modify
```

---

## 11. Pointers to Structures

```c
struct Student {
    char name[50];
    int age;
};

struct Student s = {"Alice", 20};
struct Student *p = &s;

// Two ways to access members via pointer:
printf("%s", (*p).name);   // using dereference + dot
printf("%s", p->name);     // using arrow operator (preferred)
```

The **`->`** (arrow) operator is shorthand for `(*ptr).member`.

---

## 12. Dynamic Memory Allocation

Pointers are essential for allocating memory at runtime using functions from `<stdlib.h>`.

| Function | Purpose |
|----------|---------|
| `malloc(size)` | Allocates `size` bytes, uninitialized |
| `calloc(n, size)` | Allocates `n × size` bytes, initialized to 0 |
| `realloc(ptr, size)` | Resizes previously allocated memory |
| `free(ptr)` | Releases allocated memory |

```c
#include <stdlib.h>

int *p = (int *)malloc(5 * sizeof(int));   // array of 5 ints

if (p == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
}

for (int i = 0; i < 5; i++) p[i] = i * 10;

free(p);     // always free when done
p = NULL;    // avoid dangling pointer
```

---

## 13. Function Pointers

Pointers can also point to **functions**.

```c
// Declaration:
return_type (*pointer_name)(param_types);

// Example:
int add(int a, int b) { return a + b; }

int (*fp)(int, int) = add;   // fp points to add

printf("%d", fp(3, 4));      // 7
```

Used for **callbacks**, **event handlers**, and implementing **polymorphism** in C.

---

## 14. Const Pointers

| Declaration | Meaning |
|-------------|---------|
| `const int *p` | Can't change the value pointed to |
| `int * const p` | Can't change the pointer itself |
| `const int * const p` | Can't change either |

```c
int x = 10, y = 20;

const int *p = &x;
// *p = 5;      ❌ Error — value is const
p = &y;         ✅ OK — pointer can change

int * const q = &x;
*q = 5;         ✅ OK — value can change
// q = &y;      ❌ Error — pointer is const
```

---

## 15. Void Pointer

A **generic pointer** — can hold address of any data type, but must be cast before dereferencing.

```c
void *vp;

int x = 10;
vp = &x;

printf("%d", *(int *)vp);   // cast to int* first, then dereference
```

Used in generic functions like `malloc`, `memcpy`, `qsort`.

---

## 16. Common Pointer Mistakes

| Mistake | Description | Fix |
|---------|-------------|-----|
| **Wild pointer** | Uninitialized pointer | Always initialize: `int *p = NULL;` |
| **Dangling pointer** | Points to freed/out-of-scope memory | Set to NULL after `free()` |
| **Memory leak** | Allocated memory never freed | Always call `free()` |
| **NULL dereference** | Dereferencing a NULL pointer | Check `if (p != NULL)` before use |
| **Buffer overflow** | Accessing beyond allocated memory | Careful with array sizes |

---

## 17. Quick Summary Table

| Concept | Syntax | Meaning |
|---------|--------|---------|
| Declare pointer | `int *p;` | p can hold address of an int |
| Get address | `p = &x;` | p holds address of x |
| Dereference | `*p` | Value at address p |
| NULL pointer | `p = NULL;` | Points to nothing |
| Pointer arithmetic | `p++` | Move to next int-sized slot |
| Double pointer | `int **pp` | Pointer to pointer |
| Arrow operator | `ptr->member` | Same as `(*ptr).member` |
| Void pointer | `void *p` | Generic, any type |
| Function pointer | `int (*fp)(int)` | Points to a function |

---

## 18. Practice Problems

1. Write a function `swap(int *a, int *b)` that swaps two integers using pointers.
2. Write a function to find the largest element in an array using pointer arithmetic.
3. Dynamically allocate an array of `n` integers, fill it with squares (1, 4, 9...), print and free it.
4. Write a program that uses a double pointer to reverse a string in-place.
5. Implement a simple linked list (each node has `int data` and `struct Node *next`).

---

*End of Pointers in C Notes*