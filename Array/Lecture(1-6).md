# Lecture 1(2 hrs--Theory+Problems)

Problems on topics:
- Basics array
- Linear Search , Binary Search

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

## Solution:

**Intuition and Approach:**

The problem involves rearranging an integer array such that all zeros are moved to the end, preserving the relative order of non-zero elements. Here's how the two provided solutions tackle this:

**1. Brute Force Approach (`moving_zero_brute_force`):**

   - **Intuition:** This method iterates through the array, creating a temporary array (`temp`) to store non-zero elements. It counts the number of zeros encountered (`zero`).
   - **Approach:**
      ```
      FUNCTION move_zeros_brute_force(arr)
      new_list = EMPTY_LIST
      zero_count = 0
      FOR each num in arr
         IF num != 0
            ADD num to new_list
         ELSE
            INCREMENT zero_count
      FOR i = 0 TO zero_count - 1
         ADD 0 to new_list
      RETURN new_list  # Replace original array if needed
      ```

**2. Optimal Solution (`moving_zero_optimal_solution`):**

   - **Intuition:** This approach leverages a single pass through the array, taking advantage of in-place modification to avoid extra space.
   - **Approach:**
      ```
      FUNCTION move_zeros_optimal(arr)
      j = 0  # Index for non-zero elements
      FOR each i in range(length of arr)
         IF arr[i] != 0
            SWAP arr[i] with arr[j]
            INCREMENT j
      RETURN arr
      ```

**Key Differences and Considerations:**

- **Time Complexity:**
   - Brute Force: `O(n)` for the first loop, `O(n)` for appending zeros, and `O(n)` for copying to the original array, resulting in a total of `O(3n)` = `O(n)`.
   - Optimal: `O(n)` for a single loop through the array.
- **Space Complexity:**
   - Brute Force: `O(n)` due to the creation of a temporary array `temp`.
   - Optimal: `O(1)` as it modifies the original array in-place.

**Choosing the Right Approach:**

- For small arrays, the difference in time complexity might be negligible.
- For larger datasets, the optimal solution becomes significantly more efficient due to its lower space usage and avoiding extra copying.
- If modifying the original array is not allowed, you might need to adapt the brute force approach to avoid overwriting.

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

## Solution

**Problem:** Given an array where a particular element appears more than half the times (majority element), find that element.

**1. Brute Force Approach (`bruteforce_majority`):**

* **Intuition:** This method leverages sorting. Since the majority element appears more than half the times, it will be the middle element (or close to it) in a sorted array.
* **Approach:**
    ```
    FUNCTION bruteforce_majority(arr)
    SORT arr  // Sort the entire array
    val = arr[0]  // Initialize variables
    count = 1
    maxCount = 1
    majority = val

    FOR i = 1 TO length(arr) - 1  // Loop through sorted array
        IF arr[i] == val  // Check if current element matches previous
        count++
        ELSE
        val = arr[i]  // Update values if element changes
        count = 1
        IF count > maxCount  // Track element with maximum count
        maxCount = count
        majority = val
    RETURN majority
    ```

**2. Optimal Approach (`optimal_majority`):**

* **Intuition:** This method, also known as Boyer-Moore Voting Algorithm, utilizes the fact that the majority element's count will always be positive, even if we subtract the count of all other elements.
* **Approach:**
    ```
    FUNCTION optimal_majority(arr)
    val = arr[0]  // Initialize variables
    count = 1

    FOR i = 1 TO length(arr) - 1  // Loop through the array
        IF val == arr[i]  // If current element matches current majority candidate
        count++
        ELSE  // If element differs from majority candidate
        count--
        IF count == 0  // If count becomes zero, reset candidate and count
            val = arr[i]
            count = 1
    RETURN val
    ```

**Key Differences:**

* **Time Complexity:**
    - Brute Force: `O(n log n)` due to sorting the array.
    - Optimal: `O(n)` for a single loop through the array.
