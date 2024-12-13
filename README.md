Maximum Product Subarray


Given an array A of integers, find a contiguous non-empty subarray within the array that has the largest product, and return the product.

Note: The product fits in a 32-bit integer.

Example
A: [-1, 3, 2, -1, -2, 3, 0, -2]
Result: 36
Explanation: The subarray [3, 2, -1, -2, 3] has a product of 36.
Testing
Input Format
The first line contains an integer ‘T’ denoting the number of test cases.
For each test case, the input has two lines:

An integer ‘n’ denoting the length of the array A.
n space-separated integers denoting the elements of the array A.
Output Format
For each test case, the output contains a line with one integer denoting the maximum product possible.

Sample Input
4
8
-1 3 2 -1 -2 3 0 -2
7
3 0 -1 -2 3 0 -2
9
1 2 3 4 5 0 0 -1 1
1
-2
Expected Output
36
6
120
-2