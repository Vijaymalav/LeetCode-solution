class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<bool>vec(n+1,false);
        for(auto it:nums){
            vec[it]=true;
        }
        vector<int>ans;
        for(int i=1;i<=n;i++){
            if(!vec[i])ans.push_back(i);
        }
        return ans;
    }
};