class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sm=0,n=nums.size();
        vector<int>sum(n);
        for(int i=0;i<n;i++){
            sum[i]=nums[i]+sm;
            sm=sum[i];
        }
        return sum;
    }
};