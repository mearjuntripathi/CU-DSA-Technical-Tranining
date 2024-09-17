# Lecture Day 6

## Question 1:

You are given an array consisting of 'N' elements and you need to perform 'Q' queries on the given array. Each query consists of an integer which tells the number of elements by which you need to left rotate the given array. For each query return the final array obtained after performing the left rotations.

**Note:**

Perform each query on the original array only i.e. every output should be according to the original order of elements.
Example:

Let the array be [1, 2, 3, 4, 5, 6] and the queries be {2, 4, 1}. For every query, we’ll perform the required number of left rotations on the array.

For the first query, rotate the given array to the left by 2 elements, so the resultant array is: [3, 4, 5, 6, 1, 2].

For the second query, rotate the given array to the left by 4 elements, so the resultant array is: [5, 6, 1, 2, 3, 4].

For the third query, rotate the given array to the left by 1 element, so the resultant array is: [2, 3, 4, 5, 6, 1].

[Solve a Problem](https://www.naukri.com/code360/problems/left-rotations-of-an-array_985298)

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

## Solution

### Intuition and Approach

**Intuition:**

The problem is to perform left rotations on an array for given queries and return the resulting arrays. Each query specifies the number of left rotations to be performed on the array. The approach involves shifting the elements of the array to the left by a given number of positions for each query.

**Approach:**

1. **Initialization**:
   - Read the number of test cases.
   - For each test case, read the size of the array and the number of queries.
   - Read the elements of the array.
   - Read the rotation queries.

2. **Processing Rotations**:
   - For each query:
     - Calculate the effective rotation (`query % size`) to handle cases where the number of rotations is greater than the array size.
     - Perform the left rotation by slicing the array at the rotation index and appending the two parts in reverse order.
     - Store the result of each rotation.

3. **Output**:
   - Print the resulting arrays after each query.

### Pseudo Code

```
FUNCTION leftRotationsOfArray(nums: ARRAY, queries: ARRAY) RETURNS ARRAY:
    INITIALIZE results AS EMPTY ARRAY
    SET size AS LENGTH OF nums

    FOR EACH query IN queries:
        INITIALIZE temp AS EMPTY ARRAY
        IF size == query OR size == 1:
            APPEND nums TO results
            CONTINUE
        IF size < query:
            SET query = query % size
        FOR i FROM query TO size-1:
            APPEND nums[i] TO temp
        FOR i FROM 0 TO query-1:
            APPEND nums[i] TO temp
        APPEND temp TO results

    RETURN results
END FUNCTION

FUNCTION main() RETURNS VOID:
    READ time
    WHILE time > 0:
        READ n, q
        INITIALIZE nums AS EMPTY ARRAY
        FOR i FROM 0 TO n-1:
            READ temp
            APPEND temp TO nums
        INITIALIZE queries AS EMPTY ARRAY
        FOR i FROM 0 TO q-1:
            READ temp
            APPEND temp TO queries

        SET results = leftRotationsOfArray(nums, queries)
        FOR EACH result IN results:
            FOR EACH value IN result:
                PRINT value + ' '
            PRINT NEWLINE
        PRINT NEWLINE
        DECREMENT time
END FUNCTION
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

## Solution

### Intuition and Approach

The goal is to rearrange a sequence of numbers such that they follow a zigzag pattern. In a zigzag pattern:
- At even indices (0-based), the number should be less than the next number.
- At odd indices, the number should be greater than the next number.

### Intuition:

1. **Brute Force Approach:**
   - **Sorting:** First, sort the numbers. This gives a baseline where numbers are in increasing order.
   - **Swapping:** To create the zigzag pattern, iterate through the sorted list and swap adjacent elements in pairs. This ensures that every second element is less than its following element, which should create the zigzag pattern.

2. **Optimal Approach:**
   - **Direct Adjustments:** Instead of sorting the array first, directly adjust the elements based on their position:
     - For even indices, ensure the current element is less than the next element.
     - For odd indices, ensure the current element is greater than the next element.
   - This avoids the need for sorting and directly arranges the elements into the zigzag pattern in a single pass.

### Pseudo Code

**Brute Force Approach:**

1. **Sort the Array:**
   - Sort the list of numbers in ascending order.

2. **Rearrange:**
   - Iterate over the sorted list, starting from index 1 and moving in steps of 2.
   - Swap the current element with the next element.

```plaintext
FUNCTION bruteForce_zigzag(nums: LIST OF INT):
    SORT nums
    n = LENGTH(nums)
    FOR i FROM 1 TO n - 2 STEP 2:
        SWAP nums[i] WITH nums[i + 1]
    RETURN
```

**Optimal Approach:**

1. **Adjust Elements:**
   - Iterate over the list from the start to the second last element.
   - For even indices, if the current element is not less than the next element, swap them.
   - For odd indices, if the current element is not greater than the next element, swap them.

```plaintext
FUNCTION optimal_zigzag(nums: LIST OF INT):
    n = LENGTH(nums)
    FOR i FROM 0 TO n - 2:
        IF i % 2 == 0:   // Even index
            IF nums[i] >= nums[i + 1]:
                SWAP nums[i] WITH nums[i + 1]
        ELSE:            // Odd index
            IF nums[i] <= nums[i + 1]:
                SWAP nums[i] WITH nums[i + 1]
    RETURN
```

### Explanation:

- **Brute Force Approach:**
  - **Sorting**: Ensures the initial order is predictable.
  - **Swapping**: Adjusts the sorted order to fit the zigzag pattern.

- **Optimal Approach:**
  - **Direct Adjustments**: Ensures the zigzag pattern by making swaps only when necessary, avoiding the overhead of sorting. This approach works in linear time relative to the size of the input.

**Constraints:**

- 1 <= s.length <= 1000
- `s` consists of English letters (lower-case and upper-case), `','` and `'.'`.
- 1 <= numRows <= 1000

## Question 3:

Problem statement
You have been given ‘K’ different arrays/lists, which are sorted individually (in ascending order). You need to merge all the given arrays/list such that the output array/list should be sorted in ascending order.

[Solve this Problem](https://www.naukri.com/code360/problems/merge-k-sorted-arrays_975379)

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

## Solution

### Intuition and Approach

The task is to merge `k` sorted arrays into a single sorted array. This problem can be broken down into two main steps:

1. **Merge Two Sorted Arrays**: Develop a function to merge two sorted arrays into one sorted array.
2. **Merge Multiple Sorted Arrays**: Utilize the function from step 1 to iteratively merge all `k` sorted arrays into a single sorted array.

### Intuition

1. **Merging Two Sorted Arrays**:
   - Use a two-pointer technique to merge two sorted arrays into a single sorted array. This involves comparing the current elements of both arrays and adding the smaller element to the result array until one of the arrays is exhausted.
   - After one array is exhausted, append the remaining elements of the other array to the result.

2. **Merging Multiple Sorted Arrays**:
   - Start with the first array as the initial result.
   - Iteratively merge this result with each of the remaining `k-1` arrays using the function from step 1.
   - This iterative approach ensures that at each step, the arrays being merged are already sorted.

### Approach

1. **Merge Function**:
   - Initialize pointers for both input arrays.
   - Compare the current elements from both arrays and add the smaller one to the result.
   - Continue until all elements from both arrays are processed.

2. **Merge k Sorted Arrays**:
   - Initialize the result with the first array.
   - Use the merge function to iteratively merge this result with the next array.
   - Continue until all `k` arrays are merged.

### Pseudo Code

**Merge Two Sorted Arrays**:

```plaintext
FUNCTION merge(array1, array2):
    Initialize pointers i = 0 and j = 0
    Initialize an empty result array

    WHILE i < LENGTH(array1) AND j < LENGTH(array2):
        IF array1[i] < array2[j]:
            Append array1[i] to result
            Increment i
        ELSE:
            Append array2[j] to result
            Increment j

    WHILE i < LENGTH(array1):
        Append array1[i] to result
        Increment i

    WHILE j < LENGTH(array2):
        Append array2[j] to result
        Increment j

    RETURN result
```

**Merge k Sorted Arrays**:

```plaintext
FUNCTION mergeKSortedArrays(kArrays, k):
    Initialize temp with kArrays[0]

    FOR i FROM 1 TO k-1:
        temp = merge(temp, kArrays[i])

    RETURN temp
```

### Explanation

- **Merge Function**:
  - This function efficiently merges two sorted arrays into one sorted array using a two-pointer technique. It handles the merging in linear time relative to the size of the input arrays.

- **Merge k Sorted Arrays**:
  - This function leverages the merge function to combine multiple sorted arrays. By iteratively merging each array with the accumulated result, it ensures that the final result is sorted.

### Complexity

- **Time Complexity**:
  - Merging two arrays: \(O(n_1 + n_2)\), where \(n_1\) and \(n_2\) are the sizes of the two arrays.
  - Merging `k` arrays: Each merge operation involves merging arrays of increasing size, leading to a total time complexity of \(O(N \log k)\), where \(N\) is the total number of elements across all arrays.

- **Space Complexity**:
  - The space complexity is \(O(N)\) due to the additional space needed to store the merged result.
  