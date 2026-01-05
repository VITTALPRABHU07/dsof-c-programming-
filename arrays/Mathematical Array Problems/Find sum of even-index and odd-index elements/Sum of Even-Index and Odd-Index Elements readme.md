Sum of Even-Index and Odd-Index Elements
 Overview

This program calculates the sum of elements at even indices and sum of elements at odd indices in an integer array.
The implementation follows a simple, efficient, and industry-standard approach using a single traversal.

Note: Array indexing starts from 0, as per the C language standard.

 Objective

Find the sum of elements present at:

Even indices

Odd indices

Display both sums clearly

 Approach

Traverse the array once

Check the index of each element

Add the element to:

Even-index sum if index is even

Odd-index sum if index is odd

 Algorithm Steps

Initialize evenSum and oddSum to zero

Iterate through the array from index 0 to n-1

If index is even, add the element to evenSum

If index is odd, add the element to oddSum

Print both sums

 Complexity Analysis

Time Complexity: O(n)

Space Complexity: O(1)

Traversal: Single pass

 Features

Simple and readable logic

Uses constant extra memory

Modular function design

Clear separation of even and odd index processing

Industry-accepted coding style

 Limitations

Works only with integer arrays

Does not validate empty array input explicitly

 Example
Input
Array = {10, 20, 30, 40, 50, 60}

Output
Sum of Even Index Elements : 90
Sum of Odd Index Elements  : 120

 Coding Standards Followed

Use of const for input array

Meaningful variable names

Proper indentation and comments

Modular function implementation

 Conclusion

This program efficiently computes the sum of even-index and odd-index elements using a single traversal, making it suitable for academic, interview, and real-world validation tasks.
