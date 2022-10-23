class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char>st;
        if(n%2!=0)return false;
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else {
                if(st.empty() || (s[i]==')' and st.top()!='(') || (s[i]=='}' and st.top()!='{') || s[i]==']' and st.top()!='[' )return false;
                else st.pop();
            }
        }
        return st.empty();
    }
};