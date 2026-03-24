# Arrays in C

## 1. What is an Array?

An **array** is a collection of elements of the **same data type** stored in **contiguous memory locations**. It allows storing multiple values under a single variable name, accessed using an index.

---

## 2. Declaration Syntax

```c
data_type array_name[size];
```

**Examples:**
```c
int marks[5];          // array of 5 integers
float temp[10];        // array of 10 floats
char name[20];         // array of 20 characters
```

---

## 3. Initialization

### At Declaration
```c
int marks[5] = {90, 85, 78, 92, 88};
```

### Partial Initialization (remaining elements become 0)
```c
int arr[5] = {1, 2};   // arr = {1, 2, 0, 0, 0}
```

### Without Size (compiler determines size)
```c
int arr[] = {10, 20, 30, 40};   // size = 4
```

### Individual Element Assignment
```c
int arr[3];
arr[0] = 10;
arr[1] = 20;
arr[2] = 30;
```

---

## 4. Accessing Array Elements

Array indexing starts at **0** in C.

```c
int marks[5] = {90, 85, 78, 92, 88};

printf("%d", marks[0]);   // Output: 90
printf("%d", marks[4]);   // Output: 88
```

> ⚠️ Accessing index out of bounds (e.g., `marks[5]`) causes **undefined behavior**.

---

## 5. Traversing an Array

```c
#include <stdio.h>

int main() {
    int marks[5] = {90, 85, 78, 92, 88};

    for (int i = 0; i < 5; i++) {
        printf("marks[%d] = %d\n", i, marks[i]);
    }

    return 0;
}
```

**Output:**
```
marks[0] = 90
marks[1] = 85
marks[2] = 78
marks[3] = 92
marks[4] = 88
```

---

## 6. Memory Layout

Arrays are stored in **contiguous memory**. For `int arr[4]`, if base address is `1000`:

| Index | Address | Value |
|-------|---------|-------|
| arr[0] | 1000 | 10 |
| arr[1] | 1004 | 20 |
| arr[2] | 1008 | 30 |
| arr[3] | 1012 | 40 |

> Each `int` takes **4 bytes** (platform-dependent). Address = Base + (index × sizeof(type))

---

## 7. Size of an Array

```c
int arr[5] = {1, 2, 3, 4, 5};

int size = sizeof(arr) / sizeof(arr[0]);
printf("Size = %d\n", size);   // Output: Size = 5
```

---

## 8. Arrays and Functions

### Passing Array to a Function

```c
#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int marks[5] = {90, 85, 78, 92, 88};
    printArray(marks, 5);
    return 0;
}
```

> ⚠️ Arrays are **passed by reference** (pointer to first element). Changes inside the function affect the original array.

### Returning Array from a Function

You cannot directly return an array from a function. Use:
- A **pointer** to a static/global array
- Dynamic memory allocation (`malloc`)

---

## 9. 2D Arrays (Multi-Dimensional)

### Declaration
```c
int matrix[3][4];   // 3 rows, 4 columns
```

### Initialization
```c
int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
```

### Accessing Elements
```c
printf("%d", matrix[1][2]);   // Output: 6
```

### Traversal
```c
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        printf("%d ", matrix[i][j]);
    }
    printf("\n");
}
```

---

## 10. Common Array Operations

### Finding Maximum Element
```c
int arr[5] = {3, 7, 1, 9, 4};
int max = arr[0];

for (int i = 1; i < 5; i++) {
    if (arr[i] > max)
        max = arr[i];
}
printf("Max = %d\n", max);   // Output: Max = 9
```

### Sum and Average
```c
int arr[5] = {10, 20, 30, 40, 50};
int sum = 0;

for (int i = 0; i < 5; i++) {
    sum += arr[i];
}
float avg = (float)sum / 5;
printf("Sum = %d, Average = %.2f\n", sum, avg);
```

### Reversing an Array
```c
int arr[5] = {1, 2, 3, 4, 5};
int left = 0, right = 4;

while (left < right) {
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
    left++;
    right--;
}
// arr = {5, 4, 3, 2, 1}
```

### Linear Search
```c
int arr[5] = {10, 20, 30, 40, 50};
int key = 30, found = -1;

for (int i = 0; i < 5; i++) {
    if (arr[i] == key) {
        found = i;
        break;
    }
}

if (found != -1)
    printf("Found at index %d\n", found);   // Output: Found at index 2
else
    printf("Not found\n");
```

---

## 11. Array vs Pointer

- Array name acts as a **pointer to the first element**.
- `arr` is equivalent to `&arr[0]`
- `arr[i]` is equivalent to `*(arr + i)`

```c
int arr[3] = {10, 20, 30};

printf("%d\n", arr[1]);       // Output: 20
printf("%d\n", *(arr + 1));   // Output: 20
```

---

## 12. Character Array (Strings)

A string in C is a **character array** ending with a null character `'\0'`.

```c
char name[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
// OR
char name[] = "Hello";   // '\0' added automatically
```

```c
#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "Hello";
    printf("Name: %s\n", name);
    printf("Length: %lu\n", strlen(name));   // Output: 5
    return 0;
}
```

---

## 13. Important Points & Common Mistakes

| Point | Detail |
|-------|--------|
| Index starts at | `0` |
| Last valid index | `size - 1` |
| Array size | Must be a constant (in older C standards) |
| Out-of-bound access | Undefined behavior (no automatic error) |
| Array passed to function | Passed as pointer (by reference) |
| `sizeof(arr)` inside function | Gives pointer size, NOT array size |

---

## 14. Variable Length Arrays (VLA) — C99 and later

```c
#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];   // VLA — size determined at runtime

    for (int i = 0; i < n; i++) {
        arr[i] = i * 10;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
```

> ⚠️ VLAs are optional in C11 and later. Prefer dynamic allocation (`malloc`) for production code.

---

## 15. Quick Summary

```
Array → Fixed size, same type, contiguous memory
Index → Starts from 0, ends at (size-1)
1D    → int arr[n]
2D    → int arr[rows][cols]
Size  → sizeof(arr) / sizeof(arr[0])
Pass  → By reference (pointer to first element)
```