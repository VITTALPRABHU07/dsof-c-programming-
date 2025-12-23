Introduction

Selection Sort is a simple comparison-based sorting algorithm used to arrange elements of an array in ascending or descending order. It works by repeatedly selecting the smallest element from the unsorted part of the array and placing it at the correct position.

Working Principle

The array is divided into two parts:

Sorted part (left side)

Unsorted part (right side)

In each iteration, the smallest element from the unsorted part is selected and swapped with the first element of the unsorted section. This process continues until the entire array is sorted.

Algorithm Description

Start from the first element of the array.

Assume the first element is the minimum.

Compare it with the remaining elements.

Find the smallest element in the unsorted part.

Swap it with the first unsorted element.

Move the boundary of the sorted part one step forward.

Repeat until the array is completely sorted.

Example

Input:
64 25 12 22 11

Output:
11 12 22 25 64

Time Complexity

Best Case: O(n²)

Average Case: O(n²)

Worst Case: O(n²)

Space Complexity

O(1) (In-place sorting, no extra memory required)

Characteristics

Simple and easy to understand

In-place sorting algorithm

Not stable (relative order may change)

Less number of swaps compared to Bubble Sort

Advantages

Easy to implement

Performs well for small datasets

Requires minimal memory

Disadvantages

Inefficient for large datasets

Always takes O(n²) time regardless of input

Applications

Educational purposes

Small data collections

Understanding basic sorting algorithms

Conclusion

Selection Sort is a straightforward sorting technique suitable for learning purposes. Although it is not efficient for large datasets, it helps in understanding the core concepts of comparison-based sorting.
