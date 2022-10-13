class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int i=0,j=0,x=0,y=0;
        int n=s.length(),len=0;
        while(j<n){
            if(st.find(s[j])!=st.end()){
                if(len<(j-i)){
                    x=i;
                    y=j;
                    len=(j-i);
                }
                while(st.find(s[j])!=st.end()){
                    st.erase(s[i]);
                    i++;
                }
            }
            st.insert(s[j]);
            j++;
            
        }
        if(len<(j-i))len=j-i;
        return len;
       
    }
};