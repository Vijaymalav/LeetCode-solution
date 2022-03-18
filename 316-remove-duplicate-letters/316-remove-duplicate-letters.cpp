class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<bool>vec(26,false);
        vector<int>last(26);
        stack<char>st;
        for(int i=0;i<s.size();i++){
            last[s[i]-'a']=i;
        }
        
        for(int i=0;i<s.size();i++){
            if(vec[s[i]-'a'])continue;
            else vec[s[i]-'a']=true;
            while(!st.empty() and st.top()>s[i] and last[st.top()-'a']>=i){
                vec[st.top()-'a']=false;
                st.pop();
            }
            st.push(s[i]);
                                    
       }
        string ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};