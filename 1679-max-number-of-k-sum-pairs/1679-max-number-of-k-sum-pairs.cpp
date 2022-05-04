class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int ans=0;
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(m.find(k-nums[i])!=m.end() and m[k-nums[i]]>0){
                ans++;
                m[k-nums[i]]--;
            }
            else m[nums[i]]++;
        }
        return ans;
    }
};