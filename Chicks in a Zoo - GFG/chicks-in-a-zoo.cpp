//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	long long int NoOfChicks(int N){
	    // Code here
	    vector<long long int>dp(N,0);
	    dp[0]=1;
	     for (int i = 1; i <N ; i++) {
            if(i<6)
           dp[i]=3*dp[i-1];
           else if(i==6)
               dp[i]=3*dp[i-1]-3*dp[i-6];
           else {
               dp[i]=3*dp[i-1]-2*dp[i-6];
            }
        }
        return dp[N-1];
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		long long int ans = obj.NoOfChicks(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends