Prefix Sum Array
 Overview

The Prefix Sum Array technique is used to preprocess an array so that the sum of any prefix (from index 0 to i) can be computed efficiently.
It is widely used in competitive programming, data processing, and performance-critical systems where multiple range sum queries are required.

 Problem Statement

Given an array of integers, generate a prefix sum array such that each element at index i contains the sum of elements from index 0 to i of the original array.

 Concept

A prefix sum array helps reduce the time complexity of calculating cumulative sums.

Formula:

prefix[0] = arr[0]

prefix[i] = prefix[i-1] + arr[i]

 Example
Input
Array: [2, 4, 6, 8, 10]

Output
Prefix Sum Array: [2, 6, 12, 20, 30]

 Algorithm

Read the number of elements.

Read the array elements.

Initialize the first prefix element with the first array value.

For each index i from 1 to n-1, compute:

prefix[i] = prefix[i-1] + arr[i]


Print the prefix sum array.

 Time and Space Complexity
Metric	Complexity
Time Complexity	O(n)
Space Complexity	O(n)


Applications

Fast range sum queries

Data analytics

Signal processing

Competitive programming

Backend performance optimization


 Key Advantages

Simple to implement

Improves performance significantly

Scalable for large datasets

 Conclusion

The prefix sum array is a fundamental and efficient technique for cumulative computations. It is a must-know concept for software engineers, data analysts, and competitive programmers.
