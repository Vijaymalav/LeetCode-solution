// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
   {
       vector<int> ans;
       int m=0;
      for(int i=0;i<k;i++){
          m=max(m,arr[i]);
      }
      ans.push_back(m);
      for(int i=1;i<=n-k;i++){
          if(arr[i-1]==m){
              m=0;
             for(int j=i;j<i+k;j++)
                m=max(m,arr[j]);
           }
           else{
               m=max(m,arr[i+k-1]);
           }
           ans.push_back(m);
      }
      
      return ans;
   }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends