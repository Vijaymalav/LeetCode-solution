class Solution {
public:
    bool find(vector<int>vec,int tar){
        int l=0,r=vec.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(tar==vec[mid])return true;
            else if(tar>vec[mid]){
                l=mid+1;
            }
            else r=mid-1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            if(mat[i][m-1]>=tar){
                return find(mat[i],tar);
            }
        }
        return false;
    }
};