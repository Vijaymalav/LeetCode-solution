class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n=nums.size();
        if(n==1)return 0;
        for(int i=0;i<n;i++){
            if(i==0 and nums[i]>nums[i+1])return i;
           else  if(i==(n-1) and nums[i]>nums[i-1])return i;
            else if(i>0 and i<(n-1) and nums[i]>nums[i-1] and nums[i]>nums[i+1])return i;
        }
        return -1;
    }
};