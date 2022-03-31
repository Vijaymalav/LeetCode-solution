class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int start=0;
        int end=0,mid;
        for(int i=0;i<nums.size();i++){
            start=max(start,nums[i]);
            end+=nums[i];
        }
        while(start<end){
             mid=start+(end-start)/2;
             int pc=1;
             int sum=0;
        for(auto num:nums){
            if((sum+num)>mid){
                pc++;
                sum=num;
            }
            else sum+=num;
        }
            
            if(pc>m){
               start=mid+1;
            }
            else   end=mid;
            
    }
        return end;
    }
};