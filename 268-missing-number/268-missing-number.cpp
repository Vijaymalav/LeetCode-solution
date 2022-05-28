class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size(),ans=-1;
        unordered_set<int>st;
        for(auto it:nums)st.insert(it);
        for(int i=0;i<=n;i++)
        {
            if(st.find(i)==st.end())ans=i;
        }   
    return ans;
    }
};