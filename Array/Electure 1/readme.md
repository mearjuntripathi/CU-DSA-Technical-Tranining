# Electure Day 1

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
