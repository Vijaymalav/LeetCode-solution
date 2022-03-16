// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    void helper(vector<int>&a ,vector<vector<int>>&ans,vector<int>tmp,int i,int n){
        if(i==n){
            ans.push_back(tmp);
            return;
        }
        tmp.push_back(a[i]);
         helper(a,ans,tmp,i+1,n);
        tmp.pop_back();
         helper(a,ans,tmp,i+1,n);
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
      vector<vector<int>>ans;
      vector<int>tmp;
      helper(A,ans,tmp,0,A.size());
      sort(ans.begin(),ans.end());
      return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}  // } Driver Code Ends