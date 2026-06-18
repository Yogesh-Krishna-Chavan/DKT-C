# C Programming - Assignment-06

## Q.1 Write command line program to check if a string is palindrome or not.

### Concepts Used

- Command Line Arguments
- Strings
- String Length (`strlen`)
- Looping (`for`)
- Conditional Statements (`if`)
- Character Comparison

### Step-by-Step Approach

1. Accept string using command line argument.
2. Find length of string using `strlen()`.
3. Compare characters from both ends.
4. If all characters match, string is palindrome.
5. Otherwise, string is not palindrome.
6. Display the result.

### Test Cases

| Test Case | Input        | Output                           |
| --------- | ------------ | -------------------------------- |
| 1         | ABA          | ABA is palindrome                |
| 2         | SGGS         | SGGS is palindrome               |
| 3         | xcvDbmMbDvcx | xcvDbmMbDvcx is not a palindrome |
| 4         | ASMpMSA      | ASMpMSA is a palindrome          |
| 5         | KMCVDSDVCNK  | KMCVDSDVCNK is not a palindrome  |

---

## Q.2 Write a command line program to convert all vowels in a given string to uppercase.

### Concepts Used

- Command Line Arguments
- Strings
- Looping (`for`)
- Conditional Statements (`if`)
- Character Manipulation
- `toupper()` Function

### Step-by-Step Approach

1. Accept string using command line argument.
2. Traverse each character of the string.
3. Check whether the character is a vowel.
4. Convert vowels to uppercase.
5. Display the modified string.

### Test Cases

| Test Case | Input       | Output      |
| --------- | ----------- | ----------- |
| 1         | hello       | hEllO       |
| 2         | computer    | cOmpUtEr    |
| 3         | programming | prOgrAmmIng |
| 4         | structure   | strUctUrE   |

---

## Q.3 Write a command line program to check if a given string is present in another string.

### Concepts Used

- Command Line Arguments
- Strings
- String Functions (`strstr`)
- Conditional Statements (`if`)

### Step-by-Step Approach

1. Accept two strings using command line arguments.
2. Search first string in second string.
3. Use `strstr()` function.
4. If found, print "Yes".
5. Otherwise, print "No".

### Test Cases

| Test Case | Input                                   | Output |
| --------- | --------------------------------------- | ------ |
| 1         | ing Programming                         | Yes    |
| 2         | pac compact                             | Yes    |
| 3         | Engineer TextileAndEngineeringInstitute | Yes    |
| 4         | Istitute TextileAndEngineeringInstitute | No     |

---
