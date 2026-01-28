#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    //int size;
    vector<int> v;

    void push(int val){
        v.push_back(val);
    }
    int top(){
        return v.back();
    }
    void pop(){
        v.pop_back();
    }
    int size(){
        return v.size();
    }
    bool empty(){
        return size() == 0;
    }

};
int main(){
    Stack st;
    int n,i=0;
    cin>>n;
    while(i<n){
        int val;cin>>val;
        st.push(val);
        i++;
    }
    while (!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    //cout<<st.empty(); 
}