class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()<=1)return true;
        if(nums[0]==0)return false;
        int mxjump=nums[0];
        for(int i=1;i<nums.size();i++){
            mxjump--;
            if(mxjump<nums[i]){
               mxjump=nums[i];
            }
        
            
            if(mxjump<=0 and i!=nums.size()-1)return false;
        }
        return true;
    }
};