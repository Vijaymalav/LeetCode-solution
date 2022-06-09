class Solution {
public:
    vector<int> twoSum(vector<int>& num, int tar) {
        int n=num.size();
        int i=0;
        int j=n-1;
        vector<int>ans(2);
        while(i<j){
            int sum=num[i]+num[j];
            if(sum==tar){
                ans={i+1,j+1};
                break;
            }
            else if(sum>tar){
                j--;
            }
            else i++;
        }
        return ans;
    }
};