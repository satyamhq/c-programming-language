# C Programming — Comprehensive Question Bank
## UNIT IV: Arrays in C | UNIT V: Pointers, Dynamic Memory & Strings

> **Format:** Unit → Difficulty Level → Question Type → Code → Explanation  
> **Coverage:** 1D/2D Arrays · Searching · Sorting · Pointers · Dynamic Memory · Strings

---

# ═══════════════════════════════════════════
# UNIT IV: Arrays in C
# ═══════════════════════════════════════════

---

## ── LEVEL 1: EASY ──────────────────────────────────────

---

### Q1 · Coding Problem · 1D Array Declaration & Traversal

**Problem Statement:**  
Declare an integer array of size 5, initialize it with values `{10, 20, 30, 40, 50}`, and print each element along with its index and memory address.

**Sample Output:**
```
Index 0 | Value: 10 | Address: 0x7ffd1a2b3c40
Index 1 | Value: 20 | Address: 0x7ffd1a2b3c44
Index 2 | Value: 30 | Address: 0x7ffd1a2b3c48
Index 3 | Value: 40 | Address: 0x7ffd1a2b3c4c
Index 4 | Value: 50 | Address: 0x7ffd1a2b3c50
```

**Complete C Code:**
```c
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int i;

    for (i = 0; i < 5; i++) {
        printf("Index %d | Value: %d | Address: %p\n", i, arr[i], (void*)&arr[i]);
    }

    return 0;
}
```

**Step-by-Step Explanation:**
1. `int arr[5] = {10, 20, 30, 40, 50};` — declares a 1D array of 5 integers and initializes all 5 in one shot. The array is stored in a contiguous block of memory.
2. The for loop runs from index `0` to `4` (i.e., `i < 5`).
3. `arr[i]` accesses the element at position `i`.
4. `&arr[i]` gives the **memory address** of that element.
5. `%p` is the format specifier for printing pointers/addresses.
6. **Key observation:** each address differs by **4 bytes** (size of `int`), confirming contiguous memory allocation.

---

### Q2 · Coding Problem · Sum, Average, Min & Max of Array

**Problem Statement:**  
Write a C program to accept `n` integers from the user into an array and compute the sum, average, minimum, and maximum.

**Sample Input:**
```
Enter n: 6
Enter elements: 4 7 2 9 1 5
```
**Sample Output:**
```
Sum     : 28
Average : 4.67
Minimum : 1
Maximum : 9
```

**Complete C Code:**
```c
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int sum = 0, min = arr[0], max = arr[0];
    for (i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    printf("Sum     : %d\n", sum);
    printf("Average : %.2f\n", (float)sum / n);
    printf("Minimum : %d\n", min);
    printf("Maximum : %d\n", max);

    return 0;
}
```

**Step-by-Step Explanation:**
1. `int arr[n]` — uses a **Variable Length Array (VLA)**, size determined at runtime.
2. `sum` starts at 0; `min` and `max` are seeded with `arr[0]` before the loop.
3. In each iteration, we add `arr[i]` to sum, and update `min`/`max` using conditionals.
4. `(float)sum / n` — explicit cast to `float` prevents **integer division** (e.g., 28/6 = 4, not 4.67).
5. `%.2f` prints the float rounded to 2 decimal places.

---

### Q3 · Output Prediction · Array Indexing & Out-of-Bounds Behaviour

**Problem Statement:**  
Predict the output of the following program. If there is undefined behaviour, explain why.

```c
#include <stdio.h>

int main() {
    int arr[4] = {5, 10, 15, 20};

    printf("%d\n", arr[0]);
    printf("%d\n", arr[3]);
    printf("%d\n", arr[-1]);   // Line A
    printf("%d\n", arr[4]);    // Line B

    return 0;
}
```

**Answer & Explanation:**
```
5
20
[Undefined Behaviour — Line A]
[Undefined Behaviour — Line B]
```

**Detailed Explanation:**
- `arr[0]` → `5` ✓ (first element)
- `arr[3]` → `20` ✓ (last valid element, index 0–3 for size 4)
- `arr[-1]` → **Undefined Behaviour.** Accesses memory before the array's start. C does NOT do bounds checking; this may print garbage, crash, or corrupt other data.
- `arr[4]` → **Undefined Behaviour.** Index 4 is one past the last valid index. The compiler may silently access adjacent memory.
- **Key interview point:** C trusts the programmer with bounds. Always validate indices. Use tools like **Valgrind** or enable `-fsanitize=address` in GCC to catch these at runtime.

---

### Q4 · Coding Problem · 2D Array — Matrix Input & Display

**Problem Statement:**  
Write a C program to read a 3×3 matrix from the user and display it in proper matrix format. Also print the sum of the main diagonal (trace).

**Sample Input:**
```
Enter 3x3 matrix:
1 2 3
4 5 6
7 8 9
```
**Sample Output:**
```
Matrix:
1  2  3
4  5  6
7  8  9
Trace (diagonal sum): 15
```

**Complete C Code:**
```c
#include <stdio.h>

int main() {
    int mat[3][3], i, j, trace = 0;

    printf("Enter 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);

    printf("\nMatrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%-3d", mat[i][j]);
        printf("\n");
    }

    for (i = 0; i < 3; i++)
        trace += mat[i][i];   // diagonal: row == col

    printf("Trace (diagonal sum): %d\n", trace);
    return 0;
}
```

**Step-by-Step Explanation:**
1. `int mat[3][3]` — a 2D array stored in **row-major order** in memory. `mat[i][j]` maps to `*(mat + i*3 + j)` internally.
2. Nested loops: outer loop → rows, inner loop → columns.
3. `%-3d` — left-aligns each integer in a field of width 3, making columns line up cleanly.
4. **Diagonal condition:** `mat[i][i]` — when row index equals column index, we're on the main diagonal.
5. Trace = 1+5+9 = 15 ✓.

---

### Q5 · Debugging Question · Insertion Bug in Array

**Problem Statement:**  
The following code attempts to insert `99` at position index `2` in an array. It has **two bugs**. Identify and fix them.

**Buggy Code:**
```c
#include <stdio.h>

int main() {
    int arr[6] = {10, 20, 30, 40, 50};
    int n = 5, pos = 2, val = 99;
    int i;

    for (i = n; i > pos; i--)    // Bug 1
        arr[i] = arr[i - 1];

    arr[pos] = val;
    n++;

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
```

**Expected Output:**
```
10 20 99 30 40 50
```

**Answer — Bugs Identified:**

