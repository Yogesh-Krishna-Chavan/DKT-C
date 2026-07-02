# C Programming - Assignment

## Q.1 Implement Priority Queue Using Array (Min Priority Queue)

### Problem Statement

Write a program to implement a **Min Priority Queue** using an array.

In a **Min Priority Queue**, the element having the **lowest priority value** is served (deleted) first.

The program should support the following operations:

- Insert
- Delete
- Peek
- Display

---

## Concepts Used

- Priority Queue
- Arrays
- Structures
- Functions
- Looping (`for`)
- Conditional Statements (`if`)
- Menu-Driven Programming

---

## Step-by-Step Approach

### Insert

1. Check whether the queue is full.
2. Accept the data and its priority.
3. Insert the element at the rear of the queue.
4. Increment the rear pointer.

### Delete

1. Check whether the queue is empty.
2. Find the element having the **minimum priority value**.
3. Display the deleted element.
4. Shift the remaining elements to fill the gap.
5. Decrement the rear pointer.

### Peek

1. Check whether the queue is empty.
2. Find the element having the minimum priority.
3. Display the element without deleting it.

### Display

1. Check whether the queue is empty.
2. Traverse the queue from front to rear.
3. Display the data along with its priority.

---

## Test Cases

### Test Case 1 – Insert

**Input**

```text
Insert (10, Priority = 3)
Insert (20, Priority = 1)
Insert (30, Priority = 5)
Insert (40, Priority = 2)
```

**Output**

```text
Data    Priority
10      3
20      1
30      5
40      2
```

---

### Test Case 2 – Delete

**Before Delete**

```text
Data    Priority
10      3
20      1
30      5
40      2
```

**Output**

```text
Deleted Element = 20
```

**After Delete**

```text
Data    Priority
10      3
30      5
40      2
```

---

### Test Case 3 – Peek

**Input**

```text
Current Queue

10  Priority = 3
30  Priority = 5
40  Priority = 2
```

**Output**

```text
Front Element = 40
Priority = 2
```

---

### Test Case 4 – Queue Underflow

**Input**

```text
Delete from an Empty Queue
```

**Output**

```text
Queue Underflow
```

---

### Test Case 5 – Queue Overflow

**Input**

```text
Insert elements until the queue becomes full.
Insert one more element.
```

**Output**

```text
Queue Overflow
```

---
