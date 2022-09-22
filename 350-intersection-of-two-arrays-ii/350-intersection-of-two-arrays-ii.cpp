class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        vector<int>ans;
        for(auto it:nums1)m[it]++;
        for(int i:nums2){
            if(m.find(i)!=m.end() and m[i]>0){
                ans.push_back(i);
                m[i]--;
            }
        }
        return ans;
    }
};