// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // vector<vector<int>> computeBeforeMatrix(int N, int M, vector<vector<int>> after){
    //     // Code here
    //      vector<vector<int>> ans(N,vector<int>(M));
    //      for(int i=0;i<N;i++){
    //          for(int j=0;j<M;j++){
    //          int res=after[i][j];
    //          for(int u=0;u<=i;u++){
    //              for(int v=0;v<j;v++){
    //                  res-=after[u][v];
    //              }
    //          }
    //          ans[i][j]=res;
    //      }
    // }
    // return ans;
    // }
    vector<vector<int>> computeBeforeMatrix(int n, int m, vector<vector<int>> after){
       
       vector<vector<int> > before(n, vector<int>(m));
    
       for(int i = 0; i < n; i++) {
           for(int j = 0; j < m; j++) {
               if(i == 0 && j == 0)
                   before[i][j] = after[i][j];
               else if(i == 0)
                   before[i][j] = abs(after[i][j] - after[i][j - 1]);
               else if(j == 0)
                   before[i][j] = abs(after[i][j] - after[i - 1][j]);
               else
                   before[i][j] = abs(after[i][j] - (after[i][j - 1] + after[i - 1][j] - after[i - 1][j - 1]));
           }
       }
       
       return before;
   }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M;
        cin>>N>>M; 
        vector<vector<int>> after(N,vector<int>(M));
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                cin>>after[i][j];
            }
        } 
        Solution obj;
        vector<vector<int>> before=obj.computeBeforeMatrix(N,M,after); 
        for(int i=0;i<before.size();i++){
            for(int j=0;j<before[i].size();j++){
                cout<<before[i][j]<<' ';
            } 
            cout<<endl;
        }
    }
}  // } Driver Code Ends