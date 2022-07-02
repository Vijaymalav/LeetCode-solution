// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    void dfs(vector<vector<int>>adj,int &cnt,int s,int d)
    {
        if(s==d)
        {
            cnt++;
        }
        for(auto src:adj[s])
        {
            dfs(adj,cnt,src,d);
        }
    }
	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
	    // Code here
	    vector<vector<int>>adj(n);
	    for(auto i: edges)
	    {
	        adj[i[0]].push_back(i[1]);
	    }
	    int count=0;
	    dfs(adj,count,s,d);
	    return count;
	    
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, s, d;
		cin >> n >> m >> s >> d;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int u, v;
			cin >> u >> v;
			edges.push_back({u,v});
		}
		Solution obj;
		int ans = obj.possible_paths(edges, n, s, d);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends