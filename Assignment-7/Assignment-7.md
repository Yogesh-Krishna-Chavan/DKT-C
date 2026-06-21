# C Programming - Assignment

## Q.1 Count Occurrences of a Character (Case-Insensitive)

### Problem Statement

Write a function to return the number of occurrences of a given character in a string irrespective of case.

### Concepts Used

* Functions
* Strings
* Character Arrays
* Looping (`for`)
* Conditional Statements (`if`)
* Character Functions (`tolower()`)
* Case-Insensitive Comparison

### Step-by-Step Approach

1. Accept a string from the user.
2. Accept a character to be searched.
3. Convert the search character to lowercase.
4. Traverse the string using a loop.
5. Convert each character of the string to lowercase.
6. Compare it with the search character.
7. If matched, increment the count.
8. Return and display the final count.

### Test Cases

| Test Case | Input String | Character | Output |
| --------- | ------------ | --------- | ------ |
| 1         | ABA          | A         | 2      |
| 2         | SGGSG        | G         | 3      |
| 3         | xcvDbmMbDvcx | M         | 2      |

---

## Q.2 First Non-Repeating Character

### Problem Statement

Write a program to find the first non-repeating character in a given string.

### Concepts Used

* Strings
* Nested Loops
* Character Comparison
* Conditional Statements (`if`)
* Frequency Counting

### Step-by-Step Approach

1. Accept a string from the user.
2. Traverse each character of the string.
3. Count the occurrences of the current character in the entire string.
4. If the count is 1, that character is the first non-repeating character.
5. Display the character and stop the search.
6. If no non-repeating character exists, display `-1`.

### Test Cases

| Test Case | Input   | Output |
| --------- | ------- | ------ |
| 1         | swiss   | w      |
| 2         | kettle  | k      |
| 3         | aabbccd | d      |
| 4         | x       | x      |
| 5         | aabbcc  | -1     |

---

## Q.3 Command Line Calculator

### Problem Statement

Write a program to accept two operands and an operator as command line arguments. Perform the operation and print the result. Also perform error checking if arguments are not passed correctly.

### Concepts Used

* Command Line Arguments
* `argc` and `argv`
* Switch Statement
* Arithmetic Operators
* Conditional Statements (`if`)
* Error Handling
* `atoi()` Function

### Step-by-Step Approach

1. Accept operands and operator through command line arguments.
2. Check whether the correct number of arguments is passed.
3. If arguments are missing, display an error message.
4. Convert operands from string to integer using `atoi()`.
5. Use a `switch` statement to identify the operator.
6. Perform the corresponding operation.
7. Display the result.
8. Handle invalid operators appropriately.

### Test Cases

| Test Case | Command           | Output                       |
| --------- | ----------------- | ---------------------------- |
| 1         | `./a.out 10 + 20` | Result = 30                  |
| 2         | `./a.out 20 * 4`  | Result = 80                  |
| 3         | `./a.out 10 20`   | Pass cmd line args correctly |
| 4         | `./a.out 30 - 10` | Result = 20                  |
| 5         | `./a.out 40 / 5`  | Result = 8                   |

---
