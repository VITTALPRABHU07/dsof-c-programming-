Merge Two Arrays into a Third Array
 Overview

This program merges two integer arrays into a third array by copying the elements of both arrays sequentially.
The implementation follows a simple, clean, and industry-standard approach suitable for learning and basic applications.

 Objective

Combine two arrays into a single array

Preserve the order of elements from both input arrays

Store the result in a third array

 Approach

Copy all elements from the first array into the third array

Append all elements from the second array to the third array

No sorting or modification of original data is performed

 Algorithm Steps

Define two input arrays

Calculate their sizes

Create a third array with size equal to the sum of both arrays

Copy elements of the first array into the third array

Copy elements of the second array into the remaining positions

Display the merged array

 Complexity Analysis

Time Complexity: O(n1 + n2)

Space Complexity: O(n1 + n2)

Execution: Single pass for each array

 Features

Simple and readable logic

No dynamic memory allocation

Preserves input array order

Modular function design

Industry-accepted coding style

 Limitations

Does not sort the merged array

Requires additional memory for the third array

 Example
Input
Array 1 = {1, 3, 5}
Array 2 = {2, 4, 6}

Output
Merged Array: 1 3 5 2 4 6

 Coding Standards Followed

Modular programming

Use of const for input arrays

Clear variable naming

Proper indentation and comments

 Conclusion

This program efficiently merges two arrays into a third array using a straightforward copy-based approach.
It is ideal for exams, interviews, and beginner-level C programming tasks.