| # | Location | Bug | Fix |
|---|----------|-----|-----|
| 1 | `for (i = n; i > pos; ...)` | Loop starts at `n` (index 5), but valid elements end at `n-1` (index 4). This copies `arr[4]` to `arr[5]` correctly, so actually this is **fine** — the bug is subtle: the loop condition should be `i >= pos + 1` equivalently. Let's look deeper. | Actually Bug 1 is `i > pos` should be `i >= pos + 1` — which is equivalent. The REAL Bug 1: array size must be at least `n+1 = 6`. The array is declared as `arr[6]` — ✓ already fixed in the template. |
| 2 | Shifting direction | If we shift left-to-right we **overwrite** elements. We must shift **right-to-left** (from the end). The code does `i = n` down to `pos+1` — this is correct. |  |

**Real Bug in a simpler version to demonstrate:**
```c
// BUGGY — shifts left to right (overwrites data)
for (i = pos; i < n; i++)
    arr[i + 1] = arr[i];   // arr[pos] overwrites arr[pos+1]'s original before it's saved

// FIXED — shifts right to left (preserves data)
for (i = n; i > pos; i--)
    arr[i] = arr[i - 1];
```

**Fixed Complete Code:**
```c
#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50};  // Extra space for insertion
    int n = 5, pos = 2, val = 99;
    int i;

    // Shift elements to the right from the end
    for (i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = val;
    n++;

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
```

---

## ── LEVEL 2: MEDIUM ─────────────────────────────────────

---

### Q6 · Coding Problem · Linear Search with All Occurrences

**Problem Statement:**  
Write a C program to perform Linear Search on an array. If the element is found, print **all positions** where it occurs. If not found, print an appropriate message.

**Sample Input:**
```
Array: {3, 7, 2, 7, 5, 7, 8}
Search for: 7
```
**Sample Output:**
```
Element 7 found at positions: 1 3 5
Total occurrences: 3
```

**Complete C Code:**
```c
#include <stdio.h>

void linearSearch(int arr[], int n, int key) {
    int count = 0, i;

    printf("Element %d found at positions: ", key);
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("%d ", i);
            count++;
        }
    }

    if (count == 0)
        printf("\nElement %d not found in the array.\n", key);
    else
        printf("\nTotal occurrences: %d\n", count);
}

int main() {
    int arr[] = {3, 7, 2, 7, 5, 7, 8};
    int n = 7, key = 7;

    linearSearch(arr, n, key);
    return 0;
}
```

**Step-by-Step Explanation:**
1. The array is passed to `linearSearch()` as a **pointer** (arrays decay to pointers when passed to functions).
2. The function scans every element from index `0` to `n-1`.
3. Every match increments `count` and prints the index.
4. **Time Complexity: O(n)** — must scan all elements in the worst case.
5. **Best case:** element at index 0 → O(1). **Worst/Average:** O(n).
6. Does **not** require the array to be sorted — that's Linear Search's key advantage over Binary Search.

---

### Q7 · Coding Problem · Binary Search (Iterative)

**Problem Statement:**  
Write a C program to implement iterative Binary Search on a **sorted** array. Display the number of comparisons made.

**Sample Input:**
```
Sorted Array: {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}
Search for: 23
```
**Sample Output:**
```
Comparisons made: 2
Element 23 found at index 5
```

**Complete C Code:**
```c
#include <stdio.h>

int binarySearch(int arr[], int n, int key, int *comparisons) {
    int low = 0, high = n - 1, mid;
    *comparisons = 0;

    while (low <= high) {
        mid = low + (high - low) / 2;   // Avoids integer overflow vs (low+high)/2
        (*comparisons)++;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = 10, key = 23;
    int comparisons, result;

    result = binarySearch(arr, n, key, &comparisons);

    printf("Comparisons made: %d\n", comparisons);
    if (result != -1)
        printf("Element %d found at index %d\n", key, result);
    else
        printf("Element %d not found\n", key);

    return 0;
}
```

**Step-by-Step Explanation:**
1. **Prerequisite:** Array must be sorted.
2. Three pointers: `low` (start), `high` (end), `mid` (middle).
3. `mid = low + (high - low) / 2` — safer than `(low + high) / 2` which can **overflow** for large integers.
4. **Iteration 1:** low=0, high=9, mid=4 → arr[4]=16 < 23 → move low to 5
5. **Iteration 2:** low=5, high=9, mid=7 → arr[7]=56 > 23 → move high to 6
6. **Iteration 3:** low=5, high=6, mid=5 → arr[5]=23 == 23 → FOUND at index 5
7. **Time Complexity: O(log n)** — search space halves each iteration.
8. The `comparisons` pointer tracks how many iterations were needed — a practical interview detail.

---

### Q8 · Coding Problem · Bubble Sort with Pass Count

**Problem Statement:**  
Implement Bubble Sort on an integer array. Display the array after each pass. Also implement the **early termination optimization** (stop if no swaps in a pass).

**Sample Input:**
```
Array: {64, 34, 25, 12, 22, 11, 90}
```
**Sample Output:**
```
Pass 1: 34 25 12 22 11 64 90
Pass 2: 25 12 22 11 34 64 90
Pass 3: 12 22 11 25 34 64 90
Pass 4: 12 11 22 25 34 64 90
Pass 5: 11 12 22 25 34 64 90
Sorted (5 passes): 11 12 22 25 34 64 90
```

**Complete C Code:**
```c
#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void bubbleSort(int arr[], int n) {
    int i, j, temp, swapped, passes = 0;

    for (i = 0; i < n - 1; i++) {
        swapped = 0;

        // After each pass, the largest unsorted element bubbles to the end
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        passes++;
        printf("Pass %d: ", passes);
        printArray(arr, n);

        // Optimization: if no swaps in this pass, array is already sorted
        if (swapped == 0) {
            printf("(Early termination — array sorted!)\n");
            break;
        }
    }
    printf("\nSorted (%d passes): ", passes);
    printArray(arr, n);
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;
    bubbleSort(arr, n);
    return 0;
}
```

**Step-by-Step Explanation:**
1. **Outer loop (i):** controls passes. After pass `i`, the last `i+1` elements are correctly placed.
2. **Inner loop (j):** compares adjacent pairs. Upper bound shrinks by `i` each pass (already-sorted tail skipped).
3. **Swap mechanism:** uses a `temp` variable — classic three-step swap.
4. **`swapped` flag:** if no swaps occur in a full inner pass, the array is sorted. We break early — this brings **best-case to O(n)** for nearly-sorted arrays.
5. **Time Complexity:** Best O(n), Average/Worst O(n²).
6. **Space Complexity:** O(1) — in-place sort.

---

### Q9 · Coding Problem · Deletion from Array at Given Position

**Problem Statement:**  
Write a C function to delete an element from a specific position in an array. Validate the position before deletion.

**Sample Input:**
```
Array: {10, 20, 30, 40, 50}, n=5
Delete at position: 2
```
**Sample Output:**
```
Before deletion: 10 20 30 40 50
After deletion : 10 20 40 50
Deleted element: 30
```

