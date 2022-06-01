class Solution {
public:
set<vector<int>>st;
    void helper(int i,vector<int>nums,vector<int>tmp,int n){
        if(i==n){
            sort(tmp.begin(),tmp.end());
            st.insert(tmp);
            return;
        }
        tmp.push_back(nums[i]);
        helper(i+1,nums,tmp,n);
        tmp.pop_back();
        helper(i+1,nums,tmp,n);
        
    }
        
    
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         vector<vector<int>> ans;
        helper(0,nums,{},nums.size());
        for(auto it:st){
            ans.push_back(it);
        }
      
        
        return ans;
    }
};