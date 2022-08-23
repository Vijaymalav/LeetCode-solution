class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        unordered_set<char>st;
        int n=s.size(),ans=INT_MIN;
        while(j<n){
            if(st.find(s[j])==st.end()){
                st.insert(s[j]);
                j++;
            }
            else {
                ans=max(ans,j-i);
                while(st.find(s[j])!=st.end()){
                     st.erase(s[i]);
                    i++;
                }
            
            }
            
        }
        ans=max(ans,j-i);
        return ans;
    }
};