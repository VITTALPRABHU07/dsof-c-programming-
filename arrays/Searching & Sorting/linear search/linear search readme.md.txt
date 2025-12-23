Linear Search in an Array

 Overview

Linear Search is a basic searching technique used to find a specific element in an array. It works by checking each element one by one until the required element is found or the entire array has been searched.

This method can be used on both sorted and unsorted arrays.

 How Linear Search Works

Start searching from the first element of the array.

Compare each element with the search key.

If a match is found, the search stops.

If the end of the array is reached and no match is found, the element does not exist in the array.

 Algorithm Steps

Take the size of the array.

Take the array elements.

Take the element to be searched.

Compare the search element with each array element sequentially.

If a match occurs, return the position.

If no match occurs after checking all elements, return "not found".

 Time Complexity

Best Case: O(1) (element found at first position)

Worst Case: O(n) (element found at last position or not found)

Average Case: O(n)

 Space Complexity

O(1) (no extra space required)

 Advantages

Simple and easy to understand

Works with unsorted data

No additional memory required

 Disadvantages

Not efficient for large datasets

Slower compared to advanced searching algorithms

 Applications

Searching in small datasets

Suitable for unsorted arrays

Used in simple programs and learning purposes

 Conclusion

Linear Search is the simplest searching algorithm. While it is not efficient for large arrays, it is very useful for understanding basic searching concepts and for small-scale applications.