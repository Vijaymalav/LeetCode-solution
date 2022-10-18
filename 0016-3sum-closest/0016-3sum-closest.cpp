class Solution {
public:
    int threeSumClosest(vector<int>& nums, int t) {
        sort(nums.begin(),nums.end());
        int ans=INT_MAX;
        int res;
        int n=nums.size();
        for(int st=0;st<n-2;st++){
            int i=st+1;
            int j=n-1;
            while(i<j){
                int sum=nums[st]+nums[i]+nums[j];
                if(ans>(abs(sum-t))){
                    res=sum;
                    ans=abs(sum-t);
                }
                if(sum==t)return sum;
                if(sum>t){
                    j--;
                }
                else i++;
                
            }
            
        }
        return res;
    }
};