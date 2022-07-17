class Solution {
public:
    string longestPalindrome(string s) {
         int n=s.size();
        vector<vector<bool>>dp(n+1,vector<bool>(n+1,false));
        int gap=0;
       int x=0,y=0;
        for(int g=0;g<n;g++){
        
            for(int i=0,j=g;i<n and j<n;j++,i++){
                if(g==0)dp[i][j]=true;
                else if(g==1 and s[i]==s[j])dp[i][j]=true;
                else {
                    if(dp[i+1][j-1] and s[i]==s[j])dp[i][j]=true;
                    
                }
                if(dp[i][j]){
                    x=i;
                    y=g;
                }
            }
        }
        return s.substr(x,y+1);
    }
};