* **Space Complexity:**
    - Brute Force: `O(1)` as it modifies the original array in-place (although sorting might use additional temporary space depending on the algorithm).
    - Optimal: `O(1)` as it uses constant extra space.

**Choosing the Right Approach:**

* The optimal approach is generally preferred due to its lower time complexity, especially for larger datasets.
* While the brute force approach might be simpler to understand, its sorting step makes it less efficient.

## Question 3a: 
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

## Solution 

**Intuition and Approach:**

The problem involves searching for a target value in a sorted integer array. Here's how the two provided solutions tackle this:

**1. Linear Search (`linear_search`):**

   - **Intuition:** This method iterates through the array from the beginning to the end, checking each element against the target value. It returns the index of the target value if found, otherwise returns -1.
   - **Approach:**
      ```
      FUNCTION linear_search(arr, size, target)
         FOR i FROM 0 TO size - 1
            IF arr[i] == target
               RETURN i
            END IF
         END FOR
         RETURN -1  // Target not found
      END FUNCTION
      ```

**2. Binary Search (`binary_search`):**

   - **Intuition:** This method leverages the fact that the array is sorted. It repeatedly divides the search interval in half, comparing the middle element with the target value. Depending on the comparison, it eliminates half of the remaining elements from consideration.
   - **Approach:**
      ```
      FUNCTION binary_search(arr, size, target)
         left = 0
         right = size - 1
         WHILE left <= right
            mid = left + (right - left) / 2
            IF arr[mid] == target
               RETURN mid
            ELSE IF arr[mid] > target
               right = mid - 1
            ELSE
               left = mid + 1
            END IF
         END WHILE
         RETURN -1  // Target not found
      END FUNCTION
      ```

**Key Differences and Considerations:**

- **Time Complexity:**
   - Linear Search: `O(n)` due to iterating through each element of the array.
   - Binary Search: `O(log n)` due to repeatedly dividing the search interval in half.

- **Space Complexity:**
   - Both solutions: `O(1)` as they only use a few extra variables for tracking indices and comparisons.

**Choosing the Right Approach:**

- Use linear search for small or unsorted arrays where the overhead of sorting or maintaining a sorted array is not justified.
- Use binary search for large, sorted arrays where the target value can be quickly found due to the logarithmic time complexity.


## Question 3b: 
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

## Solution 
**Intuition and Approach:**

The problem involves searching for a target value in a rotated sorted integer array. Here's how the two provided solutions tackle this:

**1. Linear Search (`linear_search`):**

   - **Intuition:** This method iterates through the array from the beginning to the end, checking each element against the target value. It returns the index of the target value if found, otherwise returns -1.
   - **Approach:**
      ```
      FUNCTION linear_search(arr, size, target)
         FOR i FROM 0 TO size - 1
            IF arr[i] == target
               RETURN i
            END IF
         END FOR
         RETURN -1  // Target not found
      END FUNCTION
      ```

**2. Rotational Binary Search (`rotational_binary_search`):**

   - **Intuition:** This approach leverages the fact that the array is a rotated sorted array. It modifies the traditional binary search to handle the rotation by checking which half of the array is properly sorted and adjusting the search interval accordingly.
   - **Approach:**
      ```
      FUNCTION rotational_binary_search(arr, size, target)
         left = 0
         right = size - 1
         WHILE left <= right
            mid = left + (right - left) / 2
            IF arr[mid] == target
               RETURN mid
            END IF
            // Determine which part of the array is sorted
            IF arr[left] <= arr[mid]
               // Left part is sorted
               IF arr[left] <= target AND target < arr[mid]
                  right = mid - 1
               ELSE
                  left = mid + 1
               END IF
            ELSE
               // Right part is sorted
               IF arr[mid] < target AND target <= arr[right]
                  left = mid + 1
               ELSE
                  right = mid - 1
               END IF
            END IF
         END WHILE
         RETURN -1  // Target not found
      END FUNCTION
      ```

