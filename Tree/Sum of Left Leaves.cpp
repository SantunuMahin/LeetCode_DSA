//404. Sum of Left Leaves
//https://leetcode.com/problems/sum-of-left-leaves/description/
/**Given the root of a binary tree, return the sum of all left leaves.

A leaf is a node with no children. A left leaf is a leaf that is the left child of another node.*/
class Solution {
public:
    void halper(TreeNode* root, int &sum){
        if(root == NULL) return;
        if(root->left && root->left->left == NULL && root->left->right == NULL)
            {
                sum+=root->left->val;
            }     
        halper(root->left,sum);
        halper(root->right,sum);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum =0;
        halper(root,sum);
        return sum;
    }
};
/**
📝 Sum of Left Leaves — Summary

This code calculates the sum of all left leaf nodes in a binary tree using recursion (DFS).

If the current node is NULL, return.

Check if the left child exists and is a leaf (no left or right children).

If yes, add its value to sum.

Recursively traverse both left and right subtrees.

Return the final sum.

⏱ Complexity

Time: O(N) — visits every node once

Space: O(H) — recursion stack (H = tree height)

🔥 Key Idea

Uses Depth-First Search (DFS) to find and accumulate values of only left leaf nodes.
*/
