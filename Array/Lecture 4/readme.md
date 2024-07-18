# Lecture Day 4

## Question 1: 
Given two large numbers represented as strings, write a program to compute their sum, difference, and multiplication. The numbers can be very large and might not fit into standard data types like `int` or `long`.

**Input:**
- Two non-negative integers `num1` and `num2` represented as strings. Each string contains only digits (`0-9`), and both strings do not contain any leading zeros except for the number "0" itself.
- The length of `num1` and `num2` can be up to `10^4`.

**Output:**
- A string representing the sum of `num1` and `num2`.
- A string representing the difference between `num1` and `num2` (`num1 - num2`). It is guaranteed that `num1` is greater than or equal to `num2`.
- A string representing the product of `num1` and `num2`.

**Example 1:**
```
Input: num1 = "12345678901234567890", num2 = "98765432109876543210"

Output: 
Sum: "111111111011111111100"
Difference: "-86419753208641975320"
Product: "1219326311370217952237463801111263526900"
```

**Example 2:**
```
Input: num1 = "12345", num2 = "6789"

Output: 
Sum: "19134"
Difference: "5556"
Product: "83810205"
```

**Constraints:**
- The input numbers are non-negative and do not contain leading zeros except for "0".
- Both `num1` and `num2` have lengths in the range `[1, 10000]`.

**Instructions:**
- Implement the functions `string addStrings(string num1, string num2)`, `string subtractStrings(string num1, string num2)`, and `string multiplyStrings(string num1, string num2)` to compute the sum, difference, and product of the given strings.
- Ensure that the functions handle very large numbers efficiently.

**Hints:**
- You may use elementary school arithmetic to handle the addition, subtraction, and multiplication manually.
- Consider iterating through the strings from the least significant digit to the most significant digit to simulate the arithmetic operations.

## Question 2: 
Create a program that performs long division where the divisor ranges from 1 to 100, and the dividend is a very large number provided as a string. The program should prompt the user to input a large number as the dividend and an integer between 1 and 100 as the divisor. It should then perform the division using a method that mimics the manual long division process and print out both the quotient and the remainder of the division. Ensure that the program handles the input correctly and provides clear output for the user.

**Input:**
- A very large number as the dividend, represented as a string.
- An integer between 1 and 100 as the divisor.

**Output:**
- The quotient and the remainder of the division.

**Sample Input:**
```
Please enter the dividend (a very large number): 123456789012345678901234567890
Please enter the divisor (1-100): 97
```

**Sample Output:**
```
The result of the division is:
Quotient: 1277946247570636777311614276
Remainder: 62
```

**Constraints:**
- The dividend is a non-integer provided as a string and can be very large (up to 1 to 1000).
- The divisor is an integer between 1 and 100 inclusive.

**Instructions:**
- Implement the program to perform the division using a method that mimics the manual long division process.
- Ensure the program handles potential errors, such as the divisor being outside the specified range.
- You can use any programming language to solve this problem.
- Provide clear and user-friendly input and output prompts.

## Question 3:
Given a string containing alphanumeric characters and possibly one leading '+' or '-' sign, write an algorithm to convert the string to an integer by ignoring all alphabetic characters. The conversion should handle both positive and negative integers correctly.

**Input:**
- A string `s` where `1 <= len(s) <= 1000`.

**Output:**
- An integer representing the numeric value of the input string after ignoring all alphabetic characters and considering the sign.

**Example 1:**
```
Input: "ahfda12jkdsa34-5"
Output: 12345
```

**Example 2:**
```
Input: "-dsa212+21"
Output: -21221
```

**Example 3:**
```
Input: "+-223482"
Output: 223482
```

## Question 4:


You are given an array consisting of 'N' elements and you need to perform 'Q' queries on the given array. Each query consists of an integer which tells the number of elements by which you need to left rotate the given array. For each query return the final array obtained after performing the left rotations.

Note:

Perform each query on the original array only i.e. every output should be according to the original order of elements.
Example:

Let the array be [1, 2, 3, 4, 5, 6] and the queries be {2, 4, 1}. For every query, we’ll perform the required number of left rotations on the array.

For the first query, rotate the given array to the left by 2 elements, so the resultant array is: [3, 4, 5, 6, 1, 2].

For the second query, rotate the given array to the left by 4 elements, so the resultant array is: [5, 6, 1, 2, 3, 4].

For the third query, rotate the given array to the left by 1 element, so the resultant array is: [2, 3, 4, 5, 6, 1].

**Constraints:**
- 1 <= T <= 10
- 1 <= N <= 1000
- 1 <= Q <= 100
- 0 <= Queries[i] <= 10^5
- -10^5 <= Array[i] <= 10^5

Where 'Queries[i]' denotes the extent to which the array in each query needs to be rotated and 'Array[i]' denotes the array element.

Time limit: 1 sec

**Sample Input 1:**
```
2
5 3
7 8 6 1 2
8 4 3
2 2
12 15
1 2    
```
**Sample Output 1:**
```
1 2 7 8 6 
2 7 8 6 1
1 2 7 8 6 
15 12
12 15
```
**Explanation for Sample Output 1:**
```
In test case 1, we have, array: [7, 8, 6, 1, 2] and three queries: {8, 4, 3}.

For the first query we rotate the given array to the left 8 times, so the resultant array is: [1, 2, 7, 8, 6].

For the second query we rotate the given array to the left 4 times, so the resultant array is: [2, 7, 8, 6, 1].

For the third query we rotate the given array to the left 3 times, so the resultant array is: [1, 2, 7, 8, 6].

In test case 2, we have, array: [12, 15] and two queries: {1, 2}.

For the first query we rotate the given array to the left 1 time, so the resultant array is: [15, 12].

For the second query we rotate the given array to the left 2 times, so the resultant array is: [12, 15].
```
**Sample Input 2:**
```
2
6 3
10 20 30 40 50 60
12 2 5
1 2
-15
100 89
```
**Sample Output 2:**
```
10 20 30 40 50 60 
30 40 50 60 10 20 
60 10 20 30 40 50 
-15
-15
``
Explanation for Sample Output 2:
In test case 1, we have, array: [10, 20, 30, 40, 50, 60] and three queries: {12, 2, 5}.

For the first query we rotate the given array to the left 12 times, so the resultant array is: [10, 20, 30, 40, 50, 60].

For the second query we rotate the given array to the left 2 times, so the resultant array is: [30, 40, 50, 60, 10, 20].

For the third query we rotate the given array to the left 5 times, so the resultant array is: [60, 10, 20, 30, 40, 50]

In test case 2, we have, array: [-15] and two queries: {100, 89}.

For the first query we rotate the given array to the left 100 times, so the resultant array is: [-15].

For the second query we rotate the given array to the left 89 times, so the resultant array is: [-15].
```