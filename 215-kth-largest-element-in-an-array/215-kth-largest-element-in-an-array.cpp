class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end());
        // return nums[nums.size()-k];
        
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
            if(pq.size()==k+1)pq.pop();
        }
        return pq.top();
    }
};