class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto ch:s){
            if(ch=='(' or ch=='{' or ch=='['){
                 st.push(ch);
            }
            else {
                   if(st.empty())return false;
                else if((ch==')' and st.top()=='(') or (ch=='}' and st.top()=='{') or (ch==']' and st.top()=='[')){
                    st.pop();
                }
                else return false;
        }
        }
        return st.empty();
    }
};