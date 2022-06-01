class Solution {
public:
   
    void helper(vector<int>&cand,int ind,int n,int tar,vector<int>tmp,vector<vector<int>>&ans){
    if(ind>=n || tar == 0)
    {
        if(tar == 0)
        {
            ans.push_back(tmp);
        }
        return;
    }
    //     for(int it=i;it<n;it++){
    //         if(it>i and cand[i-1]==cand[i])continue; 
    //      if(cand[it]>tar)break;
    //    tmp.push_back(cand[it]);
    //    helper(cand,it+1,n,tar-cand[it],tmp,ans);
    //   tmp.pop_back();  
    //     }
    // }
          for(int i = ind;i<n;i++)
    {
        if(i > ind && cand[i-1] == cand[i])
        {
            continue;
        }

        if(cand[i] > tar)
        {
            break;
        }
        
        tmp.push_back(cand[i]);
        helper(cand,i+1,n,tar-cand[i],tmp,ans);
        tmp.pop_back();
    }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
vector<vector<int>>ans;
       vector<int>tmp;
        int n=candidates.size();
        sort(candidates.begin(),candidates.end());
       helper(candidates,0,n,target,tmp,ans);    
        return ans;
    }

    
 
//     void findCombinations(int ind,int n,vector<int>& candidates,vector<int>v,vector<vector<int>>&ans,int target)
// {
//     if(ind>=n || target == 0)
//     {
//         if(target == 0)
//         {
//             ans.push_back(v);
//         }
//         return;
//     }
    
//     for(int i = ind;i<n;i++)
//     {
//         if(i > ind && candidates[i-1] == candidates[i])
//         {
//             continue;
//         }

//         if(candidates[i] > target)
//         {
//             break;
//         }
        
//         v.push_back(candidates[i]);
//         findCombinations(i+1,n,candidates,v,ans,target-candidates[i]);
//         v.pop_back();
//     }
// }

// vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//     int n = candidates.size();
    
//     sort(candidates.begin(),candidates.end());

    
//     vector<int>v;
//     vector<vector<int>>ans;
    
//     findCombinations(0,n,candidates,v,ans,target);
    
//     return ans;

};