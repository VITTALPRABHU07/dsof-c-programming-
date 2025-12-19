# Count Positive, Negative, Even, and Odd Numbers in an Array (C Program)

 Overview

This program reads an array of integers and counts:

* Number of **positive** elements
* Number of **negative** elements
* Number of **even** elements
* Number of **odd** elements

It is a commonly asked **array-processing program** in C programming labs, exams, and interviews.

---
Algorithm

1. Read the number of elements `n`.
2. Read `n` integer elements into an array.
3. Initialize counters:

   * `pos = 0`, `neg = 0`, `even = 0`, `odd = 0`
4. Traverse the array:

   * If element > 0 → increment `pos`
   * If element < 0 → increment `neg`
   * If element % 2 == 0 → increment `even`
   * Else → increment `odd`
5. Display all the counts.

---
 Program Logic

* A single loop is sufficient to check all conditions.
* Zero is considered **even**, but neither positive nor negative.

**Time Complexity:** O(n)
**Space Complexity:** O(n)

---

 Input

* Number of elements in the array
* Integer elements (positive, negative, or zero)

Example Input

```
6
-2 5 0 7 -9 4
```

---
 Output

* Count of positive numbers
* Count of negative numbers
* Count of even numbers
* Count of odd numbers

 Example Output

```
Positive numbers = 2
Negative numbers = 2
Even numbers = 3
Odd numbers = 3
```

---
 How to Compile and Run

### Using GCC Compiler

```bash
gcc count_array.c -o count
./count
```

---

 File Structure

```
Count Positive, Negative, Even, and Odd Numbers in an Array.c   -> C source code
README.md       -> Program documentation
```

---

Notes

* Zero is treated as an **even number**.
* Input validation can be added for better robustness.
* The program can be extended to count zeros separately.

---

 Applications

* Data analysis basics
* Understanding conditional statements
* Interview and lab exam preparation

