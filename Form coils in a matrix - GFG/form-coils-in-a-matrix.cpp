// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
   vector<vector<int>> formCoils(int n) 
   {
       int m=8*n*n;
       
       int mat[2][m];
       mat[0][0]=8*n*n+2*n;
       int ele=mat[0][0];
       int dir=1;
       int step=2;
       int i=1;
       
       while(i<m)
       {
           for(int j=0;j<step;j++)
           {
               mat[0][i++]=ele-4*n*dir;
               ele=ele-4*n*dir;
           }
           
           for(int j=0;j<step;j++)
           {
               mat[0][i++]=ele+dir;
               ele=ele+dir;
           }
           dir*=-1;
           step+=2;
       }
       
       for(int k=0;k<m;k++)
           mat[1][k]=16*n*n+1-mat[0][k];
           
       vector<vector<int>>ans;
       for(int i=0;i<2;i++)
       {
           vector<int>temp;
           for(int j=0;j<m;j++)
           {
               temp.push_back(mat[i][j]);
           }
           ans.push_back(temp);
       }
       return ans;
   }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        vector<vector<int>> ptr = ob.formCoils(n);
        
        for(auto it: ptr)
        {
            for(int i: it)
                cout<<i<<" ";
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends