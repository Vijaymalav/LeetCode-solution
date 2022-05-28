class Solution {
public:
    int missingNumber(vector<int>& nums) {
    //     int n= nums.size(),ans=-1;
    //     unordered_set<int>st;
    //     for(auto it:nums)st.insert(it);
    //     for(int i=0;i<=n;i++)
    //     {
    //         if(st.find(i)==st.end())ans=i;
    //     }   
    // return ans;
        
        
        
        int n=nums.size();
        int ans=n;
        
        
        sort(nums.begin(),nums.end());
        // for(auto it:nums)cout<<it;
        if(nums[0]!=0)return 0;
        for(int i=1;i<n;i++){
            if(nums[i]!=(nums[i-1]+1)){
                ans=nums[i]-1;
                break;
            }
        }
        return ans;
    }
    // [9,6,4,2,3,5,7,0,1]
    // {0,1,2,3,4,5,6,7,9}
};