// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // code here
        // vector< long long int >dp(n+1);
        long long int pre1=0;
        long long int pre2=1;
        // dp[0]=0;
        // dp[1]=1;
        long long int curr=0;
        if(n==0 || n==1)return n;
       for( long long int  i=2;i<=n;i++){
          curr=pre1+pre2;
          curr=curr%1000000007;
           pre1=pre2;
           pre2=curr;
       }
       return pre2;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends