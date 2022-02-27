// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
        if(S.size()<3)return -1;
        int cnt[3]={0,0,0};
        int i=0,j=1;
        int ans=INT_MAX;
        cnt[S[0]-'0']++;
     while(j<S.size()){
         cnt[S[j]-'0']++;
         while(cnt[S[i]-'0']>1){
             cnt[S[i]-'0']--;
             i++;
         }
         if(cnt[0]>0 and cnt[1]>0 and cnt[2]>0){
             ans=min(ans,j-i+1);
         }
         j++;
     }
       if(ans==INT_MAX)return -1;
       return ans;
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}  // } Driver Code Ends