class Solution {
public:
    int minSubArrayLen(int tar, vector<int>& nums) {
        int i=0,j=0,sum=0;
        int ans=INT_MAX;
        int n=nums.size();
        while(j<n){
                         sum+=nums[j];

        while(sum>=tar){
            sum-=nums[i];
            ans=min(ans,(j-i+1));
            i++;
        }
            
               
                j++;
            
        }
        if(ans==INT_MAX)return 0;
           // if(sum>=target){
                // ans=min(ans,(j-i+1));
            
        return ans;
        
    }
};