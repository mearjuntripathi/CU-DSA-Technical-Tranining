# Array

## Question 1:

Create a program that performs long division where the divisor ranges from 1 to 100, and the dividend is a very large number provided as a string. The program should prompt the user to input a large number as the dividend and an integer between 1 and 100 as the divisor. It should then perform the division using a method that mimics the manual long division process and print out both the quotient and the remainder of the division. Ensure that the program handles the input correctly and provides clear output for the user. 

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

You can use any programming language to solve this problem. Be sure to handle potential errors, such as the divisor being outside the specified range.

## Question 2:

Given an array of strings, group the anagrams together. You can return the answer in any order.

**Input:**
- An array of strings `strs` 
- where `1 <= len(strs) <= 1e5`
- each string `s` where `1 <= len(s) <= 100`.

**Output:**
- A list of lists, where each sublist contains strings that are anagrams of each other.

**Example 1:**
```
Input: strs = ["eat", "tea", "tan", "ate", "nat", "bat"]
Output: [["eat", "tea", "ate"], ["tan", "nat"], ["bat"]]
```

**Example 2:**
```
Input: strs = ["listen", "silent", "enlist", "inlets", "google", "goolge"]
Output: [["listen", "silent", "enlist", "inlets"], ["google", "goolge"]]
```
## Question 3:

Given an MxN matrix, write an algorithm to set the entire row and column to 0 if an element in the matrix is 0.

**Input:**
- An integer matrix `matrix` of size `MxN` where `1 <= M, N <= 1000`.

**Output:**
- The modified matrix where if an element is 0, its entire row and column are set to 0.

**Example 1:**
```
Input: matrix = [
  [1, 2, 3],
  [4, 0, 6],
  [7, 8, 9]
]
Output: [
  [1, 0, 3],
  [0, 0, 0],
  [7, 0, 9]
]
```

**Example 2:**
```
Input: matrix = [
  [5, 4, 3, 9],
  [2, 0, 7, 6],
  [1, 3, 4, 0]
]
Output: [
  [5, 0, 3, 0],
  [0, 0, 0, 0],
  [0, 0, 0, 0]
]
```

## Question 4:

Assume you have a method `isSubstring` which checks if one word is a substring of another. Given two strings, `s1` and `s2`, write an algorithm to check if `s2` is a rotation of `s1` using only one call to `isSubstring`. For example, "waterbottle" is a rotation of "erbottlewat".

**Input:**
- Two strings `s1` and `s2` where `1 <= len(s1), len(s2) <= 1000`.

**Output:**
- A boolean value `True` or `False` indicating whether `s2` is a rotation of `s1`.

**Example 1:**
```
Input: s1 = "waterbottle", s2 = "erbottlewat"
Output: True
```

**Example 2:**
```
Input: s1 = "hello", s2 = "llohe"
Output: True
```

**Example 3:**
```
Input: s1 = "hello", s2 = "lleho"
Output: False
```

## Question 5:

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

## Question 6:

Given a sorted array of n integers that has been rotated an unknown number of times, give an `O(log n)` algorithm that finds an element in the array. You may assume that the array was originally sorted in increasing order.
```
Input: find 5 in array (15 16 19 20 25 1 3 4 5 7 10 14)
Output: 8 (the index of 5 in the array)
```

## Question 7:

A circus is designing a tower routine consisting of people standing atop one another’s shoulders. For practical and aesthetic reasons, each person must be both shorter and lighter than the person below him or her. Given the heights and weights of each person in the circus, write a method to compute the largest possible number of people in such a tower.
```
Input (ht, wt): (65, 100) (70, 150) (56, 90) (75, 190) (60, 95) (68, 110)
Output: The longest tower is length 6 and includes from top to bottom: (56, 90) (60,95) (65,100) (68,110) (70,150) (75,190)
```

## Question 8:

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
Output: "double nine double eight double eight six triple zero"
```

**Example 3:**
```
Input: "12345"
Output: "not a valid number"
```
## Question 9:

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
Input: "double nine double eight double eight six triple zero"
Output: "9988886000"
```

**Example 3:**
```
Input: "nine eight seven"
Output: "not a valid number"
```
## Question 10:

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

## Question 11: 

Given a matrix of dimensions `n x m`, write a program to print the matrix in zig-zag fashion.

**Input:**
- An integer matrix `matrix` of dimensions `n x m` where `1 <= n, m <= 100`.
- Each element `matrix[i][j]` is an integer.

**Output:**
- Print the elements of the matrix in zig-zag order.

**Zig-Zag Order Explanation:**
- Start from the top-left corner of the matrix.
- Move diagonally down towards right alternately.
- After reaching the end of a row or column, switch direction.

**Example:**

For a matrix `matrix` with dimensions `3 x 3`:

```
1  2  3
4  5  6
7  8  9
```

The zig-zag order printing would be: `1 2 4 7 5 3 6 8 9`.

## Question 12:

Arjun Tripathi, a student, is learning about dynamic memory allocation using `malloc`, `calloc`, and `realloc` functions. He has written a program to demonstrate their usage and understanding. Your task is to write a detailed explanation and questions based on his program.

**Program Explanation:**

