# C Programming - Assignment-5

## Q.1 Search an Element in an Array Using Pointers
### Write a program to accept n integers in an array and search for a given element using pointers.
### Concepts Used

* Arrays
* Pointers
* Pointer Arithmetic
* Looping (`for`)
* Conditional Statements (`if`)
* Linear Search

### Step-by-Step Approach

1. Accept the size of the array.
2. Accept array elements from the user.
3. Accept the element to be searched.
4. Point a pointer to the first element of the array.
5. Traverse the array using the pointer.
6. Compare each element with the search element.
7. If found, display its position.
8. Otherwise, display "Element Not Found".

### Test Cases

| Test Case | Array Elements      | Search Element | Output                      |
| --------- | ------------------- | -------------- | --------------------------- |
| 1         | 10 20 30 40 50      | 30             | Element Found at Position 3 |
| 2         | 5 15 25 35 45       | 15             | Element Found at Position 2 |
| 3         | 11 22 33 44 55      | 60             | Element Not Found           |
| 4         | 7 14 21 28 35       | 35             | Element Found at Position 5 |
| 5         | 100 200 300 400 500 | 100            | Element Found at Position 1 |

---

## Q.2 Count Even and Odd Numbers Using Pointers
### Write a program to accept elements in an array and count the number of even and odd elements using pointers.
### Concepts Used

* Arrays
* Pointers
* Pointer Arithmetic
* Looping (`for`)
* Conditional Statements (`if`)
* Modulus Operator (`%`)

### Step-by-Step Approach

1. Accept the size of the array.
2. Accept array elements from the user.
3. Initialize counters for even and odd numbers.
4. Point a pointer to the first element of the array.
5. Traverse the array using the pointer.
6. Check whether each element is even or odd.
7. Increment the respective counter.
8. Display the total count of even and odd numbers.

### Test Cases

| Test Case | Array Elements | Output            |
| --------- | -------------- | ----------------- |
| 1         | 10 15 20 25 30 | Even = 3, Odd = 2 |
| 2         | 1 3 5 7 9      | Even = 0, Odd = 5 |
| 3         | 2 4 6 8 10     | Even = 5, Odd = 0 |
| 4         | 11 22 33 44 55 | Even = 2, Odd = 3 |
| 5         | 12 13 14 15 16 | Even = 3, Odd = 2 |

---

## Q.3 Find Sum of Array Elements Using Pointers
### Write a program to accept n integers in an array and find the sum of all elements using pointers.
### Problem Statement

Write a program to accept `n` integers in an array and find the sum of all elements using pointers.

### Concepts Used

* Arrays
* Pointers
* Pointer Arithmetic
* Looping (`for`)
* Arithmetic Operators

### Step-by-Step Approach

1. Accept the size of the array.
2. Accept array elements from the user.
3. Initialize `sum = 0`.
4. Point a pointer to the first element of the array.
5. Traverse the array using the pointer.
6. Add each element to `sum`.
7. Display the final sum.

### Test Cases

| Test Case | Array Elements | Output    |
| --------- | -------------- | --------- |
| 1         | 10 20 30 40 50 | Sum = 150 |
| 2         | 1 2 3 4 5      | Sum = 15  |
| 3         | 5 10 15 20     | Sum = 50  |
| 4         | 100 200 300    | Sum = 600 |
| 5         | 7 14 21 28     | Sum = 70  |

---