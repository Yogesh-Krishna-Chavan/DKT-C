# C Programming - Assignment 08

## Q.1 Write Functions to Accept and Print One Student Record

### Problem Statement

Write a program to declare a structure to store student information. The structure should contain Roll Number, Name, and Marks. Write separate functions to accept and print one student record.

### Concepts Used

* Structure
* Functions
* Pointers to Structure
* User Input / Output
* Structure Members

### Step-by-Step Approach

1. Define a structure named `Student`.
2. Add members: Roll Number, Name, and Marks.
3. Create a function to accept student details.
4. Create another function to display student details.
5. Declare a structure variable in `main()`.
6. Call the accept function to store data.
7. Call the print function to display the record.

### Test Cases

| Test Case | Roll No | Name  | Marks |
| --------- | ------- | ----- | ----- |
| 1         | 101     | Amit  | 85.50 |
| 2         | 102     | Neha  | 90.00 |
| 3         | 103     | Raj   | 78.50 |
| 4         | 104     | Priya | 88.00 |
| 5         | 105     | Kunal | 92.50 |

### Expected Output

```text
Roll No : 101
Name    : Amit
Marks   : 85.50
```

---

## Q.2 Accept and Print Array of Student Structures

### Problem Statement

Write functions to accept and print an array of student structures.

### Concepts Used

* Structure
* Array of Structures
* Functions
* Looping (`for`)
* User Input / Output
* Structure Members

### Step-by-Step Approach

1. Define a structure named `Student`.
2. Create an array of student structures.
3. Write a function to accept details of all students.
4. Use a loop to store multiple student records.
5. Write another function to display all student records.
6. Use a loop to print all student records.
7. Call both functions from `main()`.

### Test Cases

#### Test Case 1

| Roll No | Name | Marks |
| ------- | ---- | ----- |
| 101     | Amit | 85.50 |
| 102     | Neha | 90.00 |
| 103     | Raj  | 78.50 |

#### Expected Output

```text
Roll No : 101
Name    : Amit
Marks   : 85.50

Roll No : 102
Name    : Neha
Marks   : 90.00

Roll No : 103
Name    : Raj
Marks   : 78.50
```

#### Test Case 2

| Roll No | Name  | Marks |
| ------- | ----- | ----- |
| 201     | Pooja | 82.00 |
| 202     | Rohan | 76.50 |
| 203     | Sneha | 91.00 |

#### Expected Output

```text
Roll No : 201
Name    : Pooja
Marks   : 82.00

Roll No : 202
Name    : Rohan
Marks   : 76.50

Roll No : 203
Name    : Sneha
Marks   : 91.00
```

---