class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=nums[0];
        while(1){
            if(nums[abs(i)]<0){
               break;
            }
            nums[abs(i)]*=-1;
            i=abs(nums[abs(i)]);
        }
        return i;
    }
};