**Complete C Code:**
```c
#include <stdio.h>

int deleteElement(int arr[], int *n, int pos) {
    if (pos < 0 || pos >= *n) {
        printf("Invalid position!\n");
        return -1;
    }

    int deleted = arr[pos];

    // Shift elements left starting from pos
    for (int i = pos; i < *n - 1; i++)
        arr[i] = arr[i + 1];

    (*n)--;      // Reduce logical size
    return deleted;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5, pos = 2;

    printf("Before deletion: "); printArray(arr, n);

    int deleted = deleteElement(arr, &n, pos);

    if (deleted != -1) {
        printf("After deletion : "); printArray(arr, n);
        printf("Deleted element: %d\n", deleted);
    }
    return 0;
}
```

**Step-by-Step Explanation:**
1. **Validation:** check if `pos` is within `[0, n-1]`. Out-of-range → print error and return `-1`.
2. Store the element to be deleted: `deleted = arr[pos]`.
3. **Shift left:** from `pos` to `n-2`, move each element one step left. This overwrites `arr[pos]`.
4. `(*n)--` — decrease the logical size. The physical array is unchanged; we just track fewer elements.
5. The last element `arr[n-1]` is now "orphaned" but harmless since we never access it.
6. Passing `n` as a **pointer** allows the function to modify the caller's `n`.

---

### Q10 · Concept + Coding Mix · 2D Array — Matrix Transpose

**Problem Statement:**  
Explain the concept of matrix transposition and write a C program to transpose a 3×3 matrix **in-place** (without using an extra matrix).

**Sample Input:**
```
1 2 3
4 5 6
7 8 9
```
**Sample Output:**
```
Transpose:
1 4 7
2 5 8
3 6 9
```

**Complete C Code:**
```c
#include <stdio.h>
#define N 3

void printMatrix(int mat[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%-4d", mat[i][j]);
        printf("\n");
    }
}

void transpose(int mat[N][N]) {
    int temp;
    // Only swap elements ABOVE the main diagonal with those BELOW
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {   // j starts at i+1 to avoid double-swapping
            temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
}

int main() {
    int mat[N][N] = {{1,2,3},{4,5,6},{7,8,9}};
    transpose(mat);
    printf("Transpose:\n");
    printMatrix(mat);
    return 0;
}
```

**Concept Explanation:**
- **Transpose:** The element at `mat[i][j]` moves to `mat[j][i]`. Rows become columns.
- **In-place trick:** Only swap elements in the **upper triangle** (where j > i). If we iterated the full matrix, we'd swap each pair twice, undoing the transpose.
- Inner loop `j = i + 1` ensures we only process the upper-right triangle.
- Diagonal elements (`mat[i][i]`) stay fixed — they map to themselves.

---

## ── LEVEL 3: HARD (Interview Level) ────────────────────

---

### Q11 · Interview-Level · Passing 2D Array to Function + Row-wise Sum

**Problem Statement:**  
Write a program that accepts a 2D array of dimensions m×n, passes it to a function, computes the row-wise sum and column-wise sum, and identifies the row/column with the maximum sum.

**Sample Input:**
```
Rows: 3, Cols: 4
Matrix:
1  2  3  4
5  6  7  8
9  10 11 12
```
**Sample Output:**
```
Row sums: 10 26 42
Col sums: 15 18 21 24
Max row sum: Row 2 = 42
Max col sum: Col 3 = 24
```

**Complete C Code:**
```c
#include <stdio.h>
#define MAXR 10
#define MAXC 10

void computeSums(int mat[][MAXC], int rows, int cols,
                 int rowSum[], int colSum[]) {
    int i, j;

    for (i = 0; i < rows; i++) rowSum[i] = 0;
    for (j = 0; j < cols; j++) colSum[j] = 0;

    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++) {
            rowSum[i] += mat[i][j];
            colSum[j] += mat[i][j];
        }
}

int findMax(int arr[], int n, int *maxIdx) {
    int max = arr[0]; *maxIdx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) { max = arr[i]; *maxIdx = i; }
    }
    return max;
}

int main() {
    int mat[MAXR][MAXC], rows = 3, cols = 4;
    int rowSum[MAXR], colSum[MAXC];
    int i, j;

    int data[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            mat[i][j] = data[i][j];

    computeSums(mat, rows, cols, rowSum, colSum);

    printf("Row sums: ");
    for (i = 0; i < rows; i++) printf("%d ", rowSum[i]);

    printf("\nCol sums: ");
    for (j = 0; j < cols; j++) printf("%d ", colSum[j]);

    int maxRowIdx, maxColIdx;
    int maxRow = findMax(rowSum, rows, &maxRowIdx);
    int maxCol = findMax(colSum, cols, &maxColIdx);

    printf("\nMax row sum: Row %d = %d\n", maxRowIdx, maxRow);
    printf("Max col sum: Col %d = %d\n", maxColIdx, maxCol);

    return 0;
}
```

**Step-by-Step Explanation:**
1. **2D array in function parameter:** `int mat[][MAXC]` — when passing a 2D array, **the first dimension can be omitted** but the **second dimension (MAXC) is mandatory**. This is because C needs the column count to compute `mat[i][j]` as `*(mat + i*MAXC + j)`.
2. Two 1D arrays (`rowSum`, `colSum`) are passed to collect results.
3. A single double loop fills both simultaneously — efficient O(m×n) single pass.
4. `findMax` finds the max and also returns the index via a pointer parameter.
5. **Interview trap:** Beginners often pass 2D arrays incorrectly (omitting column size). This program demonstrates the correct technique.

---

### Q12 · Hard Tricky Interview Question · Find Duplicates Using Array Indexing

**Problem Statement:**  
Given an array of `n` integers where each element is in range `[1, n]`, find all duplicate elements in **O(n) time and O(1) extra space** (no extra array, no sorting). Use the array itself as a hash map by negating visited indices.

**Sample Input:**
```
Array: {4, 3, 2, 7, 8, 2, 3, 1}, n=8
```
**Sample Output:**
```
Duplicates: 2 3
```

**Complete C Code:**
```c
#include <stdio.h>
#include <stdlib.h>   // For abs()

void findDuplicates(int arr[], int n) {
    printf("Duplicates: ");
    int found = 0;

    for (int i = 0; i < n; i++) {
        // Use absolute value since arr[i] might already be negated
        int idx = abs(arr[i]) - 1;   // Map value to 0-based index

        if (arr[idx] > 0) {
            arr[idx] = -arr[idx];    // Mark as visited by negating
        } else {
            printf("%d ", abs(arr[i]));  // Negative means visited TWICE → duplicate
            found = 1;
        }
    }

    if (!found) printf("None");
    printf("\n");

    // Restore array (optional, for courtesy)
    for (int i = 0; i < n; i++)
        if (arr[i] < 0) arr[i] = -arr[i];
}

int main() {
    int arr[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int n = 8;

    printf("Array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    findDuplicates(arr, n);
    return 0;
}
```

