Insertion Sort
Introduction

Insertion Sort is a simple and efficient sorting algorithm that works the way we sort playing cards in our hand. It builds the final sorted array one element at a time by inserting each element into its correct position.

Working Principle

The array is divided into two parts:

Sorted part (left side)

Unsorted part (right side)

Initially, the first element is considered sorted. Each next element from the unsorted part is picked and placed at the correct position in the sorted part by shifting larger elements one position to the right.

Algorithm Description

Start from the second element of the array.

Store the current element as key.

Compare the key with elements in the sorted part.

Shift all elements greater than the key one position to the right.

Insert the key at its correct position.

Repeat until the entire array is sorted.

Example

Input:
9 5 1 4 3

Output:
1 3 4 5 9

Time Complexity

Best Case: O(n) (already sorted array)

Average Case: O(n²)

Worst Case: O(n²) (reverse sorted array)

Space Complexity

O(1) (In-place sorting)

Characteristics

Simple and easy to implement

Stable sorting algorithm

In-place algorithm

Efficient for small datasets

Advantages

Faster than Bubble and Selection Sort for small data

Maintains relative order of equal elements

Adaptive (performs better on partially sorted arrays)

Disadvantages

Not suitable for large datasets

Performance decreases with large input size

Applications

Sorting small lists

Online sorting (sorting elements as they arrive)

Educational and learning purposes

Conclusion

Insertion Sort is an efficient and easy-to-understand algorithm for small or partially sorted datasets. Although it is not suitable for large data collections, it is widely used for teaching fundamental sorting concepts.
