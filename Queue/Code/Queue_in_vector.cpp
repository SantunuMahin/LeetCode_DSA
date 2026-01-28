#include <bits/stdc++.h>
using namespace std;
class Queue{
    public:
    vector<int> v;
    void push(int val){
        v.push_back(val);
    }
    int front(){
        if(v.size()==0) return -1;
        return v.front();
    }
    void pop(){
        v.erase(v.begin());
    }
    int size(){
        return v.size();
    }
    bool empty(){
        return size() == 0;
    }
    int back(){
        if(v.size()==0) return -1;
        return v.back();
    }
};
int main() {

    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
    return 0;
}