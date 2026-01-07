Array Rotation (Left by 1 & Right by 1)
Overview

Array rotation is a common data manipulation operation where elements of an array are shifted either to the left or right by a specified number of positions.
This project demonstrates rotation by exactly one position, which is a fundamental concept used in system design, algorithms, and interview problems.

Problem Statement

Given an array of integers:

Rotate the array left by 1 position

Rotate the array right by 1 position

 Concepts
 Left Rotation by 1

The first element moves to the last position

All other elements shift one position to the left

 Right Rotation by 1

The last element moves to the first position

All other elements shift one position to the right

 Example
Input
Array: [1, 2, 3, 4, 5]

Left Rotation by 1
[2, 3, 4, 5, 1]

Right Rotation by 1
[5, 1, 2, 3, 4]

 Algorithm
Left Rotate by 1

Store the first element in a temporary variable.

Shift all elements one position to the left.

Place the stored element at the last index.

Right Rotate by 1

Store the last element in a temporary variable.

Shift all elements one position to the right.

Place the stored element at the first index.

 Time and Space Complexity
Operation	Time Complexity	Space Complexity
Left Rotation (by 1)	O(n)	O(1)
Right Rotation (by 1)	O(n)	O(1)

 
 Applications

Circular buffers

Scheduling algorithms

Data streaming

Cryptography

Interview & competitive programming problems


 Key Points

No extra array is required

In-place rotation

Efficient and scalable

Industry-relevant logic

 Conclusion

Left and right array rotation by one position is a core array operation that builds the foundation for more advanced problems such as rotation by k, circular queues, and string manipulation.
