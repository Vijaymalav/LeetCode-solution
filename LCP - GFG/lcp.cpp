// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
  string LCP(string ar[], int n)
   {
       // code here
       //base cases 
       if(n==0) return "";
       else if(n==1) return ar[0];
       else{
           sort(ar,ar+n);
           string lcp="";
           string s1=ar[0];
           string s2=ar[n-1];
           for(int i=0;i<s1.size();i++){
               if(s1[i]==s2[i]) lcp+=s1[i];
               else break;
           }
           if(lcp.size()==0){
               return "-1";
           }
           else{
               return lcp;
           }
       }
       
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
	        cin>>n;
	        string arr[n];
	        for(int i = 0;i<n;i++)
	            cin>>arr[i];
	        Solution ob;
	        cout<<ob.LCP(arr,n)<<endl;
	    }
	return 0;
}  // } Driver Code Ends