class Solution {
public:
    vector<vector<int>>ans;
    void helper(vector<int>cand,int tar,vector<int>tmp,int i,int n,int sum){
      
        if(sum==tar){
            
            ans.push_back(tmp);
            return;
        }
        if(sum>tar)return;
      
         if(i==n)return ;
            helper(cand,tar,tmp,i+1,n,sum);
            
         sum+=cand[i];
           
            tmp.push_back(cand[i]);
        
         helper(cand,tar,tmp,i,n,sum);
        sum-=cand[i];
        tmp.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& cand, int target) {
        ans.clear();
        helper(cand,target,{},0,cand.size(),0);
       
        return ans;
    }
};