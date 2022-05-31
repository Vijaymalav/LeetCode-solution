class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {
         vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
       set<vector<int>>st;
        for(int i=0;i<nums.size();i++){
              int strt=i+1;
        int end=nums.size()-1;
        while(strt<end){
           int sum=nums[strt]+nums[end];
            if(sum==-nums[i]){
                // ans.push_back({nums[i],nums[strt],nums[end]});
                st.insert({nums[i],nums[strt],nums[end]});
                strt++;
                end--;
            }
            else if(sum>-nums[i]) end--;
            else strt++;
        }
        }
        
        for(auto it:st){
            ans.push_back(it);
        }
        
        return ans;
    }
};