**Key Differences and Considerations:**

- **Time Complexity:**
   - Linear Search: `O(n)` due to iterating through each element of the array.
   - Rotational Binary Search: `O(log n)` due to repeatedly dividing the search interval in half and handling the rotation.

- **Space Complexity:**
   - Both solutions: `O(1)` as they only use a few extra variables for tracking indices and comparisons.

**Choosing the Right Approach:**

- Use linear search for small or unsorted arrays where the overhead of sorting or maintaining a sorted array is not justified.
- Use rotational binary search for large, rotated sorted arrays where the target value can be quickly found due to the logarithmic time complexity.

## Question 4: 

Given an integer array `nums` sorted in **non-decreasing** order, return an array of **the squares of each number** sorted in *non-decreasing order*.


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

## Solution

**Intuition**

The problem aims to rearrange a given array where all the zero elements are moved to the end of the array. Here, two approaches are presented:

1. **Brute Force Approach:**
   - It creates a temporary array `temp` to store the non-zero elements.
   - It iterates through the original array and adds all the non-zero elements to the `temp` array.
   - After iterating through the original array, it adds the required number of zeros to the end of the `temp` array. (The number of zeros is equal to the number of zeros encountered in the original array).
   - Finally, it replaces the original array with the `temp` array.

2. **Optimal Solution Approach:**
   - It utilizes a two-pointer approach to achieve the in-place modification of the original array.
   - It maintains a write index (`write_idx`) that points to the position where the next non-zero element should be placed.
   - It iterates through the original array using a read index (`read_idx`).
   - If the element at the current `read_idx` is non-zero, it places that element at the `write_idx` position and increments both the `write_idx` and `read_idx`.
   - After iterating through the entire array, all the remaining positions starting from `write_idx` are filled with zeros.

**Pseudo Code**

```cpp
// Brute Force Approach
void moving_zeroes_brute_force(vector<int>& nums) {
  vector<int> temp;
  for (int num : nums) {
    if (num != 0) {
      temp.push_back(num);
    }
  }
  int zeros = nums.size() - temp.size();
  for (int i = 0; i < zeros; ++i) {
    temp.push_back(0);
  }
  nums = temp;
}

// Optimal Solution Approach
void moving_zeroes_optimal_solution(vector<int>& nums) {
  int write_idx = 0;
  for (int read_idx = 0; read_idx < nums.size(); ++read_idx) {
    if (nums[read_idx] != 0) {
      nums[write_idx] = nums[read_idx];
      write_idx++;
    }
  }
  for (int i = write_idx; i < nums.size(); ++i) {
    nums[i] = 0;
  }
}
```

**Time Complexity**

- **Brute Force Approach:** O(N^2). In the worst case, it iterates twice through the entire array, resulting in a time complexity of O(N^2).
- **Optimal Solution Approach:** O(N). It iterates through the array only once, leading to a time complexity of O(N).

**Space Complexity**

- **Brute Force Approach:** O(N). It creates a temporary array to store the non-zero elements, resulting in a space complexity of O(N).
- **Optimal Solution Approach:** O(1). It modifies the original array in-place, without any additional space requirements.

In conclusion, the optimal solution approach is preferred due to its lower time complexity and efficient space utilization.

## Question 5: Rearrange Array

Given an array `arr[]` of size `N` where every element is in the range from 0 to `N-1`, rearrange the given array so that the transformed array `arr^T[i]` becomes `arr[arr[i]]`.

**Note:** `arr` and `arr^T` are the same variables, representing the array before and after transformation, respectively.

### Example 1:
```
Input:
2
1 0

Output: 
0 1

Explanation: 
arr[arr[0]] = arr[1] = 0
arr[arr[1]] = arr[0] = 1
So, arr^T becomes {0, 1}
```

