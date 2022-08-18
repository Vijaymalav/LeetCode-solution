class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(auto ch:s){
            if((ch>='a' and ch<='z') || (ch>='A' and ch<='Z') || (ch>='0' and ch<='9')){
               char chr=tolower(ch);
                str.push_back(chr);
                
               }
        }
        cout<<str;
        string rev=str;
        reverse(rev.begin(),rev.end());
   if(rev==str)return true;
        return false;
        
    }
};