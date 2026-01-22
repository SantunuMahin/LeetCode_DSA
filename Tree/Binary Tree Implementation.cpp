#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->right = NULL;
        this->val = val;
        this->left = NULL;
    }
};

void print_preord(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";

    print_preord(root->left);
    print_preord(root->right);
}
void print_inord(Node* root){
    if(root == NULL) return;

    print_inord(root->left);
    cout<<root->val<<" ";
    print_inord(root->right);
}
void print_postord(Node* root){
    if(root == NULL) return;

    print_postord(root->left);
    print_postord(root->right);
    cout<<root->val<<" ";
}
int main() {
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);

    root->left = a;
    root->right = b;

    a->left = c;

    b->left = d;
    b->right = e;

    print_preord(root);
    cout<<endl;
    print_inord(root);
    cout<<endl;
    print_postord(root);
    
    return 0;
}