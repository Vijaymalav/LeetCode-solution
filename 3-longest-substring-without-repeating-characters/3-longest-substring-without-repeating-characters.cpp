class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==1)return 1;
        unordered_set<char>st;
        int i=0,j=0,ans=0;
        for( j;j<s.length();j++){
            if(st.find(s[j])!=st.end()){
                ans=max(ans,(j-i));
                while(st.find(s[j])!=st.end()){
                    st.erase(s[i]);
                    i++;
                }
            }
            st.insert(s[j]);
        }
         ans=max(ans,(j-i));
        return ans;
    }
};