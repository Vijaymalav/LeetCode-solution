class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0,sum=0;
     for(int i=0;i<nums.size();i++){
         if(nums[i]%2==0)nums[i]=0;
         else nums[i]=1;
     }
        unordered_map<int,int>m;
        m[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            m[sum]++;
            if(m.find(sum-k)!=m.end()){
                ans+=m[sum-k];
            }
        }
        return ans;
    }
};