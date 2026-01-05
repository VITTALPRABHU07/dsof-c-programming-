Kth Smallest and Kth Largest Element

Overview

This program finds the kth smallest and kth largest elements from a given integer array.
It follows a simple and industry-accepted approach using sorting, making the logic easy to understand and maintain.

 Objective

Sort the given array in ascending order

Identify:

kth smallest element

kth largest element

Validate the value of k before processing

Approach

Use a simple sorting algorithm to arrange elements in ascending order

Access:

Index k-1 for the kth smallest element

Index n-k for the kth largest element

Display the results

Algorithm Steps

Define the input array and value of k

Check whether k is valid (1 ≤ k ≤ n)

Sort the array

Print the kth smallest and kth largest elements

 Complexity Analysis

Time Complexity: O(n²) (due to simple sorting)

Space Complexity: O(1)

Traversal: In-place sorting

 Features

Simple and readable implementation

No external libraries used

Proper input validation

Easy to debug and maintain

Suitable for beginners and academic use

 Limitations

Not optimal for very large datasets

Sorting-based approach is slower compared to advanced algorithms

 Example

Input:

Array = {12, 5, 7, 3, 19, 10}
k = 2


Output:

Kth Smallest Element : 5
Kth Largest Element  : 12

Coding Standards Followed

Modular function design

Meaningful variable names

Clear indentation and formatting

Industry-style comments

 Conclusion

This program provides a clean and simple solution to find the kth smallest and kth largest elements.
It is ideal for learning, exams, and basic interview preparation.
