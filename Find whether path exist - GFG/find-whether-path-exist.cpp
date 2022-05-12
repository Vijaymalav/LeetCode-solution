// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
      int dir[4][2] = { {-1,0}, {1,0}, {0,1}, {0,-1}};
 
   
    
    bool findPath(int i , int j, vector<vector<int> >& grid , int n){
        if(grid[i][j] == 2) return true;
        
        int tmp = grid[i][j];
        grid[i][j] = 0;
        
        for(int k=0; k<4; k++){
            int x = i+dir[k][0];
            int y = j+dir[k][1];
            
            if(x>=0 && x<n && y>=0 && y<n && grid[x][y]){
                bool ans = findPath(x,y,grid,n);
                if(ans){
                    grid[i][j] = tmp;
                    return ans;
                }      
            }
        }
        grid[i][j] = tmp;
        return false;
    }
    
    bool is_Possible(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        bool ans;
        for(int i=0; i<n;i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 1){
                    ans = findPath(i,j,grid,n);
                    break;
                }
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}  // } Driver Code Ends