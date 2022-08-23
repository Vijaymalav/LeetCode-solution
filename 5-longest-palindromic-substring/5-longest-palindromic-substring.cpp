class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        vector<vector<bool>>dp(n+1,vector<bool>(n+1,false));
        
        int x,y;
        for(int g=0;g<n;g++){
            for(int i=0,j=g;j<n and i<n;j++,i++){
                if(g==0){
                    dp[i][j]=true;
                }
             else if(g==1 and s[i]==s[j]){
                    dp[i][j]=true;
                }
                else {
                    if(dp[i+1][j-1] and s[i]==s[j])dp[i][j]=true;
                }
             if(dp[i][j]){
                 x=i;
                 y=(g+1);
             }
                
            }
        }
        return s.substr(x,y);
        
    }
};