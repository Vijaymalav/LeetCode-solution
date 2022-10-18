class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        unordered_map<int,int>m;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(m.find(t-nums[i])!=m.end()){
                ans= {m[t-nums[i]],i};
                break;
            }
            m[nums[i]]=i;
        }
        return ans;
    }
};