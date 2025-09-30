

# Error Handling in CPP  

**Name**: Pal Jain  
**Class**: ENTC A3  
**PRN**: 24070123067  

---

## Title: Error Handling in CPP  

---

## Aim

To implement and demonstrate **Exception Handling in C++** by writing programs that handle:

* Age validation for voting eligibility.
* Division of two numbers, avoiding division by zero.

---

## Objectives

* To understand the concept of exceptions and their handling in C++.
* To apply `try`, `throw`, and `catch` blocks effectively.
* To avoid abnormal termination of a program through proper error handling.
* To validate user inputs and manage runtime errors efficiently.
* To compare conventional error handling with exception handling in C++.

---

## Error Handling in C++

Error handling is the process of detecting and managing runtime errors in a program. Proper handling ensures that the program doesn’t crash but instead recovers or provides a meaningful response to the user. C++ supports this using a structured **exception handling mechanism**.

---

### 1. What is an Exception?

* An exception is an unexpected event that occurs while a program is running.
* It interrupts the normal flow of execution.

**Examples include:**

* Division by zero
* File not found
* Invalid input
* Memory allocation errors

👉 In C++, exceptions are objects that are thrown when an error occurs.

---

### 2. Keywords in Exception Handling

| Keyword   | Purpose                                           |
| --------- | ------------------------------------------------- |
| **try**   | Contains the code that may cause an exception.    |
| **throw** | Used to signal an exception when an error arises. |
| **catch** | Catches and processes the thrown exception.       |

---

### Flow of Execution

1. The program starts executing inside the `try` block.
2. If an error occurs, control is transferred to the corresponding `catch` block.
3. If no error occurs, the `catch` block is skipped.

---

### Comparison: Traditional vs Exception Handling

| Feature                 | Traditional Handling  | Exception Handling (C++)   |
| ----------------------- | --------------------- | -------------------------- |
| Method                  | Return codes / Flags  | try, throw, catch          |
| Error Detection         | Manual checking       | Automatic jump to catch    |
| Code Readability        | Complex and cluttered | Clean and structured       |
| Abnormal Termination    | Possible              | Prevented                  |
| Multiple Error Handling | Difficult             | Easy with multiple catches |

---

### 3. General Syntax

```cpp
try {
    // Code that may cause an error
    if (error_condition)
        throw exception_object;
}
catch (exception_type e) {
    cout << "Error: " << e << endl;
}
```

---

## Program Summary

* Two programs were implemented to illustrate exception handling.
* Used **try-throw-catch** blocks to detect and manage errors.
* Age validation ensured voting eligibility.
* Division program prevented the divide-by-zero error.
* Both programs executed smoothly without abnormal termination.

---

## Concepts Applied

* **OOP Concepts**: Exception handling in C++.
* **try-throw-catch**: Detecting and resolving errors.
* **Control Structures**: Conditional checks for exceptions.
* **I/O Operations**: User input via `cin`, output via `cout`.

---

## Program 1: Age Validation (Algorithm)

1. Start.
2. Take age input from user.
3. Inside `try` block:

   * If age < 18, throw exception.
   * Else display eligibility message.
4. Inside `catch` block:

   * Show error message: *"Not eligible for voting"*.
5. End.

---

## Program 2: Division by Zero (Algorithm)

1. Start.
2. Take two numbers `n1` and `n2`.
3. Inside `try` block:

   * If `n2 == 0`, throw exception.
   * Else calculate `ans = n1 / n2` and display it.
4. Inside `catch` block:

   * Show error message: *"Division by 0"*.
5. End.

---

## Conclusion

This experiment successfully demonstrated the use of **exception handling in C++**.

**Observations:**

* Exceptions can be caught dynamically during runtime using `try`, `throw`, and `catch`.
* The age validation program verified eligibility for voting.
* The division program handled the common issue of divide-by-zero.
* Exception handling made programs more robust, reliable, and user-friendly.

**Real-world applications include:**

* Input validation systems.
* File handling operations.
* Network communication.
* Database transactions.
