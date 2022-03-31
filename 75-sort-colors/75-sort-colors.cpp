class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int tmp = 0, low = 0, mid = 0, high = nums.size() - 1;
    
        while(mid <= high)
        {
            if(nums[mid] == 0)
            {
                // tmp = nums[low];
                // nums[low] = nums[mid];
                // nums[mid] = tmp;
                 swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1)
            {
                mid++;
            }
            else if(nums[mid] == 2)
            {
                // tmp = nums[high];
                // nums[high] = nums[mid];
                // nums[mid] = tmp;
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
    
};