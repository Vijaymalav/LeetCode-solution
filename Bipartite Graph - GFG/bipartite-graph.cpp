// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
bool solve(vector<int> adj[],vector<int>&vis,int i){
       queue<int>q;
	    q.push(i);
	    vis[i]=0;
	    while(!q.empty()){
	        int tmp=q.front();
	        q.pop();
	        for(auto it:adj[tmp]){
	            if(vis[it]==-1){
	                vis[it]=(1-vis[tmp]);
	                q.push(it);
	            }
	            else if(vis[it]==vis[tmp])return false;
	        }
	    }
	    return true;
}
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int>vis(V,-1);
	   // for(auto it:vis)cout<<it;
	 
	    
	    for(int i=0;i<V;i++){
	        if(vis[i]==-1){
	           
	            if(!solve(adj,vis,i))return false;
	        }
	    }
	    return true;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends