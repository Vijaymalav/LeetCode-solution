class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& mat) 
    {
        int n=mat.size();
        int m=mat[0].size();
        for(int s=0;s<n;s++){
          for(int i=s,j=0;i<(n-1) and j<(m-1);i++,j++){
              if(mat[i][j]!=mat[i+1][j+1])return false;
          }
        }
          for(int s=0;s<m;s++){
          for(int i=0,j=s;i<(n-1) and j<(m-1);i++,j++){
              if(mat[i][j]!=mat[i+1][j+1])return false;
          }
        }
        return true;
    }
};