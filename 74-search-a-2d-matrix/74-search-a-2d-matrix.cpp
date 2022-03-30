class Solution {
public:
   bool binarysearch(vector<int>&matrix,int target){
        int start=0;
        int end=matrix.size()-1;
           while(end>=start){
            int  mid=(start+end)/2;
            if(matrix[mid]==target){
                return true;
            }
            else if(matrix[mid]>target){
                end=mid-1;
            }
            else {
                start=mid+1;
            }
        }
        return false;
    }
 
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(); // row
        int n=matrix[0].size(); // column
    
        for( int  i=0;i<m;i++){
            if(matrix[i][n-1]>=target){
                return binarysearch(matrix[i],target);
            }
        }
    
        return false;   
    }
};