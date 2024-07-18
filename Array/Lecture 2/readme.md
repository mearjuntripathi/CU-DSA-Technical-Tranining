# Lecture Day 2

## Question 1a: 
Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.

Example 1:
```
Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4
```

Example 2:
```
Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: 2 does not exist in nums so return -1
```

Constraints:

- `1 <= nums.length <= 10e4`
- `-1e4 < nums[i], target < 1e4`
- All the integers in `nums` are unique.
- `nums` is sorted in ascending order

**Follow up:** Can you solve the problem in `O(log(n))` time complexity?

## Question 1b: 
There is an integer array `nums` sorted in ascending order (with distinct values).

Prior to being passed to your function, `nums` is possibly rotated at an unknown pivot index `k` (`1 <= k < nums.length`) such that the resulting array is `[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]` **(0-indexed)**. For example, `[0,1,2,4,5,6,7]` might be rotated at pivot index `3` and become `[4,5,6,7,0,1,2]`.

Given the array `nums` after the possible rotation and an integer `target`, return the index of `target` if it is in `nums`, or `-1` if it is not in `nums`.

You must write an algorithm with `O(log n)` runtime complexity.

**Example 1:**
```
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
```
**Example 2:**
```
Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
```
**Example 3:**
```
Input: nums = [1], target = 0
Output: -1
```
**Constraints:**

- `1 <= nums.length <= 5000`
- `-1e4 <= nums[i] <= 1e4`
- All values of `nums` are unique.
- `nums` is an ascending array that is possibly rotated.
- `-1e4 <= target <= 1e4`

**Follow up:** Can you solve the problem in `O(log(n))` time complexity?

## Question 2: 
Given an integer array `nums`, find a peak element. A peak element is an element that is not smaller than its neighbors. If the array contains multiple peaks, return the index to any one of the peaks.

**Input:**
- An integer array `nums` where `1 <= nums.length <= 10^5`.
- Each element `nums[i]` is an integer where `-10^4 <= nums[i] <= 10^4`.

**Output:**
- An integer representing the index of a peak element.

**Notes:**
- `nums[-1]` and `nums[n]` are considered to be negative infinity (`-∞`).

**Example 1:**
```
Input: nums = [1, 2, 3, 1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.
```

**Example 2:**
```
Input: nums = [1, 2, 1, 3, 5, 6, 4]
Output: 1 or 5
Explanation: Your function can return index number 1 where the peak element is 2, or index number 5 where the peak element is 6.
```

**Follow up:** Your solution should run in O(log n) time complexity.

## Question 3: 
Given an array `nums` sorted in non-decreasing order, return the maximum between the number of positive integers and the number of negative integers.

In other words, if the number of positive integers in `nums` is `pos` and the number of negative integers is `neg`, then return the maximum of `pos` and `neg`.

**Note** that `0` is neither positive nor negative.

**Example 1:**
```
Input: nums = [-2,-1,-1,1,2,3]
Output: 3
Explanation: There are 3 positive integers and 3 negative integers. The maximum count among them is 3.
```
**Example 2:**
```
Input: nums = [-3,-2,-1,0,0,1,2]
Output: 3
Explanation: There are 2 positive integers and 3 negative integers. The maximum count among them is 3.
```
**Example 3:**
```
Input: nums = [5,20,66,1314]
Output: 4
Explanation: There are 4 positive integers and 0 negative integers. The maximum count among them is 4.
```
 
**Constraints:**

- `1 <= nums.length <= 2000`
- `-2000 <= nums[i] <= 2000`
- `nums` is sorted in a non-decreasing order.


**Follow up:** Can you solve the problem in `O(log(n))` time complexity?

## Question 4:
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