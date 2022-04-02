class Solution {
public:
    bool ispelindrome(string s,int i,int j){
        while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        
        int i=0;
        int j=s.size()-1;
        while(j>=i){
            if(s[i]!=s[j]){
return ispelindrome(s,i+1,j) || ispelindrome(s,i,j-1);
            }
        
            i++;
            j--;
        }
        return true;
    }
};