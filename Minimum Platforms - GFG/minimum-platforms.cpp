// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    static bool comp(pair<int,int>&a,pair<int,int>&b){
        return a.second<b.second;
    }
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	if(n==0)return 0;
    	int pf=1;
    	vector<pair<int,int>>tr(n);
    	for(int i=0;i<n;i++){
    	    tr[i]={arr[i],dep[i]};
    	}
    	sort(tr.begin(),tr.end());
    	priority_queue<int,vector<int>,greater<int>>pq;
    	pq.push(tr[0].second);
    	
    
    	for(int i=1;i<n;i++){
    	   if(pq.top()<tr[i].first){
    	       pq.pop();
    	       pq.push(tr[i].second);
    	   }
    	   else pq.push(tr[i].second);
    	}
    	return pq.size();
    	
    }
    
};


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends