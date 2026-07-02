# C Programming - Assignment-14 (Moodle Testing)

## Q.1 Display the Nth Term of Fibonacci Series

### Problem Statement

Write a program to accept a number `n` and display the **nth term** of the Fibonacci series.

### Concepts Used

* Variables
* Looping (`for`)
* Arithmetic Operators
* Fibonacci Series

### Step-by-Step Approach

1. Accept the value of `n`.
2. Initialize the first two Fibonacci numbers (`0` and `1`).
3. Use a loop to generate the Fibonacci series.
4. Continue until the nth term is reached.
5. Display the nth Fibonacci term.

### Test Cases

| Test Case | Input | Output |
| --------- | ----- | ------ |
| 1         | 1     | 0      |
| 2         | 2     | 1      |
| 3         | 5     | 3      |
| 4         | 8     | 13     |
| 5         | 10    | 34     |

---

## Q.2 Check Whether a Number is Prime or Not

### Problem Statement

Write a program to accept a number and check whether it is a **Prime Number** or **Not a Prime Number**.

### Concepts Used

* Variables
* Looping (`for`)
* Conditional Statements (`if`)
* Modulus Operator (`%`)

### Step-by-Step Approach

1. Accept a number from the user.
2. Check divisibility from `2` to `n/2`.
3. If the number is divisible by any value, it is not prime.
4. Otherwise, it is a prime number.
5. Display the result.

### Test Cases

| Test Case | Input | Output             |
| --------- | ----- | ------------------ |
| 1         | 7     | Prime Number       |
| 2         | 11    | Prime Number       |
| 3         | 15    | Not a Prime Number |
| 4         | 25    | Not a Prime Number |
| 5         | 29    | Prime Number       |

---

## Q.3 Find Factorial of a Given Number

### Problem Statement

Write a program to accept a number and calculate its factorial.

### Concepts Used

* Variables
* Looping (`for`)
* Arithmetic Operators
* Factorial Logic

### Step-by-Step Approach

1. Accept a number from the user.
2. Initialize `fact = 1`.
3. Multiply `fact` by each number from `1` to `n`.
4. Repeat until all numbers are multiplied.
5. Display the factorial.

### Test Cases

| Test Case | Input | Output  |
| --------- | ----- | ------- |
| 1         | 3     | 6       |
| 2         | 5     | 120     |
| 3         | 6     | 720     |
| 4         | 7     | 5040    |
| 5         | 10    | 3628800 |

---

## Q.4 Create a Four Function Calculator

### Problem Statement

Write a program to create a calculator using four separate functions for:

* Addition (`+`)
* Subtraction (`-`)
* Multiplication (`*`)
* Division (`/`)

### Concepts Used

* Functions
* Switch Statement
* Arithmetic Operators
* User Input / Output

### Step-by-Step Approach

1. Accept two numbers.
2. Accept the operator from the user.
3. Call the corresponding function based on the operator.
4. Perform the selected arithmetic operation.
5. Display the result.

### Test Cases

| Test Case | Input   | Output                 |
| --------- | ------- | ---------------------- |
| 1         | 10 + 20 | 30                     |
| 2         | 20 - 5  | 15                     |
| 3         | 8 * 4   | 32                     |
| 4         | 20 / 4  | 5                      |
| 5         | 25 / 0  | Division by Zero Error |

---

## Q.5 Print the Table of a Given Number Using Loop

### Problem Statement

Write a program to accept a number and print its multiplication table using a loop.

### Concepts Used

* Variables
* Looping (`for`)
* Arithmetic Operators
* User Input / Output

### Step-by-Step Approach

1. Accept a number from the user.
2. Use a loop from `1` to `10`.
3. Multiply the number by the loop variable.
4. Display each multiplication result in table format.

### Test Cases

| Test Case | Input | Output                          |
| --------- | ----- | ------------------------------- |
| 1         | 2     | 2 4 6 8 10 12 14 16 18 20       |
| 2         | 5     | 5 10 15 20 25 30 35 40 45 50    |
| 3         | 7     | 7 14 21 28 35 42 49 56 63 70    |
| 4         | 10    | 10 20 30 40 50 60 70 80 90 100  |
| 5         | 12    | 12 24 36 48 60 72 84 96 108 120 |

---