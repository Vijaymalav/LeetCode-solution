class Solution {
public:
//     int solve(int i,vector<int>&nums,int n,int l_min,vector<vector<int>>&dp){
//         if(i==n)return 0;
//         if(dp[i][l_min+1]!=-1)return dp[i][l_min+1];
//         int r=solve(i+1,nums,n,l_min,dp),l=0;
//         if(l_min==-1 || nums[l_min]<nums[i]){
            
//              l=1+solve(i+1,nums,n,i,dp);
            
          
//         }
//         return dp[i][l_min+1]=max(r,l);
//     }
    
//     int lengthOfLIS(vector<int>& nums) {
//         vector<vector<int>>dp(nums.size(),vector<int>(size(nums)+1,-1));
//         return solve(0,nums,nums.size(),-1,dp);
//     }
     int lengthOfLIS(vector<int>& nums) {
        int ans = 1, n = size(nums);
        vector<int> dp(n, 1);
        for(int i = 0; i < n; i++) 
            for(int j = 0; j < i; j++) 
                if(nums[i] > nums[j]) 
				    dp[i] = max(dp[i], dp[j] + 1), ans = max(ans, dp[i]);
        return ans;
    }
};