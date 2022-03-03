class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3)return 0;
    int ans=0;
       
        // for(auto it:vec)cout<<it<<" ";
        int cnt=0;
        int pre=nums[1]-nums[0];
        for(int i=1;i<nums.size()-1;i++){
            if(pre==( nums[i+1]-nums[i])){
                cnt++;
          }
            else 
            {
                 cnt=0;
                pre=nums[i+1]-nums[i];
            }
            ans+=cnt;
               }
           
        return ans;
    }
};