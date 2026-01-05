Check if an Array is Sorted
 Overview

This program checks whether a given integer array is sorted in ascending order.
It follows a simple, efficient, and industry-standard approach by comparing adjacent elements in a single traversal.

 Objective

Verify whether the array elements are in ascending order

Return a clear result indicating:

Sorted

Not Sorted

 Approach

Traverse the array once

Compare each element with its next element

If any element is greater than the next one, the array is not sorted

 Algorithm Steps

Read the array elements

If the array has zero or one element, consider it sorted

Iterate from the first element to the second last element

If arr[i] > arr[i + 1], declare the array as not sorted

If no violations are found, declare the array as sorted

 Complexity Analysis

Time Complexity: O(n)

Space Complexity: O(1)

Traversal: Single pass

Features

Simple and readable logic

Early termination for better performance

No extra memory used

Suitable for large arrays

Industry-accepted coding style

Limitations

Checks only ascending order

Does not identify partially sorted arrays

 Example
Input
Array = {3, 5, 7, 10, 12}

Output
Array is sorted in ascending order.

Input
Array = {3, 10, 7, 12}

Output
Array is NOT sorted.

Coding Standards Followed

Modular function design

Use of const for input safety

Meaningful variable names

Proper indentation and comments

 Conclusion

This program efficiently determines whether an array is sorted using a single traversal.
It is ideal for exams, interviews, and real-world validation tasks.
