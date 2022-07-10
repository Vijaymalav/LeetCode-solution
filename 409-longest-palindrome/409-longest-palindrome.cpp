class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size()<=1)return s.size();
        int n=s.size();
        unordered_map<char,int>m;
        int ans=0;
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        bool f=false;
     
        for(auto it:m){
            if(it.second%2==0){
                ans+=it.second;
            }
            else if(it.second>2){
               
               ans+=it.second-1;
                f=true;
            }
             if(it.second==1)f=true;
        }
        if(f)ans+=1;
        return ans;
    }
};