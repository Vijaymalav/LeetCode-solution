class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=1;
        int ele=nums[0];
        for(int i=0;i<nums.size();i++){
            if(ele==nums[i])cnt++;
            else 
            {cnt--;
            if(cnt==0){
                ele=nums[i];
                cnt=1;
            }
            }
        }
     
        // for(int i=0;i<nums.size();i++){
        //     if(ele==nums[i])cnt++;
        // }
        // if(cnt>)
        return ele;
    }
};