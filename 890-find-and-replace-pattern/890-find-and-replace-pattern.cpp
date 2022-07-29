class Solution {
public:
    bool pattern(string str,string pat){
        if(str.size()!=pat.size())return false;
        unordered_map<char,char>m;
        unordered_set<char>st;
        for(int i=0;i<str.size();i++){
            char f=str[i];
            char s=pat[i];
            if(m.find(f)!=m.end() and m[f]!=s){
                return false;
            }
            if(m.find(f)==m.end() and st.find(s)!=st.end())return false;
            m[f]=s;
            st.insert(s);
        }
        return true;
        
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pat) {
        vector<string>ans;
        for(auto str:words){
            if(pattern(str,pat)){
                ans.push_back(str);
            }
        }
        return ans;
    }
};