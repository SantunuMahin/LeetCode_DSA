//link : https://leetcode.com/problems/maximum-depth-of-binary-tree/description/
//104. Maximum Depth of Binary Tree
/**
Given the root of a binary tree, return its maximum depth.

A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
*/

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)return 0;

        if(root->left == NULL && root->right == NULL)return 1;

        int l = maxDepth(root->left);
        int r = maxDepth(root->right);
        return max(l,r)+1;
    }
};

/**
📝 Maximum Depth of Binary Tree — Summary

This code calculates the maximum depth (height) of a binary tree using recursion (DFS).

If the node is NULL, return 0.

If the node is a leaf, return 1.

Recursively compute the depth of the left and right subtrees.

Return the maximum of both depths + 1 (for the current node).

⏱ Complexity

Time: O(N) — visits each node once

Space: O(H) — recursion stack (H = tree height)

🔥 Key Idea

Uses Depth-First Search (DFS) to compute the longest path from root to a leaf.
*/
