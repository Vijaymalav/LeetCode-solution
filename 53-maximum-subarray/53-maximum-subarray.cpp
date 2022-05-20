class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mxsum=nums[0];
        int currsum=0;
        for(int i=0;i<nums.size();i++){
            currsum+=nums[i];
            if(currsum>mxsum){
                mxsum=currsum;
            }
             if(currsum<=0){
                currsum=0;
            }
            
        }
        return mxsum;
 
        
    }
};