**Step-by-Step Explanation (Trace):**
```
Initial: {4, 3, 2, 7, 8, 2, 3, 1}

i=0: value=4, idx=3. arr[3]=7>0 → negate → arr[3]=-7
     Array: {4, 3, 2, -7, 8, 2, 3, 1}

i=1: value=3, idx=2. arr[2]=2>0 → negate → arr[2]=-2
     Array: {4, 3, -2, -7, 8, 2, 3, 1}

i=2: value=abs(-2)=2, idx=1. arr[1]=3>0 → negate → arr[1]=-3
     Array: {4, -3, -2, -7, 8, 2, 3, 1}

i=3: value=abs(-7)=7, idx=6. arr[6]=3>0 → negate → arr[6]=-3
     Array: {4, -3, -2, -7, 8, 2, -3, 1}

i=4: value=8, idx=7. arr[7]=1>0 → negate → arr[7]=-1

i=5: value=2, idx=1. arr[1]=-3<0 → DUPLICATE! Print 2

i=6: value=abs(-3)=3, idx=2. arr[2]=-2<0 → DUPLICATE! Print 3

i=7: value=abs(-1)=1, idx=0. arr[0]=4>0 → negate
```
- **Key insight:** Use the value as an index (after -1 adjustment). If the element at that index is already negative, we've seen this value before → it's a duplicate.
- **Time:** O(n), **Space:** O(1) — a classic interview gem.

---

# ═══════════════════════════════════════════
# UNIT V: Pointers, Dynamic Memory & Strings
# ═══════════════════════════════════════════

---

## ── LEVEL 1: EASY ──────────────────────────────────────

---

### Q13 · Coding Problem · Pointer Basics — Declaration, Initialization, Dereferencing

**Problem Statement:**  
Demonstrate pointer declaration, initialization, and dereferencing. Also show how modifying the value through a pointer affects the original variable.

**Sample Output:**
```
Value of x     : 42
Address of x   : 0x7ffd...
Value of ptr   : 0x7ffd...  (same as &x)
Value via *ptr : 42
After *ptr = 100, x = 100
```

**Complete C Code:**
```c
#include <stdio.h>

int main() {
    int x = 42;
    int *ptr;       // Pointer declaration — stores address of an int

    ptr = &x;       // Initialization — ptr holds address of x

    printf("Value of x     : %d\n", x);
    printf("Address of x   : %p\n", (void*)&x);
    printf("Value of ptr   : %p\n", (void*)ptr);       // Same as &x
    printf("Value via *ptr : %d\n", *ptr);             // Dereference

    *ptr = 100;     // Modify x through pointer
    printf("After *ptr = 100, x = %d\n", x);          // x changed!

    return 0;
}
```

**Step-by-Step Explanation:**
1. `int *ptr` — declares a pointer to `int`. The `*` means "this variable holds an address of an int."
2. `ptr = &x` — `&x` is the **address-of** operator. `ptr` now holds x's address.
3. `*ptr` — the **dereference** operator. "Go to the address stored in ptr and read the value there."
4. `*ptr = 100` — writes `100` into the memory location pointed to by `ptr`, which IS `x`. So `x` becomes `100`.
5. `ptr` and `&x` print the same address — they refer to the same location.

---

### Q14 · Output Prediction · Types of Pointers — Wild, Null, Void, Dangling

**Problem Statement:**  
Analyze the following code snippets and identify which type of pointer issue each represents. Predict which ones cause undefined behaviour.

```c
// Snippet A
int *p;
printf("%d", *p);

// Snippet B
int *q = NULL;
printf("%d", *q);

// Snippet C
int *r = (int *)malloc(sizeof(int));
*r = 55;
free(r);
printf("%d", *r);

// Snippet D
void *vp;
int x = 10;
vp = &x;
printf("%d", *(int*)vp);
```

**Answers:**

| Snippet | Pointer Type | Behaviour | Explanation |
|---------|-------------|-----------|-------------|
| A | **Wild Pointer** | Undefined Behaviour | `p` is declared but **never initialized**. Points to a garbage address. Dereferencing may crash or corrupt memory. |
| B | **Null Pointer** | Crash / Segmentation Fault | `q = NULL` means it points to address `0`, which is deliberately invalid. Any dereference causes a segfault — this is intentional safety. |
| C | **Dangling Pointer** | Undefined Behaviour | Memory freed, but `r` still holds the old address. The freed memory may be reallocated elsewhere. Dereferencing reads stale/corrupt data. |
| D | **Void Pointer** | Output: `10` ✓ | `void*` is a generic pointer. It can hold any address but **cannot be directly dereferenced** without casting. `*(int*)vp` correctly casts and dereferences. |

**Key Rules:**
- **Always initialize pointers** (to a valid address or NULL).
- **Set pointer to NULL after free():** `free(r); r = NULL;`
- **Check for NULL** before dereferencing: `if (ptr != NULL) { ... }`

---

### Q15 · Coding Problem · Pointer Arithmetic

**Problem Statement:**  
Write a C program to demonstrate pointer arithmetic — incrementing, decrementing, and finding the difference between two pointers.

**Sample Output:**
```
arr[0] at 0x100: 10
arr[1] at 0x104: 20   (ptr moved +4 bytes)
arr[2] at 0x108: 30
arr[4] at 0x110: 50   (ptr+4 skips 4 elements)
Elements between ptr2 and ptr1: 2
```

**Complete C Code:**
```c
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;   // Points to arr[0]

    printf("arr[0] at %p: %d\n", (void*)ptr, *ptr);

    ptr++;            // Move to next int (advances by sizeof(int) = 4 bytes)
    printf("arr[1] at %p: %d   (ptr moved +4 bytes)\n", (void*)ptr, *ptr);

    ptr++;
    printf("arr[2] at %p: %d\n", (void*)ptr, *ptr);

    ptr = arr;        // Reset to start
    printf("arr[4] at %p: %d   (ptr+4 skips 4 elements)\n",
           (void*)(ptr + 4), *(ptr + 4));

    // Pointer difference
    int *ptr1 = &arr[1];
    int *ptr2 = &arr[3];
    printf("Elements between ptr2 and ptr1: %ld\n", ptr2 - ptr1);

    return 0;
}
```

**Step-by-Step Explanation:**
1. `ptr = arr` — array name decays to pointer to its first element.
2. `ptr++` — increments by `sizeof(int)` bytes (typically 4), NOT by 1 byte. That's because `ptr` is `int*`.
3. `ptr + 4` — computes address of `arr[4]` without modifying `ptr` itself.
4. `ptr2 - ptr1` — **pointer difference** gives the number of elements between them (not byte difference). Result: `(arr[3] - arr[1]) = 2`.
5. **Rule:** Pointer arithmetic is only defined for pointers to elements of the same array.

