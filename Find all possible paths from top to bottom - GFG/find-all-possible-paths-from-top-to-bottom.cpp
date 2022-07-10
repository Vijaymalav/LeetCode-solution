// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
public:
vector<vector<int>>ans;
void helper(vector<vector<int>>grid,int i,int j,int n,int m,vector<int>tmp){
    if(i==n || j==m)return;
    if((i==n-1 and j==m-1)){
        tmp.push_back(grid[i][j]);
        ans.push_back(tmp);
        return;
    }
     tmp.push_back(grid[i][j]);
 if(i==n-1 and j<m-1){
   
        helper(grid,i,j+1,n,m,tmp);
        

    }
   else if(i<n-1 and j==m-1){
       
        helper(grid,i+1,j,n,m,tmp);

    }
   
      else {
            
       
         helper(grid,i+1,j,n,m,tmp);
          helper(grid,i,j+1,n,m,tmp);
        
    }
   
}
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        // code here
        helper(grid,0,0,n,m,{});
        return ans;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution ob;
        auto ans = ob.findAllPossiblePaths(n, m, grid);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
  // } Driver Code Ends