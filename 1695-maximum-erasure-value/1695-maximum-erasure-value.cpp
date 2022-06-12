class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int ans = 0;
        unordered_set<int> hst;
        for (int i = 0, j = 0, win = 0; j < nums.size(); j++) {
            while (hst.find(nums[j]) != hst.end()) {
                hst.erase(nums[i]);
                win -= nums[i];
                i++;
            }
            hst.insert(nums[j]);
            win += nums[j];
            ans = max(ans, win);
        }
        return ans;
    }
};