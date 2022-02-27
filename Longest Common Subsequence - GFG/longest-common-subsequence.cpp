// { Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

 // } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
        int lcss(int x, int y, string s1, string s2,vector<vector<int>>&dp)
    {
       
        if(x==0||y==0)return 0;
        
        if(dp[x][y]!=-1)return dp[x][y];
        
        if(s1[x-1]==s2[y-1])return dp[x][y]= 1+lcss(x-1,y-1,s1,s2,dp);
        else
            return dp[x][y]=max(lcss(x-1,y,s1,s2,dp),lcss(x,y-1,s1,s2,dp));
        
    }
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        vector<vector<int>>dp(x+1,vector<int>(y+1,0));
       for(int i=1;i<=x;i++){
           for(int j=1;j<=y;j++){
               if(s1[i-1]==s2[j-1])dp[i][j]= 1+dp[i-1][j-1];
               else dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
           }
       }
        return dp[x][y];
    }
};


// { Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
  // } Driver Code Ends