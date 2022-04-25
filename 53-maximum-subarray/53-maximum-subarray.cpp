class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum=0;
        int mxsum=nums[0];
        for(int i=0;i<nums.size();i++){
            cursum=cursum+nums[i];
            mxsum=max(mxsum,cursum);
            if(cursum<=0){
                cursum=0;
            }
        }
        return mxsum;
    }
};