# Array Notes: 1D and 2D Arrays

---

## 1. What is an Array?

An **array** is a collection of elements stored at **contiguous memory locations**, all of the same data type.  
Arrays allow **random access** using an index.

---

## 2. 1D Array (One-Dimensional Array)

### Definition
A **1D array** is a linear sequence of elements stored in a single row.

```
Index:  [0]  [1]  [2]  [3]  [4]
Value:   10   20   30   40   50
```

### Declaration & Initialization

```c
// C / C++
int arr[5];                       // Declaration
int arr[5] = {10, 20, 30, 40, 50}; // Declaration + Initialization

// Java
int[] arr = new int[5];
int[] arr = {10, 20, 30, 40, 50};

// Python (using list)
arr = [10, 20, 30, 40, 50]
```

### Accessing Elements

```c
arr[0]  // → 10
arr[3]  // → 40
```

- Index starts at **0**
- Last element is at index **n - 1**

### Traversal

```c
for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
}
// Output: 10 20 30 40 50
```

### Memory Representation

```
Base Address: 1000
arr[0] → 1000
arr[1] → 1004  (int = 4 bytes)
arr[2] → 1008
arr[3] → 1012
arr[4] → 1016
```

**Formula:** `Address of arr[i] = Base Address + i × size_of_datatype`

### Properties

| Property        | Detail                          |
|-----------------|---------------------------------|
| Storage         | Contiguous memory               |
| Access          | O(1) — Random access            |
| Insertion (mid) | O(n) — Shifting required        |
| Deletion (mid)  | O(n) — Shifting required        |
| Search (linear) | O(n)                            |
| Search (binary) | O(log n) — if sorted            |

---

## 3. 2D Array (Two-Dimensional Array)

### Definition
A **2D array** is an array of arrays — organized in **rows and columns**, like a matrix or table.

```
         Col 0   Col 1   Col 2
Row 0  [  1       2       3  ]
Row 1  [  4       5       6  ]
Row 2  [  7       8       9  ]
```

### Declaration & Initialization

```c
// C / C++
int matrix[3][3];                                   // Declaration
int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};   // Declaration + Init

// Java
int[][] matrix = new int[3][3];
int[][] matrix = {{1,2,3}, {4,5,6}, {7,8,9}};

// Python (list of lists)
matrix = [[1,2,3], [4,5,6], [7,8,9]]
```

### Accessing Elements

```c
matrix[row][col]
matrix[0][0]  // → 1  (first element)
matrix[1][2]  // → 6
matrix[2][1]  // → 8
```

### Traversal (Row-Major Order)

```c
for (int i = 0; i < 3; i++) {           // rows
    for (int j = 0; j < 3; j++) {       // columns
        printf("%d ", matrix[i][j]);
    }
    printf("\n");
}
```

### Memory Representation

2D arrays are stored in **Row-Major Order** (in C/C++) — row by row in memory.

```
matrix[3][3] stored as:
[1][2][3][4][5][6][7][8][9]
 ↑   ↑   ↑
Row0 Row1 Row2
```

**Formula (Row-Major):**
```
Address of matrix[i][j] = Base + (i × num_cols + j) × size_of_datatype
```

**Formula (Column-Major — used in Fortran/MATLAB):**
```
Address of matrix[i][j] = Base + (j × num_rows + i) × size_of_datatype
```

### Properties

| Property           | Detail                                        |
|--------------------|-----------------------------------------------|
| Dimensions         | Rows × Columns                                |
| Access             | O(1) — using [row][col]                       |
| Storage            | Contiguous (row-major in C)                   |
| Traversal          | O(m × n) for m rows, n cols                  |
| Space Complexity   | O(m × n)                                      |

---

## 4. Comparison: 1D vs 2D Array

| Feature              | 1D Array              | 2D Array                     |
|----------------------|-----------------------|------------------------------|
| Structure            | Single row/list       | Rows and columns (matrix)    |
| Indexing             | `arr[i]`              | `arr[i][j]`                  |
| Use Case             | Lists, stacks, queues | Matrices, grids, tables      |
| Memory               | Linear                | Row-major / Column-major     |
| Size                 | n elements            | m × n elements               |
| Traversal Loops      | 1 loop                | 2 nested loops               |

---

## 5. Common Operations on 2D Arrays

### Sum of All Elements

```c
int sum = 0;
for (int i = 0; i < rows; i++)
    for (int j = 0; j < cols; j++)
        sum += matrix[i][j];
```

### Transpose of a Matrix

```
Original:         Transpose:
1  2  3           1  4  7
4  5  6    →      2  5  8
7  8  9           3  6  9
```

```c
for (int i = 0; i < n; i++)
    for (int j = i+1; j < n; j++)
        swap(matrix[i][j], matrix[j][i]);
```

### Matrix Multiplication

For `A[m×k]` × `B[k×n]` = `C[m×n]`:

```c
for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
        for (int k = 0; k < p; k++)
            C[i][j] += A[i][k] * B[k][j];
```

**Time Complexity:** O(m × k × n)

---

## 6. Special 2D Structures

### Square Matrix (m = n)
- **Diagonal Matrix** — non-zero only on main diagonal
- **Identity Matrix** — diagonal is 1, rest is 0
- **Symmetric Matrix** — `A[i][j] == A[j][i]`
- **Upper Triangular** — non-zero above (and on) main diagonal
- **Lower Triangular** — non-zero below (and on) main diagonal

### Sparse Matrix
When most elements are **0**, storing the full matrix wastes memory.  
Use **coordinate list** or **CSR (Compressed Sparse Row)** format instead.

---

## 7. Multi-Dimensional Arrays (Beyond 2D)

Arrays can be extended to **3D, 4D, ..., nD**:

```c
int arr3D[2][3][4];   // 2 × 3 × 4 = 24 elements
arr3D[i][j][k]        // Access element
```

Used in: image data (height × width × channels), scientific computing, video frames.

---

## 8. Key Points to Remember

- Array indexing starts at **0** in most languages (C, C++, Java, Python).
- Arrays have **fixed size** (static); use dynamic structures (ArrayList, vector) for resizing.
- 2D arrays are essentially **1D arrays of 1D arrays** in memory.
- **Row-major order** (C/C++): traverse inner loop over columns for cache efficiency.
- Out-of-bounds access causes **undefined behavior** (C/C++) or exceptions (Java, Python).
- Time complexity for access is always **O(1)** for both 1D and 2D.

---

*Notes cover: declaration, initialization, memory layout, traversal, operations, and complexity.*