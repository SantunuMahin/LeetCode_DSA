/**
Stack Using Doubly Linked List

What is a Stack?
A stack is a linear data structure that follows the LIFO (Last In, First Out) principle.
This means the element that is inserted last will be removed first.

Real-life examples:
- Stack of plates
- Undo / Redo operations
- Function call stack
- Browser history navigation

Why Do We Use a Stack?
Stacks are used when:
- We need reverse order processing
- The most recent item must be accessed first
- Nested or recursive operations are involved

Common uses:
- Expression evaluation
- Backtracking algorithms
- Function calls (call stack)
- Undo / Redo functionality

Stack Behavior
Main operations:
- Push: Insert element at the top
- Pop: Remove element from the top

Additional operations:
- top(): get top element
- empty(): check if stack is empty
- size(): number of elements

LIFO Example:
Push: 10 → 20 → 30 → 40
Pop: 40 → 30 → 20 → 10

C++ Code Implementation (Using Doubly Linked List)
*/
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    Node* prev;
    int val;
    Node* next;
    Node(int val){
        this->prev = NULL;
        this->val = val;
        this->next = NULL;
    }
};

class DLL_Stack{
public:
    Node* head = NULL;
    Node* tail = NULL;
    int s = 0;

    void push(int val){
        Node* newnode = new Node(val);
        s++;
        if(head == NULL){
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }

    int top(){
        if(tail == NULL) return -1;
        return tail->val;
    }

    void pop(){
        if(head == NULL) return;
        s--;
        if(tail->prev == NULL){
            head = NULL;
            tail = NULL;
            return;
        }
        tail = tail->prev;
        tail->next = NULL;
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
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int val; cin >> val;
        st.push(val);
    }

    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}
/**
Code Summary

- Implements a Stack using a Doubly Linked List (DLL).
- Node stores:
  * prev pointer
  * val (data)
  * next pointer
- DLL_Stack maintains:
  * head → bottom of the stack
  * tail → top of the stack
  * s → current stack size

Main Stack Operations:
- push(val): Inserts an element at the top.
- top(): Returns the top element.
- pop(): Removes the top element.
- size(): Returns number of elements.
- empty(): Checks if stack is empty.

Program Flow:
- Reads number of elements.
- Pushes elements into the stack.
- Pops and prints elements in LIFO order.

Key Idea:
- Stack behavior is achieved by inserting and removing nodes only from the tail of the doubly linked list.
- Push and pop operations run in O(1) time.
*/