### Example 2:
```
Input:
5
4 0 2 1 3

Output: 
3 4 2 0 1

Explanation: 
arr[arr[0]] = arr[4] = 3
arr[arr[1]] = arr[0] = 4
arr[arr[2]] = arr[2] = 2
arr[arr[3]] = arr[1] = 0
arr[arr[4]] = arr[3] = 1
So, arr^T becomes {3, 4, 2, 0, 1}
```

### Input Format:
- The first line contains an integer `N` (1 ≤ N ≤ 1e5) — the size of the array.
- The second line contains `N` space-separated integers `arr[i]` (0 ≤ arr[i] < N).

### Output Format:
- Output the rearranged array `arr^T` as a single line of `N` space-separated integers.

### Your Task:
The task is to complete the function `arrange(arr, N)` which takes `arr` and `N` as input parameters and rearranges the elements in the array in-place.

### Constraints:
- `1 <= N <= 1e5`
- `0 <= arr[i] < N`


## Solution

**Intuition and Approach:**

The problem involves rearranging an integer array such that each element at index `i` gets the value of the element at the index which is the value at index `i`. Here's how the two provided solutions tackle this:

**1. Brute Force Approach (`bruteForce_arrange`):**

   - **Intuition:** This method uses an additional temporary array to store the rearranged values based on the original array's values.
   - **Approach:**
      ```
      FUNCTION bruteForce_arrange(arr, n)
         CREATE temp ARRAY of size n
         FOR i FROM 0 TO n-1
            temp[i] = arr[arr[i]]
         END FOR
         FOR i FROM 0 TO n-1
            arr[i] = temp[i]
         END FOR
      END FUNCTION
      ```

**2. Optimal Solution (`optimal_arrange`):**

   - **Intuition:** This approach modifies the original array in-place without using extra space by encoding two values at each index: the original value and the new value.
   - **Approach:**
      ```
      FUNCTION optimal_arrange(arr, n)
         FOR i FROM 0 TO n-1
            val = arr[i]
            arr[i] = val + (arr[val] % n) * n
         END FOR
         FOR i FROM 0 TO n-1
            arr[i] = arr[i] / n
         END FOR
      END FUNCTION
      ```

**Key Differences and Considerations:**

- **Time Complexity:**
   - Brute Force: `O(n)` for the first loop to fill the temporary array, and `O(n)` for the second loop to copy values back to the original array, resulting in a total of `O(2n)` = `O(n)`.
   - Optimal: `O(n)` for the first loop to encode values, and `O(n)` for the second loop to decode values, resulting in a total of `O(2n)` = `O(n)`.

- **Space Complexity:**
   - Brute Force: `O(n)` due to the creation of the temporary array `temp`.
   - Optimal: `O(1)` as it modifies the original array in-place.

**Choosing the Right Approach:**

- For small arrays, the difference in space complexity might be negligible.
- For larger datasets, the optimal solution becomes significantly more efficient due to its lower space usage and avoiding extra copying.
- If modifying the original array is not allowed, you might need to adapt the brute force approach to avoid overwriting.

## Question 6:

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

## Solution

**Intuition and Approach:**

The problem involves finding the maximum sum of a contiguous subarray within a given integer array. Here's how the two provided solutions tackle this:

**1. Brute Force Approach (`bruteForce_max_subarray_sum`):**

   - **Intuition:** This method examines all possible subarrays to determine the maximum subarray sum. It uses a nested loop to consider each subarray starting at every index and ending at every index after the start.
   - **Approach:**
      ```
      FUNCTION bruteForce_max_subarray_sum(nums)
         max_sum = INT_MIN  // Initialize to the smallest possible integer
         FOR i FROM 0 TO size of nums - 1
            current_sum = 0
            FOR j FROM i TO size of nums - 1
               current_sum = current_sum + nums[j]
               max_sum = MAX(max_sum, current_sum)
            END FOR
         END FOR
         RETURN max_sum
      END FUNCTION
      ```

