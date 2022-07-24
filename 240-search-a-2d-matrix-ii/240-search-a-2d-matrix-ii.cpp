class Solution {
public:
    // bool find(vector<int>arr,int tar){
    //     int i=0;
    //     int j=arr.size()-1;
    //     while(i<=j){
    //         int mid=(i+j)/2;
    //         if(arr[mid]==tar)return true;
    //         else if(arr[mid]>tar){
    //             j=mid-1;
    //         }
    //         else i=mid+1;
    //     }
    //     return false;
    // }
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int n=mat.size();
        int m=mat[0].size();
      int r=0;
        int c=m-1;
        while(r<n and c>=0){
            if(mat[r][c]==tar)return true;
            mat[r][c]>tar?c--:r++;
        }
        return false;
    }
};