class Solution {
public:
   int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>> adj[n+1];
        for(int i=0;i<times.size();i++){
            int u=times[i][0];
            int v=times[i][1];
            int wt=times[i][2];
            adj[u].push_back({v,wt});
        }
        
        vector<bool> vis(n+1,false);
        vector<int> dist(n+1,INT_MAX);
        priority_queue<pair<int,int> , vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,k});
        dist[k]=0;
        pair<int,int>temp;
        while(!pq.empty()){
            temp=pq.top();
            pq.pop();
            int val=temp.second;
            int dis=temp.first;
            vis[val]=true;
            for(auto x:adj[val]){
                if(!vis[x.first]){
                    if(dist[x.first]>dis+x.second){
                        dist[x.first]=dis+x.second;
                        pq.push({dist[x.first],x.first});
                    }
                
                }
            }
        }
        int ans=0;
        for(int i=1;i<dist.size();i++){
            ans=max(ans,dist[i]);
        }
        if(ans==INT_MAX)return -1;
        
        return ans;
    }
};