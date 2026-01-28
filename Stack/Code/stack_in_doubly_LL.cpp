#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node* prev;
    int val;
    Node* next;
    Node(int val){
        this->prev =NULL;
        this->val = val;
        this->next = NULL;
    }
};

class DLL_Stack{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int s =0;
    
    void push(int val){
        Node* newnode = new Node(val);
        s++;

        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode; 
    }

    int top(){
        if(tail ==NULL){
            return -1;
        }
        return tail->val;
    }

    void pop(){
        s--;
        if(head == NULL){
            return;
        }
        if(tail->prev == NULL){
            head=NULL;
            tail =NULL;
            return ;
        }
        tail = tail->prev;
        tail->next =NULL;
    }
    int size(){
        return s;
    }
    bool empty(){
        return head == NULL;
    }

};

int main(){
   DLL_Stack st;

   int n;cin>>n;
   int i =0;
   while (i<n)
   {
        int val;cin>>val;
        st.push(val);
        i++;
   }
   while (!st.empty())
   {
       cout<<st.top()<<endl;
       st.pop();
   }

}