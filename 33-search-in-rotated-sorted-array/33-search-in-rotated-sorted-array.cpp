class Solution {
public:
    int search(vector<int>& nums, int tar) {
        int i=0, j=nums.size()-1;
        int ans=-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(tar==nums[mid])return mid;
            
            if(nums[i]<=nums[mid]){
                if(tar>=nums[i] and tar<nums[mid]){
                    j=mid-1;
                }
                else i=mid+1;
            }
            else {
                if(tar>nums[mid] and tar<=nums[j]){
                    i=mid+1;
                }
                else j=mid-1;
            }
            
            
        }
        return ans;
    }
};