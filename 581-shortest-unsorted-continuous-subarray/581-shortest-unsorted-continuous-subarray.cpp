class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>vec=nums;
        sort(vec.begin(),vec.end());
        int i=0,n=nums.size(),j=n-1;
        
        while(i<n and nums[i]==vec[i])i++;
        while(j>=0 and nums[j]==vec[j])j--;
        if(i<j)return (j-i+1);
        return 0;
    }
};