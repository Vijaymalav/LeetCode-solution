class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1)return nums.size();
        sort(nums.begin(),nums.end());
        int ele=nums[0],cnt=1,mx=INT_MIN;
        for(int i=1;i<nums.size();i++){
            if(ele==nums[i])continue;
            if((ele+1)==nums[i]){
                cnt++;
                ele=nums[i];
            }
            else {
                mx=max(cnt,mx);
                ele=nums[i];
                cnt=1;
            }
        }
         mx=max(cnt,mx);
        return mx;
    }
};