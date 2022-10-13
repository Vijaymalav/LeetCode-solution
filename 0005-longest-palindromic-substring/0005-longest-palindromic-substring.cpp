class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int x,y;
        vector<vector<bool>>dp(n,vector<bool>(n,false));
        for(int g=0;g<n;g++){
            for(int i=0,j=g;i<n and j<n;i++,j++){
                if(g==0)dp[i][j]=true;
              else  if(g==1){
                    dp[i][j]=s[i]==s[j]?true:false;
                }
              else  if(s[i]==s[j] and dp[i+1][j-1])dp[i][j]=true;
                if(dp[i][j]){
                    x=i;
                    y=g;
                }
            }
        }
        return s.substr(x,y+1);
        
        
    }
};