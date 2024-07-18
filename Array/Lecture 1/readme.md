# Lecture Day 1

## Question 1:
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

***Note:** that you must do this in-place without making a copy of the array.*

**Example 1:**

> **Input:** nums = [0,1,0,3,12]<br>
> **Output:** [1,3,12,0,0]

**Example 2:**

> **Input:** nums = [0]<br>
> **Output:** [0]
 

**Constraints:**

> `1 <= nums.length <= 1e4`<br>
> `-2e31 <= nums[i] <= 2e31 - 1`
 

***Follow up:** Could you minimize the total number of operations done?*

## Question 2:
Given an array nums of size , return the majority element.

The majority element is the element that appears more than `⌊n / 2⌋` times. You may assume that the majority element always exists in the array.

**Example 1:**

>**Input:** nums = [3,2,3]<br>
>**Output:** 3

**Example 2:**

>**Input:** nums = [2,2,1,1,1,2,2]<br>
>**Output:** 2
 

**Constraints:**
> `n == nums.length`<br>
> `1 <= n <= 5 * 1e4`<br>
> `-1e9 <= nums[i] <= 1e9`
 

***Follow-up:** Could you solve the problem in linear time and in `O(1)` space*

## Question 3: 

Given an integer array `nums` sorted in **non-decreasing** order, return an array of t**he squares of each number** sorted in *non-decreasing order*.


**Example 1:**<br>
> **Input:** nums = [-4,-1,0,3,10]<br>
> **Output:** [0,1,9,16,100]<br>
> **Explanation:** After squaring, the array becomes [16,1,0,9,100].
>
> After sorting, it becomes [0,1,9,16,100].

**Example 2:**<br>
> **Input:** nums = [-7,-3,2,3,11]<br>
> **Output:** [4,9,9,49,121]
 

**Constraints:**

> `1 <= nums.length <= 1e4`<br>
> `-1e4 <= nums[i] <= 1e4`<br>
> `nums` is sorted in non-decreasing order.

***Follow up:** Squaring each element and sorting the new array is very trivial, could you find an O(n) solution using a different approach?*

## Question 4:

Once upon a time in a faraway kingdom, there was a legendary treasure hidden deep in the enchanted forest. The treasure was protected by a series of mystical clues, each represented as an array of numbers. The brave adventurers who wished to find the treasure had to decode these arrays to discover the hidden message that would lead them to the treasure.

The kingdom's wise old wizard provided the following clue to the adventurers:

"To find the treasure, you must identify the most valuable sequence within the array of clues. This sequence will be the subarray with the largest sum. But beware, the array might contain both positive and negative numbers, and the treasure can only be found if you decode this sequence correctly."

### Task

Write a program to help the adventurers find the subarray with the largest sum in a given array of integers. Your program should take an array of integers as input and return the sum of the subarray with the largest sum.

### Input

- An array of integers `arr` representing the clues.

### Output

- An integer representing the sum of the subarray with the largest sum.

### Constraints

- The array can contain both positive and negative integers.
- The length of the array can be up to 10^5.

### Example

#### Example 1:
```
Input: [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum of 6.
```

#### Example 2:
```
Input: [1]
Output: 1
Explanation: The subarray [1] has the largest sum of 1.
```

#### Example 3:
```
Input: [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum of 23.
```

### Instructions

1. Define a function that takes an array of integers as input.
2. Implement the function to find the subarray with the largest sum.
3. Return the sum of this subarray.