class Solution {
  
public:
      int longestCommonSubsequence(string tx1, string tx2) {
        int n=tx1.size();
        int m=tx2.size();
        int dp[n+1][m+1];

        for(int i=0;i<=n;i++){
for(int j=0;j<=m;j++){
    if(i==0 || j==0){
        dp[i][j]=0;
        continue;
    }
    if(tx1[i-1]==tx2[j-1])dp[i][j]=1+dp[i-1][j-1];
    else dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
}
            }
        return dp[n][m];
        
        
    }

    
    int longestPalindromeSubseq(string s) {
       string str=s;
        reverse(str.begin(),str.end());
        return longestCommonSubsequence(s,str);
    }
};