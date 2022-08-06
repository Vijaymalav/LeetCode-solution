class Solution {
public:
    string common(string s1,string s2){
        int n=min(s1.size(),s2.size());
        string ans="";
        for(int i=0;i<n;i++){
            if(s1[i]==s2[i]){
                ans.push_back(s1[i]);
            }
            else break;
        }
        return ans;
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        int n=strs.size();
        for(int i=1;i<n;i++){
            ans=common(ans,strs[i]);
            if(ans=="")return "";
        }
        return ans;
    }
};