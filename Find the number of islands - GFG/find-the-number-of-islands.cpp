// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void dfs(int i,int j,vector<vector<char>>& grid,int m,int n){
        grid[i][j]='2';
        if(i+1<n and i+1>=0 and j>=0 and j<m and grid[i+1][j]=='1'){
            dfs(i+1,j,grid,m,n);
        }
         if(i-1<n and i-1>=0 and j>=0 and j<m and grid[i-1][j]=='1'){
            dfs(i-1,j,grid,m,n);
        }
         if(i<n and i>=0 and j+1>=0 and j+1<m and grid[i][j+1]=='1'){
            dfs(i,j+1,grid,m,n);
        }
         if(i<n and i>=0 and j-1>=0 and j-1<m and grid[i][j-1]=='1'){
            dfs(i,j-1,grid,m,n);
        }
        if(i-1<n and i-1>=0 and j+1>=0 and j+1<m and grid[i-1][j+1]=='1'){
            dfs(i-1,j+1,grid,m,n);
        }
        
       if(i-1<n and i-1>=0 and j-1>=0 and j-1<m and grid[i-1][j-1]=='1'){
            dfs(i-1,j-1,grid,m,n);
        }
        if(i+1<n and i+1>=0 and j-1>=0 and j-1<m and grid[i+1][j-1]=='1'){
            dfs(i+1,j-1,grid,m,n);
        }
        if(i+1<n and i+1>=0 and j+1>=0 and j+1<m and grid[i+1][j+1]=='1'){
            dfs(i+1,j+1,grid,m,n);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    dfs(i,j,grid,m,n);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends