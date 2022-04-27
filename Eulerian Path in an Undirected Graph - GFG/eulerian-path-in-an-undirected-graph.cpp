// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
 int eulerPath(int N, vector<vector<int>> graph) {
    int ct = 0;
    for(int i=0; i<N; i++) {
        int cnt = 0;
        for(int j=0; j<N; j++) {
            if(graph[i][j])
                cnt++;
        }
        if(cnt&1) ct++;
    }
    return (ct==1 || ct==2);
}
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> graph(N, vector<int>(N, -1));
        for(int i = 0;i < N;i++)
            for(int j = 0;j < N;j++)
                cin>>graph[i][j];
        
        Solution ob;
        cout<<ob.eulerPath(N, graph)<<"\n";
    }
    return 0;
}  // } Driver Code Ends