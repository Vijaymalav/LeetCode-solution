class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            int mid=(i+j)/2;
            if((mid%2==0 and nums[mid]==nums[mid+1]) || (mid%2==1 and nums[mid]==nums[mid-1])){
                i=mid+1;
            }
            else j=mid;
        }
        return nums[i];
        
        
//          int singleNonDuplicate(vector<int>& nums) {
//         int left = 0, right = nums.size() - 1;
//         while(left < right){
//             int mid = (left + right)/2;
//             if((mid % 2 == 0 && nums[mid] == nums[mid + 1]) || (mid % 2 == 1 && nums[mid] == nums[mid - 1]))
//                 left = mid + 1;
//             else
//                 right = mid;
//         }
        
//         return nums[left];
    
    }
};