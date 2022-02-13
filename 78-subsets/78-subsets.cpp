class Solution {
public:
    void solvee(int ind,vector<int>tmp,int len,vector<vector<int>>&ans,vector<int>&nums){
        
        if(len==tmp.size()){
          ans.push_back(tmp);
           
            return ;
        }
    
        for(int i=ind;i<nums.size();i++){
            tmp.push_back(nums[i]);
            solvee(i+1,tmp,len,ans,nums);
            tmp.pop_back();
        }
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>tmp;
        
        for(int i=0;i<=nums.size();i++){
            solvee(0,tmp,i,ans,nums);
        }
        return ans;
    }
};