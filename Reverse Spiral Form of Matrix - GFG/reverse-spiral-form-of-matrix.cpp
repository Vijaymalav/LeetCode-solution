//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int R, int c, vector<vector<int>>&a)  {
        // code here
        vector<int>ans;
        int l=0,r=c,t=0,b=R;
        while( l<r and t<b){
            if(l<r and t<b){
            for(int i=l;i<r;i++){
                ans.push_back(a[t][i]);
                
            }
            t++;
            }
              if(l<r and t<b){
            for(int i=t;i<b;i++){
                ans.push_back(a[i][r-1]);
            }
            r--;
              }
                if(l<r and t<b){
            for(int i=r-1;i>=l;i--){
                ans.push_back(a[b-1][i]);
            }
            b--;
                }
                  if(l<r and t<b){
            for(int i=b-1;i>=t;i--){
                ans.push_back(a[i][l]);
            }
            l++;
                  }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends