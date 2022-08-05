class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            if(m.find(tar-nums[i])!=m.end()){
                return {m[tar-nums[i]],i};
            }
            m[nums[i]]=i;
        }
        return {};
    }
};