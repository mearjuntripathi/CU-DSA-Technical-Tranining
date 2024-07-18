# Lecture Day 5

## Question 1a:

Write a program that converts a 10-digit mobile number into words. If a digit appears consecutively, the program should describe it using "double", "triple", etc., as appropriate.

**Input:**
- A string `number` representing a 10-digit mobile number.

**Output:**
- A string where each digit of the mobile number is converted into words, with consecutive repetitions described using "double", "triple", etc. If the input is not a valid 10-digit number, the output should indicate that the number is not valid.

**Example 1:**
```
Input: "8887135277"
Output: "triple eight seven one three five two double seven"
```

**Example 2:**
```
Input: "9988886000"
Output: "double nine triple eight eight six triple zero"
```

**Example 3:**
```
Input: "12345"
Output: "not a valid number"
```
## Question 1b:

Write a program that converts a string representation of a mobile number (where digits are described in words and consecutive repetitions are described using "double", "triple", etc.) back into a 10-digit number. 

**Input:**
- A string `words` representing the mobile number in words.

**Output:**
- A string representing the 10-digit mobile number. If the input string does not correctly represent a valid 10-digit number, the output should indicate that the input is not valid.

**Example 1:**
```
Input: "triple eight seven one three five two double seven"
Output: "8887135277"
```

**Example 2:**
```
Input: "double nine triple eight eight six triple zero"
Output: "9988886000"
```

**Example 3:**
```
Input: "nine eight seven"
Output: "not a valid number"
```

## Question 2:
Given an array of distinct elements of size `N`, the task is to rearrange the elements of the array in a *zig-zag fashion*, i.e., the elements are arranged as smaller, then larger, then smaller, and so on. There can be more than one arrangement that follows the form:

**[NOTE: without Sorting]**

```arr[0] < arr[1]  > arr[2] < arr[3] > arr[4] < …```

**Example 1:**
```
Input: N = 7, arr[] = {4, 3, 7, 8, 6, 2, 1}
Output: 3, 7, 4, 8, 2, 6, 1
Explanation: The given array is in zig-zag pattern as we can see 3 < 7 > 4 < 8 > 2 < 6 >1

Input: N = 4, arr[] = {1, 4, 3, 2}
Output: 1, 4, 2, 3
```

## Question 3:
The string `"PAYPALISHIRING"` is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)
```
P   A   H   N
A P L S I I G
Y   I   R
```
And then read line by line: `"PAHNAPLSIIGYIR"`

Write the code that will take a string and make this conversion given a number of rows:

    string convert(string s, int numRows); 

**Example 1:**
```
Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"
```
**Example 2:**
```
Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:
P     I    N
A   L S  I G
Y A   H R
P     I
```
**Example 3:**
```
Input: s = "A", numRows = 1
Output: "A"
```

**Constraints:**

- 1 <= s.length <= 1000
- `s` consists of English letters (lower-case and upper-case), `','` and `'.'`.
- 1 <= numRows <= 1000

## Question 4:

Problem statement
You have been given ‘K’ different arrays/lists, which are sorted individually (in ascending order). You need to merge all the given arrays/list such that the output array/list should be sorted in ascending order.

**Constraints :**
- 1 <= K <= 5
- 1 <= N <= 20
- -10^5 <= DATA <= 10^5

Time Limit: 1 sec 
```
Sample Input 1:
2
3 
3 5 9 
4 
1 2 3 8   

Sample Output 1:
1 2 3 3 5 8 9 

Explanation of Sample Input 1:
After merging the two given arrays/lists [3, 5, 9] and [ 1, 2, 3, 8], the output sorted array will be [1, 2, 3, 3, 5, 8, 9].

Sample Input 2:
4
3
1 5 9
2
45 90
5
2 6 78 100 234
1
0

Sample Output 2:
0 1 2 5 6 9 45 78 90 100 234
Explanation of Sample Input 2 :
After merging the given arrays/lists [1, 5, 9], [45, 90], [2, 6, 78, 100, 234] and [0], the output sorted array will be [0, 1, 2, 5, 6, 9, 45, 78, 90, 100, 234].
```