---

### Q16 · Coding Problem · Basic String Input/Output & String Functions

**Problem Statement:**  
Write a C program that reads a string, computes its length manually (without strlen), then validates using `strlen()`. Also demonstrate `strcpy`, `strcmp`, and `strcat`.

**Sample Input:**
```
Enter a string: Hello
```
**Sample Output:**
```
String: Hello
Manual length : 5
strlen() length: 5
After strcpy  : Hello
strcmp result : 0 (strings are equal)
After strcat  : HelloWorld
```

**Complete C Code:**
```c
#include <stdio.h>
#include <string.h>

int manualLen(char *s) {
    int count = 0;
    while (s[count] != '\0')   // Count until null terminator
        count++;
    return count;
}

int main() {
    char str1[50], str2[50], str3[100];

    printf("Enter a string: ");
    scanf("%s", str1);    // %s reads until whitespace

    printf("String: %s\n", str1);
    printf("Manual length : %d\n", manualLen(str1));
    printf("strlen() length: %zu\n", strlen(str1));

    // strcpy
    strcpy(str2, str1);
    printf("After strcpy  : %s\n", str2);

    // strcmp
    int cmp = strcmp(str1, str2);
    printf("strcmp result : %d (%s)\n", cmp,
           cmp == 0 ? "strings are equal" :
           cmp < 0  ? "str1 < str2" : "str1 > str2");

    // strcat
    strcpy(str3, str1);
    strcat(str3, "World");
    printf("After strcat  : %s\n", str3);

    return 0;
}
```

**Step-by-Step Explanation:**
1. `manualLen()` — walks character by character until `'\0'` (ASCII 0), the null terminator every C string ends with.
2. `scanf("%s", str1)` — reads until the first whitespace. For strings with spaces, use `fgets(str1, 50, stdin)`.
3. `strlen()` — returns `size_t` (unsigned), printed with `%zu`.
4. `strcpy(dest, src)` — copies `src` into `dest` including `'\0'`. Ensure `dest` is large enough.
5. `strcmp(a, b)` — returns `0` if equal, `<0` if `a < b` lexicographically, `>0` if `a > b`.
6. `strcat(dest, src)` — appends `src` to `dest`. Make sure `dest` has enough space for both strings.

---

### Q17 · Coding Problem · Dynamic Memory with malloc

**Problem Statement:**  
Write a C program that dynamically allocates memory for an array of `n` integers using `malloc`. Input the array, compute the sum, then properly free the memory.

**Sample Input:**
```
Enter n: 4
Enter elements: 5 10 15 20
```
**Sample Output:**
```
Sum: 50
Memory successfully freed.
```

**Complete C Code:**
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    // Allocate n integers on the heap
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {            // ALWAYS check for allocation failure
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
        sum += arr[i];

    printf("Sum: %d\n", sum);

    free(arr);                    // Return memory to heap
    arr = NULL;                   // Prevent dangling pointer
    printf("Memory successfully freed.\n");

    return 0;
}
```

**Step-by-Step Explanation:**
1. `malloc(n * sizeof(int))` — requests `n * 4` bytes from the **heap**. Returns `void*`.
2. `(int *)` — cast the `void*` to `int*` so we can use array indexing.
3. **NULL check** — if system is out of memory, `malloc` returns `NULL`. Dereferencing NULL is a crash. Always check!
4. `arr[i]` works just like a normal array — the pointer supports subscript notation.
5. `free(arr)` — releases heap memory. **Never `free()` the same pointer twice** (double-free → undefined behaviour).
6. `arr = NULL` — prevents accidental use of the dangling pointer.

---

## ── LEVEL 2: MEDIUM ─────────────────────────────────────

---

### Q18 · Coding Problem · Passing Pointers to Functions — Swap & Circular Rotate

**Problem Statement:**  
(a) Write a `swap` function using pointers. (b) Extend it to perform a **circular rotation** of 3 variables: a→b, b→c, c→a.

**Sample Input:**
```
a=1, b=2, c=3
```
**Sample Output:**
```
Before swap : a=1 b=2
After swap  : a=2 b=1
Before rotate: a=1 b=2 c=3
After rotate : a=3 b=1 c=2
```

**Complete C Code:**
```c
#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Circular left rotation: a←b←c←a becomes a=old_c, b=old_a, c=old_b
void rotate(int *a, int *b, int *c) {
    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}

int main() {
    int a = 1, b = 2;
    printf("Before swap : a=%d b=%d\n", a, b);
    swap(&a, &b);
    printf("After swap  : a=%d b=%d\n", a, b);

    a = 1; b = 2; int c = 3;
    printf("Before rotate: a=%d b=%d c=%d\n", a, b, c);
    rotate(&a, &b, &c);
    printf("After rotate : a=%d b=%d c=%d\n", a, b, c);

    return 0;
}
```

**Step-by-Step Explanation:**
1. **Why pointers for swap?** Without pointers, C passes arguments **by value** (copies). Changes inside the function don't affect the caller. Pointers give us the actual addresses.
2. `swap(&a, &b)` — passes addresses. Inside, `*x` and `*y` directly access `a` and `b`.
3. **Common mistake:** `swap(a, b)` (without `&`) — the function gets copies, swap is local only.
4. **Rotate logic:** Store `*a` in temp, then chain assignments backward to avoid overwriting unread values.
5. This is the **foundation** of many in-place algorithms — understanding call-by-pointer is essential.

---

### Q19 · Coding Problem · Pointers with Arrays — Traversal via Pointer

**Problem Statement:**  
Traverse an integer array using **pointer notation** (no array subscript `[]`). Also write a function that finds the second largest element using pointers.

**Sample Input:**
```
Array: {15, 3, 9, 7, 15, 4, 8}
```
**Sample Output:**
```
Elements (pointer walk): 15 3 9 7 15 4 8
Second largest: 9
```

**Complete C Code:**
```c
#include <stdio.h>

void printViaPointer(int *ptr, int n) {
    printf("Elements (pointer walk): ");
    for (int i = 0; i < n; i++)
        printf("%d ", *(ptr + i));   // Equivalent to ptr[i]
    printf("\n");
}

int secondLargest(int *arr, int n) {
    int first = -__INT_MAX__, second = -__INT_MAX__;

    for (int *p = arr; p < arr + n; p++) {
        if (*p > first) {
            second = first;
            first = *p;
        } else if (*p > second && *p != first) {
            second = *p;
        }
    }
    return second;
}

