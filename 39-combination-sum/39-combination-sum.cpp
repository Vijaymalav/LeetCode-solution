class Solution {
public:
    void f(int ind,vector<int>tmp,vector<vector<int>> &ans,int n,int sum,int tar,vector<int>&cand){
        if(ind==n)return;
        if(sum==tar){
            ans.push_back(tmp);
            return ;
        }
        
        tmp.push_back(cand[ind]);
        sum+=cand[ind];
        if(sum<=tar){
                f(ind,tmp,ans,n,sum,tar,cand);
        }

        tmp.pop_back();
        sum-=cand[ind];
      
           f(ind+1,tmp,ans,n,sum,tar,cand);
      
    }
    vector<vector<int>> combinationSum(vector<int>& cand, int tar) {
        vector<vector<int>> ans;
        vector<int>tmp;
        int n=cand.size();
        f(0,tmp,ans,n,0,tar,cand);
        return ans;
    }
};