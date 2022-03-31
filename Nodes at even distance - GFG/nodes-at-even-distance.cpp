// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void bfs(vector<int> graph[],bool visited[],int s,vector<int> &dist)
    {
        visited[s]=true;
        queue<int> qu;
        qu.push(1);
        dist[s]=0;
        while(!qu.empty())
        {
            int k=qu.front();
            qu.pop();
            for(int x:graph[k])
            {
                if(visited[x]==false)
                {
                  dist[x]=dist[k]+1;
                  visited[x]=true;
                  qu.push(x);
                }
            }
        }
    }
    int countOfNodes(vector<int> graph[], int n)
    {
        bool visited[n+1];
        vector<int> dist(n+1,-1);
        for(int i=1;i<=n;i++) visited[i]=false;
        bfs(graph,visited,1,dist);
        int cnt1=0;
        int cnt2=0;
        for(int i=1;i<dist.size();i++)
        {
            if(dist[i]!=-1 && dist[i]%2==0)
            cnt1++;
            if(dist[i]!=-1 && dist[i]%2==1)
            cnt2++;
        }
        cnt1=cnt1*(cnt1-1)/2;
        cnt2=cnt2*(cnt2-1)/2;
        return cnt1+cnt2;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>graph[n+1];
        for(int i=0;i<n-1;i++){
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        Solution ob;
        cout<<ob.countOfNodes(graph, n)<<endl;
    }
    return 0;
}  // } Driver Code Ends