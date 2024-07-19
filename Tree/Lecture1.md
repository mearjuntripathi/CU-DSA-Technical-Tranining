## Question 1 : [ Binary](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/)[ Tree](https://www.geeksforgeeks.org/find-the-maximum-depth-or-height-of-a-tree/)[ Basics](https://leetcode.com/problems/diameter-of-binary-tree/description/)
Given an integer array nums where the elements are sorted in ascending order, convert it to a 
height-balanced binary search tree also find the height and daimeter of the tree.
- The height of the tree is the number of vertices in the tree from the root to the deepest node.
- The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

**Note** The length of a path between two nodes is represented by the number of edges between them.

Example 1:

```
Input: nums = [-10,-3,0,5,9]
Output: [0,-3,9,-10,null,5] , Height=3 ,Daimeter=4
```
Example 2:

```
Input: nums = [1,3]
Output: [3,1] , Height=2 , Daimeter=1
```

Constraints:

- 1 <= nums.length <= 10^4
- -10^2 <= nums[i] <= 10^2
- nums is sorted in a strictly increasing order.


## Question 2 :[ Mirror ](https://www.geeksforgeeks.org/write-an-efficient-c-function-to-convert-a-tree-into-its-mirror-tree/)[ and check is Symmetric or not](https://leetcode.com/problems/symmetric-tree/description/)

Given a binary tree, the task is to convert the binary tree into its Mirror tree. Mirror of a Binary Tree T is another Binary Tree M(T) with left and right children of all non-leaf nodes interchanged and also check whether it is a mirror of itself (i.e., symmetric around its center).

The idea is to traverse recursively and swap the right and left subtrees after traversing the subtrees.

Example 1:

```
Input: root = [1,2,2,3,4,4,3]
Output: root1=[1,2,2,3,4,4,3] , isSymmetric=true
```
Example 2:

```
Input: root = [1,2,2,null,3,null,3]
Output: root1=[1,2,2,3,null,3,null] , isSymmetric=truefalse
```

Constraints:

- The number of nodes in the tree is in the range [1, 1000].
- -100 <= Node.val <= 100

## Question 3: [ Identical trees](https://www.geeksforgeeks.org/write-c-code-to-determine-if-two-trees-are-identical/)

Write a function to determine if two trees are identical or not:

Two trees are identical when they have the same data and the arrangement of data is also the same

Examples:
```
Input:             1                    1
                 /   \                /   \
               2      3            2      3
             /                    /
           4                   4

Output: True
```
```
Input:             1                    1
                 /   \                /   \
               2      3            5      3
                     /             /
                  4             4

Output: False
```

## Question 4: [ Unique Traversal](https://www.geeksforgeeks.org/zigzag-tree-traversal/)

Write a function to print Unique order traversal of a binary tree.
- Start from the root node and traverse the tree in level order.
- Traverse starting from root then from right to left and left to right, vice versa. 

```
Input:root=[1,2,3,7,6,5,4]
Output: ans=[1,3,2,7,6,5,4]
```

## Question 5 : [ Largest Element in each level of Tree](https://www.geeksforgeeks.org/largest-value-level-binary-tree/)

Given the root of a binary tree, return an array of the largest value in each row of the tree (0-indexed).


Example 1:

```
Input: root = [1,3,2,5,3,null,9]
Output: [1,3,9]
```

Example 2:
```
Input: root = [1,2,3]
Output: [1,3]
``` 

Constraints:

- The number of nodes in the tree will be in the range [0, 104].
- -2^31 <= Node.val <= 2^31 - 1

## Question 6: [ Maximum Gcd Of siblings of bst](https://www.naukri.com/code360/library/find-maximum-gcd-value-from-root-to-leaf-in-a-binary-tree)[ .](https://leetcode.com/discuss/interview-question/396996/Google-or-OA-Summer-Intern-2020-or-Greatest-Common-Divisor)

- GCD (Greatest Common Divisor) of two positive integers is the largest positive integer that divides both numbers without a remainder.
- Siblings: Nodes with the same parent are called siblings.
- Level of a tree: Level of a tree is the number of edges on the longest path from the root node to a leaf.

You are given nodes of a binary tree of leven n as input. Caluclate the GCD of each pair of siblings and then find the max GCD among them.

Note:
Print -1 if input tree is empty i.e level of tree is -1.
Consider those nodes which have a sibling
Print 0 if no such pair of siblings found

Example:
```
Input :root=[60,28,20,8,null,10,18,null,null,5,null,null,3]
Output :5
```

Constraints:
- -1 <= level of tree <= 20
- 0 < element at nodes of tree <= 500

## Question 7: [ Kth Largest Element in tree](https://www.geeksforgeeks.org/kth-largest-element-bst-using-constant-extra-space/)

Given the root of a binary search tree, and an integer k, return the kth smallest value (1-indexed) of all the values of the nodes in the tree.


Example 1:

```
Input: root = [3,1,4,null,2], k = 1
Output: 1
```

Example 2:

```
Input: root = [5,3,6,2,4,null,null,1], k = 3
Output: 3
``` 

Constraints:

- The number of nodes in the tree is n.
- 1 <= k <= n <= 10^4
- 0 <= Node.val <= 10^4
 
## Question 8:[ Unique BST](https://www.naukri.com/code360/problems/unique-binary-search-trees_1266110)


Given an integer n, return the number of structurally unique BST's (binary search trees) which has exactly n nodes of unique values from 1 to n.

 

Example 1:

```
Input: n = 3
Output: 5
```
Example 2:
```
Input: n = 1
Output: 1
```

Constraints:

- 1 <= n <= 19

## Question 9:[ Vertical Order Traversal](https://www.naukri.com/code360/problems/vertical-order-traversal_920533)

Given a binary tree, return the vertical order traversal of the values of the nodes of the given tree.

For each node at position (X, Y), (X-1, Y-1) will be its left child position while (X+1, Y-1) will be the right child position.

Running a vertical line from X = -infinity to X = +infinity, now whenever this vertical line touches some nodes, we need to add those values of the nodes in order starting from top to bottom with the decreasing ‘Y’ coordinates.

**Note:**
If two nodes have the same position, then the value of the node that is added first will be the value that is on the left side.

Constraints:
- 1 <= 'T' <= 100
- 0 <= 'N' <= 3000
- 0 <= 'VAL' <= 10^5

Where 'VAL' is the value of any binary tree node.

Time Limit: 1 sec

```
Sample Input 1:
2
1 2 3 4 -1 -1 -1 -1 -1
1 -1 2 -1 -1
Sample Output 1:
4 2 1 3 
1 2 
```

```Sample Input 2:
2
2 1 -1 -1 -1
0 1 2 4 5 3 6 -1 -1 7 -1 -1 -1 -1 -1 -1 -1
Sample Output 2:
1 2
4 1 7 0 5 3 2 6 
```

## Question 10:[ Alternate nodes of each level of bst](https://www.naukri.com/code360/library/print-alternate-nodes-from-all-levels-of-a-binary-tree)


In this question, we are given a binary tree and we have to print all the nodes level-wise from left to right but in every level, we have to print only the alternate nodes.

 

Example
```
Input

![alt text](<Screenshot 2024-07-18 123456.png>)
 

Output:

8

3

1 14

4 13
```

Like here in level 1 we can print 8 than in level 2 we will print 3 then we will not print next node that is 10 similarly in the third level we will print 1 then 14 leaving 6 and in the final level, we will print 4 and 13 leaving 7 because we have to print alternate nodes in every level


