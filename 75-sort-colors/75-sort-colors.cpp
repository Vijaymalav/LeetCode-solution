class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        int l=0,r=n-1;
        while(i<=r){
            if(nums[i]==0){
                if(l==i){i++;l++;}
                else{
                
                    swap(nums[i],nums[l]);
                    l++;
            }
            }
            else if(nums[i]==2){
                if(r==i){r--;i++;}
                else {
                    swap(nums[i],nums[r]);
                      r--;
                     }
            }
            else i++;
        }
    }
};
