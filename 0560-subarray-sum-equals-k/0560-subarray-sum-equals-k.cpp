class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>m;
        int currsum=0,ans=0;
        for(int i=0;i<n;i++){
            currsum+=nums[i];
            if(currsum==k)ans++;
            if(m.find(currsum-k)!=m.end())ans+=m[currsum-k];
            m[currsum]++;
        }
        return ans;
    }
};