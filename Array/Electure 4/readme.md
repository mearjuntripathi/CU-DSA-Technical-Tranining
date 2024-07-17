# Electure Day 3

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