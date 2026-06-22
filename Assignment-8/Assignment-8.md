# C Programming - Assignment 08

## Q.1 Write functions to calculate addition, subtraction and multiplication of two 3 × 3 matrices.

### Problem Statement

Write separate functions to perform addition, subtraction, and multiplication of two 3 × 3 matrices and display the resultant matrix.

### Concepts Used

* Functions
* Two-Dimensional Arrays (2D Arrays)
* Nested Loops (`for`)
* Matrix Addition
* Matrix Subtraction
* Matrix Multiplication
* Arithmetic Operators

### Step-by-Step Approach

#### Matrix Addition

1. Declare two 3 × 3 matrices A and B.
2. Traverse both matrices using nested loops.
3. Add corresponding elements of A and B.
4. Store the result in matrix R.
5. Display the resultant matrix.

#### Matrix Subtraction

1. Traverse both matrices using nested loops.
2. Subtract corresponding elements of B from A.
3. Store the result in matrix R.
4. Display the resultant matrix.

#### Matrix Multiplication

1. Traverse rows of matrix A.
2. Traverse columns of matrix B.
3. Multiply corresponding elements.
4. Add the products to obtain a single element of the result matrix.
5. Store the value in matrix R.
6. Repeat for all rows and columns.
7. Display the resultant matrix.

### Test Cases

#### Test Case 1 - Matrix Addition

**Input**

Matrix A

| 1 | 2 | 3 |
| - | - | - |
| 4 | 5 | 6 |
| 7 | 8 | 9 |

Matrix B

| 9 | 8 | 7 |
| - | - | - |
| 6 | 5 | 4 |
| 3 | 2 | 1 |

**Output**

Result Matrix

| 10 | 10 | 10 |
| -- | -- | -- |
| 10 | 10 | 10 |
| 10 | 10 | 10 |

---

#### Test Case 2 - Matrix Subtraction

**Input**

Matrix A

| 9 | 8 | 7 |
| - | - | - |
| 6 | 5 | 4 |
| 3 | 2 | 1 |

Matrix B

| 1 | 2 | 3 |
| - | - | - |
| 4 | 5 | 6 |
| 7 | 8 | 9 |

**Output**

Result Matrix

| 8  | 6  | 4  |
| -- | -- | -- |
| 2  | 0  | -2 |
| -4 | -6 | -8 |

---

#### Test Case 3 - Matrix Multiplication

**Input**

Matrix A

| 1 | 2 | 3 |
| - | - | - |
| 4 | 5 | 6 |
| 7 | 8 | 9 |

Matrix B

| 9 | 8 | 7 |
| - | - | - |
| 6 | 5 | 4 |
| 3 | 2 | 1 |

**Output**

Result Matrix

| 30  | 24  | 18 |
| --- | --- | -- |
| 84  | 69  | 54 |
| 138 | 114 | 90 |



## Q.2 Dynamic Memory Allocation for Marks of 5 Students

### Problem Statement

Write a program to allocate memory for a 1D array at runtime to store marks (float) of 5 students. Accept marks from the user and print them on the console.

### Concepts Used

* Dynamic Memory Allocation
* `malloc()`
* `free()`
* Pointers
* Arrays
* Looping (`for`)
* User Input / Output

### Step-by-Step Approach

1. Declare a pointer of type `float`.
2. Allocate memory for 5 float values using `malloc()`.
3. Check whether memory allocation is successful.
4. Accept marks of 5 students.
5. Store marks in dynamically allocated memory.
6. Display all marks.
7. Release allocated memory using `free()`.

### Test Cases

| Test Case | Input Marks              | Output            |
| --------- | ------------------------ | ----------------- |
| 1         | 75.5 80.0 85.5 90.0 95.5 | Display all marks |
| 2         | 60.0 65.0 70.0 75.0 80.0 | Display all marks |
| 3         | 88.5 89.0 90.5 91.0 92.5 | Display all marks |
