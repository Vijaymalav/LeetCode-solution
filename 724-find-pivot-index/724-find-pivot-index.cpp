class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0,sum=0;
        for(auto it:nums)total+=it;
        for(int i=0;i<nums.size();i++){
            total-=nums[i];
            if(sum==total)return i;
            sum+=nums[i];
        }
        return -1;
    }
};