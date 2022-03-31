class Solution {
public:
      int maxSubArray(vector<int>& nums) {
        int mxsum=nums[0];
        int currsum=0;
        for(int i:nums){
            currsum+=i;
            mxsum=max(currsum,mxsum);
            if(currsum<=0)currsum=0;
        }
        return mxsum;
    }
};