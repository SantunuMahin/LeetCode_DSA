// Day 17 : Count Leaf Nodes
// link: https://www.naukri.com/code360/problems/count-leaf-nodes_893055?leftPanelTabValue=PROBLEM
/**
Problem statement
You are given a Binary tree. You have to count and return the number of leaf nodes present in it.

A binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child

A node is a leaf node if both left and right child nodes of it are NULL.
*/
/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/

int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 1;
    int l = noOfLeafNodes(root->left);
    int r = noOfLeafNodes(root->right);
    return l+r;
}

/**
📝 Number of Leaf Nodes — Summary

This function counts the total number of leaf nodes in a binary tree using recursion (DFS).

If the current node is NULL, return 0.

If the node has no left and right children, it is a leaf, so return 1.

Recursively count leaf nodes in the left and right subtrees.

Return the sum of both counts.

⏱ Complexity

Time: O(N) — visits every node once

Space: O(H) — recursion stack (H = tree height)

🔥 Key Idea

Uses Depth-First Search (DFS) to identify and count only nodes with no children.
*/
