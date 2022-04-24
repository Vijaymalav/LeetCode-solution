// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
   bool isprime(long long sk){
  if(sk <= 1) return false;
  for(int i = 2; i <= sqrt(sk); i++){
     if(sk%i == 0) return 0;
  }
  return 1;
}
long long primeProduct(long long L, long long R){
        // code here
   long long ans = 1;
   long long int mod = 1e9+7;
   for(int i = L; i <= R; i++){
       if(isprime(i)){
       //cout<<i<<" ";
       ans = (ans*i)%mod;
       }
   }
   return ans;
}
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long L, R;
        cin>>L>>R;
        
        Solution ob;
        cout<<ob.primeProduct(L, R)<<"\n";
    }
    return 0;
}  // } Driver Code Ends