int main() {
    int arr[] = {15, 3, 9, 7, 15, 4, 8};
    int n = 7;

    printViaPointer(arr, n);
    printf("Second largest: %d\n", secondLargest(arr, n));

    return 0;
}
```

**Step-by-Step Explanation:**
1. `*(ptr + i)` is **exactly equivalent** to `ptr[i]` (or `arr[i]`). Array indexing IS pointer arithmetic!
2. In `secondLargest`, `int *p = arr` starts at the first element; `p < arr + n` is the end condition; `p++` advances by `sizeof(int)`.
3. The algorithm maintains `first` (largest) and `second` (second largest). When we see a new max, the old max becomes second. The condition `*p != first` handles duplicates (15 appears twice — should not count as second largest).
4. **Key insight:** `arr[i]` ≡ `*(arr + i)` ≡ `*(i + arr)` ≡ `i[arr]` (all valid C!).

---

### Q20 · Coding Problem · Dynamic Memory — calloc, realloc & Comparison

**Problem Statement:**  
Demonstrate `malloc`, `calloc`, and `realloc` with practical comparison. Start with 3 elements using `calloc`, then expand to 6 using `realloc`.

**Sample Output:**
```
After calloc (3 elements, all zeros): 0 0 0
After filling: 10 20 30
After realloc to 6 elements: 10 20 30 0 0 0
After filling new slots: 10 20 30 40 50 60
```

**Complete C Code:**
```c
#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n = 3;

    // calloc: allocates AND zero-initializes
    int *arr = (int *)calloc(n, sizeof(int));
    if (!arr) { printf("Allocation failed\n"); return 1; }

    printf("After calloc (3 elements, all zeros): ");
    printArray(arr, n);

    arr[0] = 10; arr[1] = 20; arr[2] = 30;
    printf("After filling: ");
    printArray(arr, n);

    // realloc: resize — expands or shrinks the block
    int newN = 6;
    int *temp = (int *)realloc(arr, newN * sizeof(int));
    if (!temp) {
        printf("Reallocation failed\n");
        free(arr);
        return 1;
    }
    arr = temp;    // Important: use temp to avoid losing arr on failure

    // Zero out the new portion manually (realloc doesn't zero new bytes)
    for (int i = n; i < newN; i++) arr[i] = 0;
    printf("After realloc to 6 elements: ");
    printArray(arr, newN);

    arr[3] = 40; arr[4] = 50; arr[5] = 60;
    printf("After filling new slots: ");
    printArray(arr, newN);

    free(arr);
    arr = NULL;
    return 0;
}
```

**Step-by-Step Explanation:**

| Function | Syntax | Initializes? | Use Case |
|----------|--------|-------------|----------|
| `malloc(size)` | `malloc(n * sizeof(T))` | ❌ Garbage | Fast allocation |
| `calloc(n, size)` | `calloc(n, sizeof(T))` | ✅ Zero | Need zeroed memory |
| `realloc(ptr, newSize)` | `realloc(ptr, newN * sizeof(T))` | ❌ New bytes uninitialized | Resize existing block |
| `free(ptr)` | `free(ptr)` | — | Always match every malloc/calloc |

**Critical realloc pattern:**
```c
int *temp = realloc(arr, newSize);
if (!temp) { free(arr); return 1; }  // Original arr still valid if realloc fails
arr = temp;                           // Only reassign after confirming success
```
Never do `arr = realloc(arr, ...)` directly — if `realloc` fails, you lose the original pointer!

---

### Q21 · Coding Problem · String Reversal & Palindrome Check (No Library)

**Problem Statement:**  
Write a C program to: (a) reverse a string in-place using pointers, (b) check if the original string is a palindrome.

**Sample Input:**
```
Enter string: racecar
```
**Sample Output:**
```
Original : racecar
Reversed : racecar
Is palindrome: YES
```

**Complete C Code:**
```c
#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    char *left = str;
    char *right = str + strlen(str) - 1;
    char temp;

    while (left < right) {
        temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}

int isPalindrome(char *str) {
    char *left = str;
    char *right = str + strlen(str) - 1;

    while (left < right) {
        if (*left != *right)
            return 0;   // Not palindrome
        left++;
        right--;
    }
    return 1;
}

int main() {
    char original[100], copy[100];

    printf("Enter string: ");
    scanf("%s", original);
    strcpy(copy, original);

    printf("Original : %s\n", original);

    int palindrome = isPalindrome(original);

    reverseString(original);
    printf("Reversed : %s\n", original);

    printf("Is palindrome: %s\n", palindrome ? "YES" : "NO");

    return 0;
}
```

**Step-by-Step Explanation:**
1. **Two-pointer technique:** `left` starts at the beginning, `right` at the last character (before `'\0'`).
2. Swap characters at `left` and `right`, then move them toward each other.
3. Stop when `left >= right` — the middle of the string is reached.
4. For palindrome check, instead of swapping, just **compare** — if any mismatch, return `0`.
5. We check `isPalindrome` BEFORE reversing, since reversing modifies the string.
6. **Character arithmetic:** `str + strlen(str) - 1` uses pointer arithmetic to jump to the last character.

---

### Q22 · Concept + Coding · Character Arithmetic & Case Conversion

**Problem Statement:**  
Explain ASCII-based character arithmetic. Write a program to: (a) convert lowercase to uppercase without `toupper()`, (b) count vowels and consonants, (c) count digits and special characters.

**Sample Input:**
```
Enter string: Hello World! 123
```
**Sample Output:**
```
Uppercase   : HELLO WORLD! 123
Vowels      : 3
Consonants  : 7
Digits      : 3
Special/Space: 3
```

**Complete C Code:**
```c
#include <stdio.h>
#include <string.h>

int isVowel(char c) {
    c = (c >= 'a' && c <= 'z') ? c - 32 : c;   // To uppercase
    return (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
}

int main() {
    char str[200];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    int vowels=0, consonants=0, digits=0, special=0;
    int len = strlen(str);

    // Remove trailing newline from fgets
    if (str[len-1] == '\n') { str[len-1] = '\0'; len--; }

    printf("Uppercase   : ");
    for (int i = 0; i < len; i++) {
        char c = str[i];

        // Convert lowercase to uppercase using ASCII arithmetic
        if (c >= 'a' && c <= 'z') {
            printf("%c", c - 32);   // 'a'=97, 'A'=65, difference=32
        } else {
            printf("%c", c);
        }

        // Categorize
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (isVowel(c)) vowels++;
            else consonants++;
        } else if (c >= '0' && c <= '9') {
            digits++;
        } else {
            special++;
        }
    }

    printf("\nVowels      : %d\n", vowels);
    printf("Consonants  : %d\n", consonants);
    printf("Digits      : %d\n", digits);
    printf("Special/Space: %d\n", special);

    return 0;
}
```

**ASCII Arithmetic Explained:**

| Operation | Formula | Example |
|-----------|---------|---------|
| Lower → Upper | `c - 32` | `'a'(97) - 32 = 'A'(65)` |
| Upper → Lower | `c + 32` | `'A'(65) + 32 = 'a'(97)` |
| Digit to int | `c - '0'` | `'7'(55) - '0'(48) = 7` |
| Check lowercase | `c >= 'a' && c <= 'z'` | Direct range check |
| Check uppercase | `c >= 'A' && c <= 'Z'` | Direct range check |
| Check digit | `c >= '0' && c <= '9'` | Direct range check |

---

## ── LEVEL 3: HARD (Interview Level) ────────────────────

---

### Q23 · Hard Interview · Dynamic 2D Array Using Double Pointer (malloc + free)

**Problem Statement:**  
Dynamically allocate a 2D matrix of size r×c using `malloc` and a double pointer (`int **`). Fill it with multiplication table values, display it, then properly free all memory row by row.

**Sample Input:**
```
Rows: 3, Cols: 4
```
**Sample Output:**
```
Multiplication Table (3x4):
 1  2  3  4
 2  4  6  8
 3  6  9 12
