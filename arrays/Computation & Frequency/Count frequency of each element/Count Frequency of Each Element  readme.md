Count Frequency of Each Element 
Introduction

Counting the frequency of elements in an array means finding how many times each element appears. This program helps identify repeated and unique elements in an array.

Working Principle

The program compares each element with all other elements.

A visited array is used to ensure that already counted elements are not counted again.

For every unvisited element, the program counts its occurrences and marks duplicates as visited.

Algorithm Description

Read the number of elements and array values.

Initialize a visited array to track counted elements.

Traverse the array element by element.

For each unvisited element:

Count how many times it appears.

Mark duplicate elements as visited.

Display the element along with its frequency.

Example

Input:
2 3 2 5 3 2

Output:

Element   Frequency
2         3
3         2
5         1

Time Complexity

O(n²) due to nested loops

Space Complexity

O(n) for the visited array

Characteristics

Simple logic

Works for unsorted arrays

No extra data structures required (like hash maps)

Advantages

Easy to understand and implement

Suitable for small datasets

Good for learning array manipulation

Disadvantages

Inefficient for large arrays

Higher time complexity compared to hashing methods

Applications

Finding duplicate elements

Data analysis

Frequency-based problems

Conclusion

This program effectively counts the frequency of each element in an array using a simple comparison method. While it is not optimal for large datasets, it is ideal for educational and basic applications.
