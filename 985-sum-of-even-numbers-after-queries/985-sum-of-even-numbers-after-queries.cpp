class Solution {
public:
 
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& q) {
        int sum=0,n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                sum+=nums[i];
            }
        }
        for(int i=0;i<q.size();i++){
            int ind=q[i][1];
            int val=q[i][0];
            if(nums[ind]%2!=0){
                if((nums[ind]+val)%2==0){
                    sum+=(nums[ind]+val);
                }
         
               
            
            }
            else {
                if((nums[ind]+val)%2==0){
                    sum+=val;
                }
                else {
                    sum-=nums[ind];
                }
            }
             nums[ind]+=val;
            ans.push_back(sum);
        }
        return ans;
        
    }
};