Memory freed successfully.
```

**Complete C Code:**
```c
#include <stdio.h>
#include <stdlib.h>

int** allocate2D(int rows, int cols) {
    // Step 1: Allocate array of row pointers
    int **mat = (int **)malloc(rows * sizeof(int *));
    if (!mat) return NULL;

    // Step 2: Allocate each row independently
    for (int i = 0; i < rows; i++) {
        mat[i] = (int *)malloc(cols * sizeof(int));
        if (!mat[i]) {
            // Clean up partially allocated rows
            for (int k = 0; k < i; k++) free(mat[k]);
            free(mat);
            return NULL;
        }
    }
    return mat;
}

void free2D(int **mat, int rows) {
    // Free in reverse order: rows first, then the pointer array
    for (int i = 0; i < rows; i++)
        free(mat[i]);
    free(mat);
}

int main() {
    int rows = 3, cols = 4;

    int **mat = allocate2D(rows, cols);
    if (!mat) { printf("Allocation failed\n"); return 1; }

    // Fill with multiplication values
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            mat[i][j] = (i+1) * (j+1);

    // Display
    printf("Multiplication Table (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%3d", mat[i][j]);
        printf("\n");
    }

    free2D(mat, rows);
    mat = NULL;
    printf("Memory freed successfully.\n");

    return 0;
}
```

**Memory Layout Diagram:**
```
mat (int**)
 │
 ├─→ mat[0] (int*) → [1][2][3][4]      ← Row 0 on heap
 ├─→ mat[1] (int*) → [2][4][6][8]      ← Row 1 on heap
 └─→ mat[2] (int*) → [3][6][9][12]     ← Row 2 on heap
```

**Step-by-Step Explanation:**
1. `int **mat` — a pointer to a pointer. Think of it as an array of arrays.
2. First `malloc`: allocates `rows` pointers (each `int*`).
3. Second `malloc` (loop): allocates each individual row's integer storage.
4. **Partial failure handling** — if any row allocation fails, free already-allocated rows to avoid memory leaks.
5. **Free order is critical:** free each row's data BEFORE freeing the pointer array. Reversing the order would lose the row pointers before freeing the data → memory leak.
6. **Contrast with static 2D:** `int mat[3][4]` is contiguous. Dynamic 2D rows may be scattered in memory, but `mat[i][j]` syntax still works due to pointer chaining.

---

### Q24 · Hard Tricky Interview · String Tokenization Without strtok — Custom Split

**Problem Statement:**  
Without using `strtok()` or any other tokenization library function, write a C program that splits a sentence into words (tokens) by spaces, stores each word using dynamically allocated memory, and prints each word on a new line with its length. Also count total words.

**Sample Input:**
```
Enter sentence: the quick brown fox jumps
```
**Sample Output:**
```
Word 1: "the"        [length: 3]
Word 2: "quick"      [length: 5]
Word 3: "brown"      [length: 5]
Word 4: "fox"        [length: 3]
Word 5: "jumps"      [length: 5]
Total words: 5
```

**Complete C Code:**
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_LEN   200

int main() {
    char sentence[MAX_LEN];
    char *words[MAX_WORDS];
    int wordCount = 0;

    printf("Enter sentence: ");
    fgets(sentence, MAX_LEN, stdin);

    // Remove trailing newline
    int slen = strlen(sentence);
    if (sentence[slen-1] == '\n') sentence[slen-1] = '\0';

    char *p = sentence;

    while (*p != '\0') {
        // Skip leading spaces
        while (*p == ' ') p++;
        if (*p == '\0') break;

        // Find end of word
        char *wordStart = p;
        while (*p != ' ' && *p != '\0') p++;
        int len = p - wordStart;    // Pointer subtraction = word length

        // Dynamically allocate exact memory for this word
        words[wordCount] = (char *)malloc((len + 1) * sizeof(char));
        if (!words[wordCount]) { printf("Allocation failed\n"); return 1; }

        // Copy word character by character (no strncpy)
        for (int i = 0; i < len; i++)
            words[wordCount][i] = wordStart[i];
        words[wordCount][len] = '\0';   // Null terminate

        wordCount++;
    }

    // Display results
    for (int i = 0; i < wordCount; i++) {
        printf("Word %d: \"%-12s [length: %zu]\n",
               i+1, words[i], strlen(words[i]));
    }
    printf("Total words: %d\n", wordCount);

    // Free all allocated memory
    for (int i = 0; i < wordCount; i++) {
        free(words[i]);
        words[i] = NULL;
    }

    return 0;
}
```

**Step-by-Step Explanation:**
1. **Skip spaces:** `while (*p == ' ') p++` — advances past any leading whitespace.
2. **Find word boundaries:** `wordStart = p`, then advance `p` until space or `\0`.
3. **Length via pointer arithmetic:** `len = p - wordStart` — subtracting two pointers gives element count between them.
4. **`malloc(len + 1)`** — `+1` for the null terminator `\0`. A classic mistake: forgetting this causes buffer overflows.
5. **Manual copy:** We deliberately avoid `strncpy` to show character-level string manipulation.
6. **Free each word individually** — each was allocated separately, so each needs its own `free()`.
7. **Why this is interview-worthy:** Tests pointer arithmetic, dynamic allocation, manual string parsing, and memory management simultaneously — covering nearly the entire Unit V syllabus in one problem.

---

### Q25 · Hard Debugging + Concept · String Function Pitfalls & Safe Alternatives

**Problem Statement:**  
The following code has **4 distinct bugs** involving string functions and pointer misuse. Identify each bug, explain the danger, and provide the corrected code.

