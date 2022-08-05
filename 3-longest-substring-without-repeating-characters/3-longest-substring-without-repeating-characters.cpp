class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)return 0;
        int i=0,mx=INT_MIN;
        int j=0,n=s.size();
        unordered_set<int>st;
        while(j<n){
            if(st.find(s[j])==st.end()){
                st.insert(s[j]);
                j++;
            }
            else {
                mx=max(mx,j-i);
                while(s[i]!=s[j]){
                    st.erase(s[i]);
                    i++;
                    
                }
                j++;
                i++;
                
            }
        }
            mx=max(mx,j-i);
        return mx;
    }
};