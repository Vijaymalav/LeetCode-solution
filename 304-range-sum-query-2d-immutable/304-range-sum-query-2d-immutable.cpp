class NumMatrix {
public:
    // vector<vector<int>>mat;
    vector<vector<int>>dp;
    NumMatrix(vector<vector<int>>& mat) {
     
        
        int n=mat.size();
        int m=mat[0].size();
        // vector<vector<int>>dp(n+1,vector<int>(m+1,0));
          for(int i=0;i<n;i++){
      
            for(int j=1;j<m;j++){
               mat[i][j]+=mat[i][j-1];
            }
        }
        
             for(int i=0;i<m;i++){
            for(int j=1;j<n;j++){
              mat[j][i]+=mat[j-1][i];
            }
        }
  
     dp=mat;
    }
    
    int sumRegion(int r1, int c1, int r2, int c2) {
      
        int sum=dp[r2][c2];
        int extra=(r1!=0?dp[r1-1][c2]:0)+(c1!=0?dp[r2][c1-1]:0)-((r1!=0 and c1!=0)?dp[r1-1][c1-1]:0);
        
        return sum-extra;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */