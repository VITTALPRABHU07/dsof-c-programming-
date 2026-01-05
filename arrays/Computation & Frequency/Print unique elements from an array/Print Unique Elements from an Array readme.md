Print Unique Elements from an Array
Overview

            This program identifies and prints unique elements from a given integer array.
            An element is considered unique if it appears exactly once in the array.

The solution is designed following industry-standard C programming practices, focusing on clarity, maintainability, and correctness.

Problem Definition

             Given an array of integers of size N, determine and print all elements that occur only once.

Input Specification

               An integer N representing the number of elements

                N integer values forming the array

Output Specification

                Prints all unique elements

                Output maintains the original order of appearance

Example
Input
Array: 1 2 3 2 4 1 5

Output
Unique elements: 3 4 5

Approach

           Traverse the array element by element

           For each element, count its frequency by comparing it with all other elements

           If the frequency is exactly 1, print the element

            Repeat until all elements are processed

            This approach avoids additional memory usage and is suitable for systems with limited resources.

Algorithm (High-Level)

              Read array size

              Read array elements

              For each element:

              Initialize frequency counter

              Compare with every other element

              Increment counter on match

              Print element if frequency equals one

Time and Space Complexity
              Metric	Value
              Time Complexity	O(N²)
              Space Complexity	O(1)
              Edge Cases Handled

Single-element array

         All duplicate elements

          All unique elements

          Negative numbers

          Zero values

          Coding Standards Followed

          Modular design

          Meaningful variable and function names

          Input validation

          No magic numbers (use constants)

          Portable and compiler-independent

Applications

            Data preprocessing

            Duplicate removal

            Frequency analysis

            Interview screening problems

            Embedded system programming
