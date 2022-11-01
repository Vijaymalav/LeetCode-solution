class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            int ele= abs(arr[i]);
            ele=ele-1;
            if(arr[ele]<0)continue;
            arr[ele]*=-1;
            
        }
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};