**2. Optimal Solution (`optimal_max_subarray_sum`):**

   - **Intuition:** This approach, known as Kadane's algorithm, maintains a running sum of the maximum subarray ending at the current position. If the running sum becomes negative, it is reset to the current element because any subarray starting with a negative sum would be less than the current element alone.
   - **Approach:**
      ```
      FUNCTION optimal_max_subarray_sum(nums)
         max_sum = INT_MIN  // Initialize to the smallest possible integer
         sum = 0  // Running sum of the current subarray
         FOR each num IN nums
            sum = MAX(num, sum + num)  // Update running sum
            max_sum = MAX(max_sum, sum)  // Update maximum sum
         END FOR
         RETURN max_sum
      END FUNCTION
      ```

**Key Differences and Considerations:**

- **Time Complexity:**
   - Brute Force: `O(n^2)` due to the nested loops that examine all possible subarrays.
   - Optimal: `O(n)` due to the single loop through the array.

- **Space Complexity:**
   - Both solutions: `O(1)` as they only use a few extra variables for tracking sums and maximums.

**Choosing the Right Approach:**

- For small arrays, the brute force approach may be sufficient.
- For larger arrays, the optimal solution (Kadane's algorithm) is significantly more efficient due to its linear time complexity.

## Lecture 2(1 hr)

- Strings(array of characters)
- Problems on Strings

## Question 1:
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

## Solution

**Intuition and Approach:**

The problem is to group anagrams from a list of strings. An anagram is a word formed by rearranging the letters of another word. Here's how the two provided solutions tackle this problem:

**1. Using Hashmap (`groupAnagrams1`):**

   - **Intuition:** By sorting each string, we can use the sorted string as a key to group anagrams together.
   - **Approach:**
      ```
      FUNCTION groupAnagrams1(strs)
         DECLARE anagramMap as a hashmap

         FOR each str IN strs
            sortedStr = SORTED str
            anagramMap[sortedStr].ADD str
         END FOR

         DECLARE result as an empty list
         FOR each pair IN anagramMap
            ADD pair.second to result
         END FOR

         RETURN result
      END FUNCTION
      ```

**2. Without Using Hashmap (`groupAnagrams2`):**

   - **Intuition:** By sorting each string and maintaining both the original and sorted versions, we can sort this list and then group anagrams based on the sorted strings.
   - **Approach:**
      ```
      FUNCTION groupAnagrams2(strs)
         DECLARE sortedStrs as an empty list

         FOR each str IN strs
            sortedStr = SORTED str
            ADD (sortedStr, str) to sortedStrs
         END FOR

         SORT sortedStrs based on the first element of each pair

         DECLARE result as an empty list
         DECLARE currentGroup as an empty list
         currentKey = first element of the first pair in sortedStrs

         FOR each pair IN sortedStrs
            IF pair.first EQUALS currentKey
               ADD pair.second to currentGroup
            ELSE
               ADD currentGroup to result
               currentGroup = [pair.second]
               currentKey = pair.first
            END IF
         END FOR

         ADD currentGroup to result
         RETURN result
      END FUNCTION
      ```

**Key Differences and Considerations:**

- **Time Complexity:**
   - Using Hashmap: Sorting each string takes `O(k log k)` where `k` is the length of the string. The overall complexity is `O(n k log k)` where `n` is the number of strings.
   - Without Hashmap: Similar sorting complexity `O(n k log k)` but includes additional sorting of the pairs `O(n log n)`.

- **Space Complexity:**
   - Using Hashmap: `O(n k)` due to the hashmap storing all strings.
   - Without Hashmap: `O(n k)` due to the list of pairs.

**Choosing the Right Approach:**

- The hashmap approach (`groupAnagrams1`) is more intuitive and straightforward, especially when dealing with large datasets.
- The non-hashmap approach (`groupAnagrams2`) can be useful in environments where hashmaps are not available or preferred.
