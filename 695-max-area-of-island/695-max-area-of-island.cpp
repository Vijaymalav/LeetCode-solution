class Solution {
public:
    int dfs(vector<vector<int>>& grid,int i,int j,int row,int col){
        if(i<0 or j<0 or i>=row or j>=col or grid[i][j]!=1)return 0;
        grid[i][j]=2;
        int up=dfs(grid,i-1,j,row,col);
          int down=dfs(grid,i+1,j,row,col);
          int left=dfs(grid,i,j-1,row,col);
          int right=dfs(grid,i,j+1,row,col);
        return up+down+left+right+1;
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int ans=INT_MIN;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    ans=max(ans,dfs(grid,i,j,row,col));
                }
            }
        }
        return ans==INT_MIN?0:ans;
    }
};