// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the sorted array.
   vector <int> nearlySorted(int arr[], int num, int K){
      priority_queue<int>p; vector<int>ans;
      for(int i=0; i<num; i++) {
          p.push(arr[i]);
      }
      while(!p.empty()) {
          ans.push_back(p.top());
          p.pop();
      }
      reverse(ans.begin(),ans.end());
      return ans;
   }
};
//  0 1 2 3 4  5 6
//  3 1 4 2 5
 // 1 3 2 4 5      
// {6,5,3,2,8,10,9}
//  2 3 5 6 8 9 10

// { Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    int num, K;
	    cin>>num>>K;
	    
	    int arr[num];
	    for(int i = 0; i<num; ++i){
	        cin>>arr[i];
	    }
	    Solution ob;
	    vector <int> res = ob.nearlySorted(arr, num, K);
	    for (int i = 0; i < res.size (); i++)
	        cout << res[i] << " ";
	        
	    cout<<endl;
	}
	
	return 0;
}
  // } Driver Code Ends