**Special** [ Extreme nodes of each Level of bst](https://www.geeksforgeeks.org/print-extreme-nodes-of-each-level-of-binary-tree-in-alternate-order/)


## Question 11:[ Construct Bst from Preorder Traversal,](https://www.geeksforgeeks.org/construct-bst-from-given-preorder-traversa/)[ Inorder Traversal, ](https://www.geeksforgeeks.org/construct-binary-tree-from-inorder-traversal/)[ Postorder Traversal](https://www.geeksforgeeks.org/construct-a-binary-search-tree-from-given-postorder/)

Given the input of either preorder or inorder or postorder traversal of a binary search tree, construct the BST.
- if k=0 : Preoder Traversal
- if k=1 : inorder Traversal
- if k=2: Postorder Traversal

Examples:
```
Input: {10, 5, 1, 7, 40, 50} , k=0;
Output:          10
               /   \
              5     40
           /  \       \
          1    7       50
```

## Question 12:[ Check Subtree](https://www.geeksforgeeks.org/check-if-a-binary-tree-is-subtree-of-another-binary-tree/)

Given two binary trees, check if the first tree is a subtree of the second one. A subtree of a tree T is a tree S consisting of a node in T and all of its descendants in T. The subtree corresponding to the root node is the entire tree; the subtree corresponding to any other node is called a proper subtree.

Examples:       
```
Input:  

      Tree S
          10  
        /    \ 
      4       6
       \
        30

        Tree T
              26
            /   \
          10     3
        /    \     \
      4       6      3
       \
        30
Output: True
```

## Question 14:[ Single Valued Subtree](https://www.geeksforgeeks.org/find-count-of-singly-subtrees/)

Given a binary tree, write a program to count the number of Single Valued Subtrees. A Single Valued Subtree is one in which all the nodes have same value. Expected time complexity is O(n).

Example1 : 

```
Input: root of below tree
              5
             / \
            1   5
           / \   \
          5   5   5
Output: 4
There are 4 subtrees with single values.
```

Example 2:

```
Input: root of below tree
              5
             / \
            4   5
           / \   \
          4   4   5                
Output: 5
There are five subtrees with single values
```

## Question 15:[ Print Ancestors of given element](https://www.geeksforgeeks.org/print-ancestors-of-a-given-node-in-binary-tree/)

Given a Binary Tree and a key, write a function that prints all the ancestors of the key in the given binary tree. 

For example:
```
Input: The key is 7

              1
            /   \
          2      3
        /  \
      4     5
     /
    7

Output:function should print 4, 2, and 1.
```

## Question 16: [ Maximum Sum Leaf to root path](https://www.geeksforgeeks.org/find-the-maximum-sum-path-in-a-binary-tree/)


You are given a binary tree of 'N' nodes.

Your task is to find the path from the leaf node to the root node which has the maximum path sum among all the root to leaf paths.
Example:
```
Input:

                  10
               /      \
             -2        7
           /   \     
          8     -4
Output : 17
```
**Explanation:** The following tree, there are three leaf to root paths 8->-2->10, -4->-2->10 and 7->10. The sums of these three paths are 16, 4 and 17 respectively. The maximum of them is 17 and the path for maximum is 7->10. 

## Question 17 : [ Remove Node Outside given Range](https://www.geeksforgeeks.org/remove-bst-keys-outside-the-given-range/)

Given a Binary Search Tree (BST) and a range [min, max], remove all keys which are outside the given range. The modified tree should also be BST. 


Examples:

**Input :** 



![alt text](<Screenshot 2024-07-18 141406.png>)


**Output:**



![alt text](<Screenshot 2024-07-18 141417.png>)


## Question 18:[ Pair with given Sum](https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/)

Given the root of a binary search tree and an integer k, return true if there exist two elements in the BST such that their sum is equal to k, or false otherwise.

 

Example 1:

```
Input: root = [5,3,6,2,4,null,7], k = 9
Output: true
```

Example 2:

```
Input: root = [5,3,6,2,4,null,7], k = 28
Output: false
```

Constraints:

- The number of nodes in the tree is in the range [1, 104].
- -10^4 <= Node.val <= 10^4
- root is guaranteed to be a valid binary search tree.
- -10^5 <= k <= 10^5

## Question 19: [Sum Tree](https://www.geeksforgeeks.org/check-if-a-given-binary-tree-is-sumtree/)


Write a function that returns true if the given Binary Tree is SumTree else false. A SumTree is a Binary Tree where the value of a node is equal to the sum of the nodes present in its left subtree and right subtree. An empty tree is SumTree and the sum of an empty tree can be considered as 0. A leaf node is also considered as SumTree.

Example:
```
Input:
          26
         /   \
       10     3
     /    \     \
    4      6     3

Output: True

```

## Question 20 [House robbery ](https://leetcode.com/problems/house-robber-iii/description/)

The thief has found himself a new place for his thievery again. There is only one entrance to this area, called root.

Besides the root, each house has one and only one parent house. After a tour, the smart thief realized that all houses in this place form a binary tree. It will automatically contact the police if two directly-linked houses were broken into on the same night.

Given the root of the binary tree, return the maximum amount of money the thief can rob without alerting the police.

Example 1:

```
Input: root = [3,2,3,null,3,null,1]
Output: 7
Explanation: Maximum amount of money the thief can rob = 3 + 3 + 1 = 7.
```
Example 2:

```
Input: root = [3,4,5,1,3,null,1]
Output: 9
Explanation: Maximum amount of money the thief can rob = 4 + 5 = 9.
```

Constraints:

- The number of nodes in the tree is in the range [1, 104].
- 0 <= Node.val <= 104
