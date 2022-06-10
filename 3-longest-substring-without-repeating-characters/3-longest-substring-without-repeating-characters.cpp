class Solution {
public:
   int lengthOfLongestSubstring(string s) {
        if(s.length()==0)return 0;
        unordered_set<char>st;
        int i=0;
        int j=0;
      int  mxlen=0;
        while(j<s.length() and i<s.length()){
        if(st.find(s[j])==st.end()){
            st.insert(s[j]);
            
        }
            else{
                
                mxlen=max(mxlen,j-i);
                for(;i<=j;i++){
                    if(st.find(s[i])!=st.end()){
                        st.erase(s[i]);
                    }
                    if(s[i]==s[j]){
                        i++;
                        st.insert(s[j]);
                        break;
                    }
                    
                }
            }
            j++;
        }
        mxlen=max(mxlen,j-i);
        return mxlen;
    } 
};