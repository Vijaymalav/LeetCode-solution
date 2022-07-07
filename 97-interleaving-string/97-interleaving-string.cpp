class Solution {
public:
    bool helper(int i,int j,int k,string s1,string s2,string s3,vector<vector<int>>&dp){
       if(k==s3.size())return true;
        if(dp[i][j]!=-1)return dp[i][j];
           if(i<s1.size() and j<s2.size() and s1[i]==s3[k] and s2[j]==s3[k]){
               return dp[i][j]= helper(i+1,j,k+1,s1,s2,s3,dp) || helper(i,j+1,k+1,s1,s2,s3,dp);
           }
              else if(s1[i]==s3[k]){
                  if(helper(i+1,j,k+1,s1,s2,s3,dp)){
                      dp[i][j]=1;
                  }
                     else dp[i][j]=0;
                     
                     return dp[i][j];
              }
        else if(s2[j]==s3[k])return helper(i,j+1,k+1,s1,s2,s3,dp);
              else return dp[i][j]= false;
              
        
        
    }
    bool isInterleave(string s1, string s2, string s3) {
        if((s1.size()+s2.size())!=s3.size())return false;

        vector<vector<int>>dp(s1.size()+1,vector<int>(s2.size()+1,-1));
        
        
      
        return helper(0,0,0,s1,s2,s3,dp);
        
    }
};