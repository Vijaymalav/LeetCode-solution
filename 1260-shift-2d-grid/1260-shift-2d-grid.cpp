class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>ans(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
           int one=i*m + j;
                int shifting=(one+k)%(n*m);
                ans[shifting/m][shifting%m]=grid[i][j];
            
            }
        }
        return ans;
    }
};