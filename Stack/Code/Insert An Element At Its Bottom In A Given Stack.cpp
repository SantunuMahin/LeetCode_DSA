// Insert An Element At Its Bottom In A Given Stack
//link: https://www.naukri.com/code360/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166

#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    stack<int> s;
    while(!myStack.empty()){
        int val = myStack.top();
        s.push(val);
        myStack.pop();
    }
    if(myStack.empty())myStack.push(x);

    while(!s.empty()){
        int val = s.top();
        myStack.push(val);
        s.pop();
    }
    return myStack;
}
