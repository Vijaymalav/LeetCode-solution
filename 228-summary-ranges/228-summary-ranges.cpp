class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size();
        vector<string>ans;
        if(n==0)return ans;
        int l=nums[0];
        int r=nums[0];
        for(int i=0;i<n;i++){
            if(i==n-1){
               r=nums[i];
                if(l==r){
                    ans.push_back(to_string(l));
                }
                else{

                     ans.push_back(to_string(l)+"->"+to_string(r));
                }
                
            }
          else  if((nums[i]+1)!=nums[i+1]){
                    r=nums[i];
                if(l==r){
                    ans.push_back(to_string(l));
                }
                else{
                    ans.push_back(to_string(l)+"->"+to_string(r));
                }
                l=nums[i+1];
            }
            
            
        }
        return ans;
    }
};