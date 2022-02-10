class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0;
        int currsum=0;
        unordered_map<int,int>m;
        m[0]=1;
        for(int i=0;i<nums.size();i++){
            currsum+=nums[i];
            if(m.find(currsum-k)!=m.end())ans+=m[currsum-k];
            m[currsum]++;
        }
        return ans;
    }
};