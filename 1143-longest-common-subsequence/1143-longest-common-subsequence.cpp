class Solution {
public:
    //  int dp[1001][1001];
    // int helper(string s1,string s2,int n,int m){
    //     if(n==0 || m==0)return 0;
    //         if(dp[n][m]!=-1)return dp[n][m];
    //     if(s1[n-1]==s2[m-1])return dp[n][m]= 1+helper(s1,s2,n-1,m-1);
    // else
    //     return dp[n][m]=max(helper(s1,s2,n-1,m),helper(s1,s2,n,m-1));
    // }
    int longestCommonSubsequence(string tx1, string tx2) {
        int n=tx1.size();
        int m=tx2.size();
       // memset(dp,-1,sizeof dp);
       // return helper(tx1,tx2,tx1.size(),tx2.size());
        int dp[n+1][m+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<=m;j++){
                if(i==0 || j==0)dp[i][j]=0;
            }
        }
        for(int i=1;i<=n;i++){
for(int j=1;j<=m;j++){
    if(tx1[i-1]==tx2[j-1])dp[i][j]=1+dp[i-1][j-1];
    else dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
}
            }
        return dp[n][m];
        
        
    }
};