// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    // Code here.
	    int i=0;
	    int j=m;
	    int ans=-1;

	       
	        while(i<=j){
	             int mid=(j+i)/2;
	            if(pow(mid,n)==m){
	                ans=mid;
	                break;
	            }
	            else if(pow(mid,n)>m){
	                j=mid-1;
	            }
	            else i=mid+1;
	  
	    }
	    return ans;
	}  
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}  // } Driver Code Ends