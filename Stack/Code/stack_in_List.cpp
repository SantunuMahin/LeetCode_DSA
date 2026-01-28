#include<bits/stdc++.h>
using namespace std;
class LL_Stack{
    public:
    list<int> l;
    void push(int val){
        l.push_back(val);
    }
    int top(){
        return l.back();
    }
    void pop(){
        l.pop_back();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        return size() == 0;
    }
    
};
int main(){
    LL_Stack lls;
    int n;cin>>n;
    int i=0;
    while (i<n)
    {
        int val;cin>>val;
        lls.push(val);
        i++;
    }
    
    while(!lls.empty()){
        cout<<lls.top()<<endl;
        lls.pop();
    }
}