Arjun's program demonstrates the usage of `malloc`, `calloc`, and `realloc` functions in C for dynamic memory allocation:
1. **Using `malloc`:**
   - Allocate memory for an array of integers based on user input.
   - If memory allocation fails, handle the error gracefully.
   - Initialize and print the elements of the array.
   - Free the allocated memory using `free`.

2. **Using `calloc`:**
   - Allocate memory for an array of integers using `calloc`, which initializes memory to zero.
   - Print the elements of the initialized array.
   - Resize the allocated memory using `realloc` based on user input.
   - Print the elements of the resized array.
   - Free the allocated memory using `free`.

3. **Using `realloc`:**
   - Allocate memory for an array of integers using `malloc`.
   - Initialize and print the elements of the array.
   - Resize the allocated memory using `realloc` based on user input to increase its size.
   - Print the elements of the resized array.
   - Free the allocated memory using `free`.

**Tasks:**

1. **Task 1: Understanding `malloc`**
   - Explain what `malloc` does and how it differs from `calloc`.
   - What happens if `malloc` fails to allocate memory?
   - Why is it important to check if `malloc` returns `NULL`?

2. **Task 2: Understanding `calloc`**
   - Describe the purpose of using `calloc` instead of `malloc`.
   - Why does `calloc` initialize memory to zero?
   - How does `realloc` work with memory allocated by `calloc`?

3. **Task 3: Understanding `realloc`**
   - Explain the role of `realloc` in dynamic memory management.
   - What happens if `realloc` fails to resize memory?
   - Compare resizing memory allocated by `malloc` vs. `calloc` using `realloc`.

## Question 13: 

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


## Question 14:

You are given an array consisting of 'N' elements and you need to perform 'Q' queries on the given array. Each query consists of an integer which tells the number of elements by which you need to left rotate the given array. For each query return the final array obtained after performing the left rotations.

Note:

Perform each query on the original array only i.e. every output should be according to the original order of elements.
Example:

Let the array be [1, 2, 3, 4, 5, 6] and the queries be {2, 4, 1}. For every query, we’ll perform the required number of left rotations on the array.

For the first query, rotate the given array to the left by 2 elements, so the resultant array is: [3, 4, 5, 6, 1, 2].

For the second query, rotate the given array to the left by 4 elements, so the resultant array is: [5, 6, 1, 2, 3, 4].

For the third query, rotate the given array to the left by 1 element, so the resultant array is: [2, 3, 4, 5, 6, 1].

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= T <= 10 
1 <= N <= 1000
1 <= Q <= 100
0 <= Queries[i] <= 10^5
-10^5 <= Array[i] <= 10^5

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

## Question 15

You are the receptionist at a hotel which has 10 floors, numbered from 0 to 9 and each floor has 26 rooms named from ‘A’ to ‘Z’. Being a receptionist your task is to handle booking queries.

You get booking queries in the form of strings of size 3 where 1st character is ‘+’ means room is booked, or ‘-’ means room is freed. Second character represents the floor of the room i.e, ‘0’ to ‘9’. Third character represents the room name i.e, ‘A’ to ‘Z’.

On booking of each room you collect 1 coin from the customer. After the end of all the booking queries you have to count the number of coins you collected.

You may assume that the list describes a correct sequence of bookings in chronological order i.e., only free rooms can be booked, and only booked rooms can be freed.

For Example:-

Consider booking queries to be ["+1A", "+3E", "-1A", "+4F", "+1A", "-3E"]
- +1A: Room A on the 1st floor is booked and you collected 1 coin.
- +3E: Room E on the 3rd floor is booked and you collected 1 coin.
- -1A: Room A on the 1st floor is freed.
- +4F: Room F on the 4th floor is booked and you collected 1 coin.
- +1A: Room A on the 1st floor is booked and you collected 1 coin.
- -3E: Room E on the 3rd floor is freed.

So you collected 4 coins.

Constraints:
- 1 <= T <= 10^2
- 0 <= N <= 6*10^2
- |query.length| = 3

Time Limit: 1 sec

**Sample Input 1:**
```
2
6
+1A +3E -1A +4F +1A -3E
3
+0A +0B +0C
```
**Sample Output 1:**
```
4
3
```
Explanation For Sample Input 1:
```
Test Case 1: Please refer to the example above.

Test Case 2: Room 0A, 0B & 0C is booked so we collected 3 coins.
```
**Sample Input 2:**
```
2
4
+8D -8D +8D -8D
7
+3C +2B +7K -2B +6C -3C +5S
```
**Sample Output 2:**
```
2
5
```

## Question 16

Given an integer array `nums`, find the contiguous subarray within the array (containing at least one number) that has the largest product, and return the product.

**Input:**
- An integer array `nums` where `1 <= nums.length <= 2 * 10^4`.
- Each element `nums[i]` is an integer where `-10 <= nums[i] <= 10`.

**Output:**
- An integer representing the maximum product of a contiguous subarray.

**Example 1:**
```
Input: nums = [2, 3, -2, 4]
Output: 6
Explanation: [2, 3] has the largest product 6.
```

**Example 2:**
```
Input: nums = [-2, 0, -1]
Output: 0
Explanation: The result cannot be 2, because [-2, -1] is not a subarray.
```

**Example 3:**
```
Input: nums = [0, 2]
Output: 2
Explanation: [2] has the largest product 2.
```