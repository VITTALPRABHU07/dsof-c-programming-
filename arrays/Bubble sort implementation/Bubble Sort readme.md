Bubble Sort 
Introduction

Bubble Sort is a basic and easy-to-understand sorting algorithm used to arrange elements of an array in ascending or descending order. It works by repeatedly comparing adjacent elements and swapping them if they are in the wrong order. This process continues until the array becomes completely sorted.

Working Principle

The algorithm compares two neighboring elements at a time. If the first element is greater than the second, they are swapped. After one complete pass through the array, the largest element moves to the last position. This is why the algorithm is called Bubble Sort, as larger elements “bubble up” to the end of the list.

With each pass, the number of comparisons reduces because the last elements are already sorted.

Algorithm Description

Start from the first element of the array.

Compare the current element with the next element.

Swap the elements if they are in the wrong order.

Move to the next pair of elements.

Repeat the above steps for all elements.

Continue the process until no more swaps are needed.

Example

Input:
5 3 8 4 2

Output:
2 3 4 5 8

After multiple passes, the elements are arranged in ascending order.

Time Complexity

Best Case: O(n) (when the array is already sorted)

Average Case: O(n²)

Worst Case: O(n²)

Space Complexity

O(1) (Sorting is done in-place without using extra memory)

Features

Simple and easy to implement

Stable sorting algorithm

Suitable for small datasets

Not efficient for large datasets

Applications

Educational purposes

Learning basic sorting concepts

Sorting small lists

Conclusion

Bubble Sort is one of the simplest sorting algorithms. Although it is not efficient for large data sets, it is widely used for learning and understanding the fundamentals of sorting techniques.
