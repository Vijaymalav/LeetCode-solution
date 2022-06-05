class Solution {
public:
    int ans=0;
    bool isSafe(vector<vector<int>>&vec,int row,int col,int n){
        for(int i=row;i>=0;i--){
            if(vec[i][col]==1)return false;
        }
        for(int i=row,j=col;i>=0 and j>=0 ;i--,j--){
            if(vec[i][j]==1)return false;
        }
        for(int i=row,j=col;i>=0 and j<n;i--,j++){
            if(vec[i][j]==1)return false;;
        }
        return true;
    }
    void helper(vector<vector<int>>&vec,int i,int n){
        if(i==n){
            ans+=1;
            return;
        }
        for(int col=0;col<n;col++){
            if(isSafe(vec,i,col,n)){
                vec[i][col]=1;
                helper(vec,i+1,n);
                vec[i][col]=0;
            }
           
        }
        return;
        }
    int totalNQueens(int n) {
      
        vector<vector<int>>vec(n,vector<int>(n,0));
        helper(vec,0,n);
        return ans;
    }
};