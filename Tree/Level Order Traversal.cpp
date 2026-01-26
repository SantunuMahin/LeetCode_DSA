
//https://www.naukri.com/code360/problems/level-order-traversal_796002?leftPanelTabValue=PROBLEM
/**Problem statement
You have been given a Binary Tree of integers. You are supposed to return the level order traversal of the given tree.
*/

#include <bits/stdc++.h> 
using namespace std;
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void halper(BinaryTreeNode<int> *root, vector<int> &vec){
    if(root == NULL)return;

    queue<BinaryTreeNode<int>*> q;
    q.push(root);

    while(!q.empty()){
        BinaryTreeNode<int>* f = q.front();
        q.pop();

        vec.push_back(f->val);

        if(f->left)q.push(f->left);
        if(f->right)q.push(f->right);
    }
}
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    vector<int> vec;
    halper(root,vec);
    return vec;
}

/**📝 Level Order Traversal Summary

This code performs a level-order traversal (BFS) of a binary tree using a queue.

If the tree is empty, it returns immediately.

The root node is pushed into a queue.

While the queue is not empty:

Take the front node

Store its value in a vector

Push its left and right children into the queue (if they exist)

Finally, return the vector containing all node values in top-to-bottom, left-to-right order

⏱ Complexity

Time: O(N) — visits each node once

Space: O(N) — queue stores nodes

🔥 Key Idea

Uses Breadth-First Search (BFS) to traverse the tree level by level.
*/
