class Solution {
public:
    int maxArea(vector<int>& arr) {
        int i=0;
        int mxar=0;
        int j=arr.size()-1;
        while(i<j){
            mxar= max(mxar,(j-i)*min(arr[i],arr[j]));
            if(arr[i]<=arr[j]){
                i++;
            }
            else if(arr[i]>arr[j]){
                j--;
            }
        }
        return mxar;
    }
};