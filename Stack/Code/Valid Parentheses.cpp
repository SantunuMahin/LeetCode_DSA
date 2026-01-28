//20. Valid Parentheses
//link:https://leetcode.com/problems/valid-parentheses/description/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto c : s){
            if(c=='(')st.push(')');
            else if(c=='{')st.push('}');
            else if(c=='[')st.push(']');
            else {
                if(st.empty())
                    return false;
                else if(st.top() == c)
                    st.pop();
                else return false;
            }
        }
        return st.empty();
    }
};
/**

🧠 What This Code Does

This function checks whether a string of brackets is valid — meaning every opening bracket has a matching closing bracket in the correct order.
🔍 How It Works Step-by-Step
Create a stack

stack<char> st;

This stack stores the expected closing brackets.
Loop through each character in the string

for(auto c : s)

If it's an opening bracket
Push its matching closing bracket into the stack

'(' → push ')'
'{' → push '}'
'[' → push ']'

If it's a closing bracket
If the stack is empty → ❌ invalid
If the top of the stack matches → ✅ pop it
Otherwise → ❌ invalid
Final check
If stack is empty → ✅ valid
Else → ❌ invalid
🎯 Final Summary (One Line)

This code uses a stack to ensure every opening bracket is closed in the correct order and returns true if the string is properly balanced.

*/
