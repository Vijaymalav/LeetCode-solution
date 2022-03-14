// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int timer;
    int dfs(int v,int p,vector<bool>& vis,vector<int>& tin,vector<int>& low,vector<int> adj[]){
        vis[v] = true;
        tin[v] = low[v] = ++timer;
        
        int child = 0;
        for(auto& u:adj[v]){
            if(u==p){
                continue;
            }
            if(vis[u]){
                low[v] = min(low[v],tin[u]);
            }
            else{
                child++;
                if(dfs(u,v,vis,tin,low,adj)){
                    return 1;
                }
                low[v] = min(low[v],low[u]);
                
                // check articulation point
                if(tin[v]<=low[u] and p!=-1){
                    return true;
                }
            }
        }
        if(p==-1 and child>1){
            return true;
        }
        return false;
    }
    int biGraph(int arr[], int n, int e) {
        if(n==2){
            return 1;
        }
        
        timer = 0;
        vector<bool> vis(n);
        vector<int> tin(n),low(n),adj[n];
        
        for(int i=0;i<e+e;i+=2){
            int u = arr[i],v = arr[i+1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        int connected_components = 0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                connected_components++;
                if(dfs(i,-1,vis,tin,low,adj)){
                    return 0;
                }
            }
        }
        
        return connected_components==1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,e;
        cin>>n>>e;
        
        int arr[2*e];
        for(int i=0; i<2*e; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.biGraph(arr,n,e) << endl;
    }
    return 0;
}  // } Driver Code Ends