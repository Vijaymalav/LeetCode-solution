class Solution {
public:
    string reverseWords(string s) {
        string tmp="",ans="";
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                reverse(tmp.begin(),tmp.end());
                ans+=tmp;
                ans+=" ";
                tmp="";
            }
            else {
                tmp.push_back(s[i]);
            }
        }
          reverse(tmp.begin(),tmp.end());
                ans+=tmp;
        return ans;
    }
};