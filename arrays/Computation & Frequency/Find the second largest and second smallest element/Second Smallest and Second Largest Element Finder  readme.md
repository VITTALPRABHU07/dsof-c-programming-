Second Smallest and Second Largest Element Finder

Overview

This program identifies the second smallest and second largest elements from a given array of integers.
The solution is designed following industry-standard coding practices, focusing on efficiency, readability, and robustness.

Objective

Find the second smallest element

Find the second largest element

Handle edge cases such as:

Arrays with fewer than two elements

Duplicate values

Invalid input scenarios


Approach

Traverse the array only once

Track:

Smallest and second smallest values

Largest and second largest values

Avoid sorting to maintain optimal performance


Algorithm Description

Initialize:

smallest to maximum possible integer

largest to minimum possible integer

Iterate through each array element:

Update smallest and second smallest accordingly

Update largest and second largest accordingly

Validate whether second smallest and second largest exist

Return results or an error if not found


Complexity Analysis

Time Complexity: O(n)

Space Complexity: O(1)

Efficiency: Optimal (no sorting used)


Features

Single-pass solution

Handles duplicate values correctly

No additional memory allocation

Modular and reusable logic

Suitable for:

Embedded systems

Interview coding rounds

Production-level applications


Limitations

Requires at least two distinct elements

Works only for integer arrays (can be extended)


Use Cases

Data preprocessing

Ranking systems

Statistical analysis

Competitive programming

Core C / DSA interviews


Example

Input:
{12, 5, 7, 3, 19, 5, 10}

Output:

Second Smallest: 5

Second Largest: 12


Coding Standards Followed

Modular programming

Meaningful variable names

Input validation

Use of standard headers

Clear documentation


Conclusion

This implementation efficiently finds the second smallest and second largest elements using a single traversal, making it ideal for real-world and interview scenarios.