**Buggy Code:**
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *s1 = "Hello";           // Line 1
    char s2[5];
    char *s3 = malloc(20);

    strcpy(s2, "World");          // Line 2
    strcat(s1, " World");         // Line 3
    strcpy(s3, s1);

    if (strcmp(s1, s3) = 0)      // Line 4
        printf("Equal\n");

    free(s1);                     // Line 5
    free(s3);

    return 0;
}
```

**Bugs Identified:**

| Line | Bug Type | Problem | Fix |
|------|----------|---------|-----|
| Line 1 | **String literal pointer** | `char *s1 = "Hello"` points to **read-only** string literal in memory. Modifying it is undefined behaviour (crash). | Change to `char s1[20] = "Hello";` |
| Line 2 | **Buffer overflow** | `s2[5]` can hold 4 chars + `\0`. "World" needs 6 bytes (5 chars + `\0`). `strcpy` overflows into adjacent memory. | Change to `char s2[10];` |
| Line 3 | **Write to read-only memory** | `strcat(s1, " World")` tries to append to `s1` which is a string literal → crash. | Fixed after fixing Line 1 (s1 needs enough space). |
| Line 4 | **Assignment vs comparison** | `= 0` is assignment, not comparison. Should be `== 0`. Compiler error or always-true condition. | `strcmp(s1, s3) == 0` |
| Line 5 | **Freeing non-heap memory** | `s1` (if it were a string literal or stack array) cannot be `free()`d. Only `malloc/calloc/realloc` memory can be freed. | Remove `free(s1)` if `s1` is stack-allocated. |

**Corrected Code:**
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s1[30] = "Hello";        // Fix 1: Stack buffer, writable
    char s2[10];                  // Fix 2: Enough space for "World\0"
    char *s3 = (char *)malloc(30); // Cast for clarity

    if (!s3) { printf("malloc failed\n"); return 1; }

    strcpy(s2, "World");          // Now safe: s2 has 10 bytes, "World" needs 6
    strcat(s1, " World");         // Fix 3: s1 now has space and is writable
    strcpy(s3, s1);

    if (strcmp(s1, s3) == 0)      // Fix 4: == not =
        printf("Equal\n");

    // Fix 5: Only free heap-allocated memory (s3)
    free(s3);
    s3 = NULL;

    return 0;
}
```

**Key Takeaways for Interviews:**
1. **`char *s = "literal"`** → READ-ONLY. Use `char s[]= "literal"` for a mutable copy.
2. **Always size buffers** as `strlen(src) + 1` minimum.
3. **`strcmp` returns int, not bool** — always compare with `== 0`, never assign.
4. **Only `free()` heap memory** from `malloc/calloc/realloc`.
5. **`strcat` pitfall:** destination must have space for `strlen(dest) + strlen(src) + 1`.

---

## ── BONUS: COMBINED UNIT IV + V CHALLENGE ──────────────

---

### Q26 · Expert-Level · Dynamic Array with Pointer-Based Insertion Sort

**Problem Statement:**  
Create a dynamic integer array, fill it with user input, sort it using **Insertion Sort via pointer arithmetic** (no array subscripts inside the sort function), then binary search for a target.

**Complete C Code:**
```c
#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *arr, int n) {
    // Using pointer arithmetic exclusively inside sort
    for (int *i = arr + 1; i < arr + n; i++) {
        int key = *i;
        int *j = i - 1;
        while (j >= arr && *j > key) {
            *(j + 1) = *j;
            j--;
        }
        *(j + 1) = key;
    }
}

int binarySearch(int *arr, int n, int key) {
    int *low = arr, *high = arr + n - 1;
    while (low <= high) {
        int *mid = low + (high - low) / 2;
        if (*mid == key) return mid - arr;   // Index via pointer subtraction
        else if (*mid < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

void printArr(int *arr, int n) {
    for (int *p = arr; p < arr + n; p++)
        printf("%d ", *p);
    printf("\n");
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (!arr) { printf("malloc failed\n"); return 1; }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) scanf("%d", arr + i);  // Pointer notation

    printf("Before sort: "); printArr(arr, n);

    insertionSort(arr, n);
    printf("After sort : "); printArr(arr, n);

    int target;
    printf("Search for: "); scanf("%d", &target);
    int idx = binarySearch(arr, n, target);

    if (idx != -1) printf("Found %d at index %d\n", target, idx);
    else printf("%d not found\n", target);

    free(arr);
    arr = NULL;
    return 0;
}
```

**What this question tests:**
- Dynamic memory allocation (`malloc`, `free`)
- Insertion Sort logic
- Pure pointer arithmetic (no `[]` notation in sort/search)
- Binary search on a sorted dynamic array
- Pointer subtraction to compute indices
- Proper memory management

---

## ═══════════════════════════════════════════
## QUICK REFERENCE SUMMARY CARD
## ═══════════════════════════════════════════

### Array Operations Complexity

| Operation | Best Case | Worst Case | Notes |
|-----------|----------|-----------|-------|
| Linear Search | O(1) | O(n) | Unsorted OK |
| Binary Search | O(1) | O(log n) | SORTED required |
| Bubble Sort | O(n)* | O(n²) | *with optimization |
| Insertion in array | O(1) | O(n) | At end vs. beginning |
| Deletion from array | O(1) | O(n) | From end vs. beginning |

### Memory Allocation Comparison

| Function | Initializes | On Failure | Typical Use |
|----------|------------|-----------|------------|
| `malloc(size)` | No (garbage) | Returns NULL | General allocation |
| `calloc(n, size)` | Yes (zeros) | Returns NULL | Zero-initialized arrays |
| `realloc(ptr, newSize)` | No (new bytes) | Returns NULL, ptr valid | Resize existing block |
| `free(ptr)` | — | — | ALWAYS call this |

### String Functions Cheat Sheet

| Function | Signature | Returns | Safe? |
|----------|-----------|---------|-------|
| `strlen(s)` | `strlen(char *s)` | `size_t` length | ✓ |
| `strcpy(d,s)` | `strcpy(char *d, const char *s)` | `d` | ⚠ Check size |
| `strncpy(d,s,n)` | `strncpy(char *d, const char *s, size_t n)` | `d` | ✓ |
| `strcat(d,s)` | `strcat(char *d, const char *s)` | `d` | ⚠ Check size |
| `strcmp(a,b)` | `strcmp(const char *a, const char *b)` | 0/<0/>0 | ✓ |

### Pointer Types Quick Reference

| Type | Declaration | Safe to Dereference? | Fix |
|------|------------|---------------------|-----|
| Wild | `int *p;` (uninitialized) | ❌ Crash/UB | `int *p = NULL;` or assign address |
| Null | `int *p = NULL;` | ❌ Segfault | Check `if (p != NULL)` |
| Dangling | After `free(p)` | ❌ UB | `p = NULL;` after free |
| Void | `void *vp;` | ❌ Must cast first | `*(int*)vp` |

---
*End of Question Bank — Units IV & V | Total: 26 Questions across 3 difficulty levels*
