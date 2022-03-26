class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0;
        int ans=-1;
        int j=nums.size()-1;
        while(i<=j){
           int mid=(i+j)/2;
            if(nums[mid]==target){
                ans=mid;
                break;
            }
            else if(nums[mid]>target){
                j=mid-1;
            }
            else i=mid+1;
        }
        return ans;
    }
};