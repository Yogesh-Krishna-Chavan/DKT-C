# C Programming - Assignment 16

## Q.2 Implement Array List of Integers

### Problem Statement

Write a program to implement an **Array List of Integers** using an array and perform the following operations:

- Insert at Beginning
- Insert at End
- Insert at a Given Position
- Delete from Beginning
- Delete from End
- Delete from a Given Position
- Traverse in Forward Direction
- Traverse in Backward Direction
- Search an Element
- Reverse the Array
- Sort the Array (Using any one sorting algorithm)

---

## Concepts Used

- Arrays
- Functions
- Looping (`for`)
- Conditional Statements (`if`)
- Linear Search
- Bubble Sort
- Swapping Technique
- Menu-Driven Programming

---

## Step-by-Step Approach

### Insert at Beginning

1. Accept the element from the user.
2. Shift all elements one position to the right.
3. Insert the element at index `0`.
4. Increment the array size.

### Insert at End

1. Accept the element from the user.
2. Insert the element at the last position.
3. Increment the array size.

### Insert at Position

1. Accept the position and element.
2. Validate the position.
3. Shift elements one position to the right from the given position.
4. Insert the element.
5. Increment the array size.

### Delete from Beginning

1. Check whether the array is empty.
2. Shift all elements one position to the left.
3. Decrement the array size.

### Delete from End

1. Check whether the array is empty.
2. Remove the last element.
3. Decrement the array size.

### Delete from Position

1. Accept the position.
2. Validate the position.
3. Shift all elements after the given position one place to the left.
4. Decrement the array size.

### Traverse (Forward)

1. Check whether the array is empty.
2. Traverse from the first element to the last.
3. Display all elements.

### Traverse (Backward)

1. Check whether the array is empty.
2. Traverse from the last element to the first.
3. Display all elements.

### Search

1. Accept the element to search.
2. Traverse the array.
3. Compare each element with the search key.
4. Display its position if found.
5. Otherwise display **"Element Not Found"**.

### Reverse

1. Initialize two indices (`start` and `end`).
2. Swap the first and last elements.
3. Move both indices toward the center.
4. Continue until the array is reversed.

### Sort (Bubble Sort)

1. Compare adjacent elements.
2. Swap them if they are in the wrong order.
3. Repeat the process until the array is sorted.
4. Display the sorted array.

---

## Test Cases

### Test Case 1 – Insert Operations

**Input**

```text
Insert Begin : 20
Insert End   : 40
Insert Position(2) : 30
```

**Output**

```text
20 30 40
```

---

### Test Case 2 – Delete Operations

**Input**

```text
Array : 10 20 30 40 50

Delete Begin
Delete End
Delete Position = 2
```

**Output**

```text
20 40
```

---

### Test Case 3 – Forward Traversal

**Input**

```text
10 20 30 40 50
```

**Output**

```text
10 20 30 40 50
```

---

### Test Case 4 – Backward Traversal

**Input**

```text
10 20 30 40 50
```

**Output**

```text
50 40 30 20 10
```

---

### Test Case 5 – Search

**Input**

```text
Array : 10 20 30 40 50

Search : 30
```

**Output**

```text
Element Found at Position 3
```

---

### Test Case 6 – Reverse

**Input**

```text
10 20 30 40 50
```

**Output**

```text
50 40 30 20 10
```

---

### Test Case 7 – Sort

**Input**

```text
40 10 50 20 30
```

**Output**

```text
10 20 30 40 50
```

---
