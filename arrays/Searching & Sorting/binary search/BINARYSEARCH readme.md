 Overview

Binary Search is an efficient searching algorithm used to find an element in a sorted array.
It works by repeatedly dividing the search range into two halves and comparing the middle element with the target value.

 How Binary Search Works

The array must be sorted (ascending or descending).

Compare the middle element with the search key.

If the key matches the middle element, the search is successful.

If the key is smaller, search the left half.

If the key is larger, search the right half.

Repeat until the element is found or the search range becomes empty.

 Algorithm Steps

Start with the first and last index of the array.

Find the middle index.

Compare the middle element with the search element.

If equal, return the position.

If the search element is smaller, reduce the search to the left half.

If the search element is larger, reduce the search to the right half.

Repeat the process until the element is found or the range is invalid.

 Time Complexity

Best Case: O(1)

Worst Case: O(log n)

Average Case: O(log n)

 Space Complexity

Iterative approach: O(1)

Recursive approach: O(log n)

 Advantages

Very fast compared to linear search

Efficient for large datasets

Reduces search space by half each step

 Disadvantages

Works only on sorted arrays

Not suitable for frequently changing data

Sorting adds extra overhead

 Applications

Searching in large sorted datasets

Databases and file systems

Searching elements in dictionaries and phone books

 Important Note

Binary Search cannot be applied to unsorted arrays.
Sorting is mandatory before performing binary search.

 Conclusion

Binary Search is a powerful and efficient searching technique. When data is sorted, it significantly reduces search time and is widely used in real-world applications.

