//link: https://www.naukri.com/code360/problems/code-find-a-node_5682?leftPanelTabValue=PROBLEM
/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    // Write your code here
   queue<BinaryTreeNode<int>*>q;
   q.push(root);
   while(!q.empty()){
       // ber kora
       BinaryTreeNode<int>* f = q.front();
       q.pop();

       //kaj 
       if(f->data == x)return true;

       if(f->left)q.push(f->left);
       if(f->right)q.push(f->right);
   }
   return false;
    
}
