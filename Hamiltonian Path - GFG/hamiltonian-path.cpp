//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
 bool dfs(vector<vector<int>> &v,int i,vector<bool> &b){ 
         if(i==v.size()||b[i]) return 0; b[i]=1; 
         if(count(b.begin(),b.end(),1)==v.size())return 1; 
         for(auto it:v[i]){ 
                     if(dfs(v,it,b))return 1; 
         } b[i]=0; 
         return 0; 
}
bool check(int N,int M,vector<vector<int>> Edges){ 
        vector<vector<int>> v(N); 
        for(auto i:Edges){ 
                v[i[0]-1].push_back(i[1]-1); 
                v[i[1]-1].push_back(i[0]-1); 
        } vector<bool> b(N,false); 
        for(int i=0;i<N;i++){ 
                if(dfs(v,i,b))return 1; 
        } 
        return 0; 
}
};
 

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
    	int N,M,X,Y;
    	cin>>N>>M;
    	vector<vector<int>> Edges;
    	for(int i=0;i<M;i++)
    	{
    		cin>>X>>Y;
    		Edges.push_back({X,Y});
    	}
    	Solution obj;
    	if(obj.check(N,M,Edges)){
    		cout<<"1"<<endl;
    	}
    	else
    	cout<<"0"<<endl;
	}
}
// } Driver Code Ends