# Lecture Day 3

## Question 1: 
Given an array of integers nums, calculate the pivot index of this array.

The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.

Return the leftmost pivot index. If no such index exists, return -1.

**Example 1:**
```
Input: nums = [1,7,3,6,5,6]
Output: 3
Explanation: The pivot index is 3.
Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
Right sum = nums[4] + nums[5] = 5 + 6 = 11
```
**Example 2:**
```
Input: nums = [1,2,3]
Output: -1
Explanation: There is no index that satisfies the conditions in the problem statement.
```
**Example 3:**
```
Input: nums = [2,1,-1]
Output: 0
Explanation: The pivot index is 0.
Left sum = 0 (no elements to the left of index 0)
Right sum = nums[1] + nums[2] = 1 + -1 = 0
```
Constraints:

- `1 <= nums.length <= 1e4`
- `-1000 <= nums[i] <= 1000`


## Question 2:
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


## Question 3:

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