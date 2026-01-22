/**
Binary Tree Traversal Program Summary
This C++ program demonstrates how to create and traverse a binary tree using three common
depth-first traversal methods.
1. Node Structure:
The program defines a Node class that stores an integer value and two pointers: left and right,
representing the left and right children of the node.
2. Tree Construction:
In the main function, six nodes are created and connected manually to form a binary tree with the
root value 10. The tree has left and right subtrees, showing a simple hierarchical structure.
3. Traversal Methods:- Preorder Traversal (Root → Left → Right): Prints the current node first, then recursively visits the
left and right subtrees.- Inorder Traversal (Left → Root → Right): Prints the left subtree first, then the current node, and
finally the right subtree.- Postorder Traversal (Left → Right → Root): Prints both subtrees first and then the current node.
4. Key Concepts:
The program demonstrates recursion, pointer-based tree structures, and depth-first traversal
techniques, which are fundamental concepts in data structures and algorithms.
This code is useful for understanding how binary trees work and how different traversal strategies
affect the order in which nodes are processed.

.online: https://claude.ai/public/artifacts/54649641-9b0c-417f-a1c2-91933d0d31c3
*/

#include 
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Preorder Traversal
void print_preord(Node* root) {
    if(root == NULL) return;
    cout << root->val << " ";
    print_preord(root->left);
    print_preord(root->right);
}

// Inorder Traversal
void print_inord(Node* root) {
    if(root == NULL) return;
    print_inord(root->left);
    cout << root->val << " ";
    print_inord(root->right);
}

// Postorder Traversal
void print_postord(Node* root) {
    if(root == NULL) return;
    print_postord(root->left);
    print_postord(root->right);
    cout << root->val << " ";
}

int main() {
    // Create tree nodes
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);
    
    // Build tree structure
    //       10
    //      /  \
    //    20    30
    //   /     /  \
    //  40    50   60
    
    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;
    
    // Perform traversals
    cout << "Preorder Traversal: ";
    print_preord(root);
    cout << endl;
    
    cout << "Inorder Traversal: ";
    print_inord(root);
    cout << endl;
    
    cout << "Postorder Traversal: ";
    print_postord(root);
    cout << endl;
    
    return 0;
}


