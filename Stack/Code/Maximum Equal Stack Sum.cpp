//link:https://www.naukri.com/code360/problems/maximum-equal-stack-sum_1062571

#include <bits/stdc++.h> 
int maxSum(stack<int> &s1, stack<int> &s2, stack<int> &s3) {
    // Write your code here
    stack<int> t1;
    t1 =s1;
    stack<int> t2;
    t2 = s2;
    stack<int> t3;
    t3 = s3;
    int sum1 = 0;
    while(!t1.empty()){
        sum1+=t1.top();
        t1.pop();
    }
    int sum2 = 0;
    while(!t2.empty()){
        sum2+=t2.top();
        t2.pop();
    }int sum3 = 0;
    while(!t3.empty()){
        sum3+=t3.top();
        t3.pop();
    }
    while(!s1.empty() && !s2.empty() && !s3.empty()){
        if(sum1 == sum2 && sum2 == sum3)return sum1;

        else{
            if(sum1 >= sum2 && sum1 >= sum3) {
                sum1 -= s1.top();
                s1.pop();
            }
            else if(sum2 >= sum1 && sum2 >= sum3) {
                sum2 -= s2.top();
                s2.pop();
            }
            else {
                sum3 -= s3.top();
                s3.pop();
            }

        }
    }
    return 0;
}
