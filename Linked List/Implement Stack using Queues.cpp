/**
link: https://leetcode.com/problems/implement-stack-using-queues/
Nmae: 225. Implement Stack using Queues
*/
SOLUTION:

class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        queue<int>q2;
        int n =q.size();
        int ans =q.back();
        for(int i =0; i<n-1;i++){
            q2.push(q.front());
            q.pop();
        }
        q=q2;
        return ans; 
    }
    
    int top() {
        return q.back();
    }
    
    bool empty() {
        return q.size()==0;
    }
};
/**
Overview

This class implements a stack using a single queue (std::queue) in C++. It mimics stack operations (LIFO) on top of a FIFO queue.

Class: MyStack
Data Members

queue<int> q; → main queue storing stack elements.

Constructor

MyStack() → initializes an empty stack (queue is empty by default).

Methods

push(int x)

Adds element x to the stack.

Implementation: Simply pushes x into the queue.

Time complexity: O(1)

pop()

Removes and returns the top element of the stack.

Implementation:

Create a temporary queue q2.

Move all elements except the last one from q to q2.

The last element in q is the top element → save as ans.

Replace q with q2.

Return ans.

Time complexity: O(n), where n is the number of elements.

top()

Returns the top element of the stack without removing it.

Implementation: Uses q.back().

Time complexity: O(1)

empty()

Checks if the stack is empty.

Implementation: Returns true if q.size() == 0.

Time complexity: O(1)

Key Points

Stack is implemented using one queue.

push() is fast (O(1)), but pop() is slower (O(n)) because we must transfer elements to access the last inserted item.

top() directly accesses the last element of the queue (q.back()).
*/
