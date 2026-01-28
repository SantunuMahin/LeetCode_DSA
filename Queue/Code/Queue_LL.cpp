#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next=NULL;
    }
};
class LL_Queue{
    public:
    Node* head =NULL;
    Node* tail =NULL;
    int sz = 0;

    void push(int val){
        sz++;
        Node* newnode = new Node(val);
        if(head==NULL){
            head= newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
    }
    int front(){
        if(head == NULL)return -1;

        return head->val;
    }
    void pop(){
        if(head == NULL)return;
        sz--;
        head = head->next;
    }
    int size(){
        return sz;
    }
    bool empty(){
        return sz == 0;
    }
    int back(){
        if(head == NULL)return -1;
        return tail->val;
    }
};
int main() {
    LL_Queue llq;
    llq.push(10);
    llq.push(20);
    llq.push(30);
    llq.push(40);
    while(!llq.empty()){
        cout<<llq.front()<<" ";
        llq.pop();
    }
    
    
    return 0;
}