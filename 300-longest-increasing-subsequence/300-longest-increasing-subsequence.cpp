class Solution {
public:
    int solve(int i,vector<int>&nums,int n,int l_min,vector<vector<int>>&dp){
        if(i==n)return 0;
        if(dp[i][l_min+1]!=-1)return dp[i][l_min+1];
        int r=solve(i+1,nums,n,l_min,dp),l=0;
        if(l_min==-1 || nums[l_min]<nums[i]){
            
             l=1+solve(i+1,nums,n,i,dp);
            
          
        }
        return dp[i][l_min+1]=max(r,l);
    }
    
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>>dp(nums.size(),vector<int>(size(nums)+1,-1));
        return solve(0,nums,nums.size(),-1,dp);
    }
};