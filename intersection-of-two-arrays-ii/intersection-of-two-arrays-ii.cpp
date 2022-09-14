class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
     unordered_map<int,int>m;
        for(auto it:nums1)m[it]++;
        vector<int>ans;
        for(int val:nums2){
            if(m.find(val)!=m.end() and m[val]>0){
                m[val]--;
                ans.push_back(val);
            }
        }
        return ans;
    }
};