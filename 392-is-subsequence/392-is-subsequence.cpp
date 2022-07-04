class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        for(int j=0;j<s.size();j++){
            while(s[j]!=t[i] and i<t.size())i++;
            
            if(s[j]!=t[i])return false;
            i++;
        }
        return true;
        
    }
};