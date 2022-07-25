class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st=-1,end=-1;
        int l=0;
        int h=nums.size()-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]==target){
                if(mid==0 || nums[mid]>nums[mid-1] ){
                    st=mid;
                    break;
                }
               
                else h=mid-1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else h=mid-1;
        }
        if(st==-1)return {-1,-1};
        l=st;
        h=nums.size()-1;
            while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]==target){
                if(mid==nums.size()-1 || nums[mid]<nums[mid+1]){
                    end=mid;
                    break;
                }
                else l=mid+1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else h=mid-1;
        }
        
        return {st,end};
        
    }
};