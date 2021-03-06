// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  string findAndReplace(string s ,int q, int ind[], string sources[], string targets[]) {
       for(int i = q-1; i >= 0; i--) {
           int j = ind[i];
           string str = sources[i];
           if(s.substr(j,str.length()) == str) {
               s = s.substr(0,j) + targets[i] + s.substr(j+str.length()); 
           }
       }
       return s;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        
        int Q;
        cin>>Q;
        int index[Q];
        string sources[Q], targets[Q];
        
        for(int i=0; i<Q; i++)
            cin>>index[i];
        for(int i=0; i<Q; i++)
            cin>>sources[i];
        for(int i=0; i<Q; i++)
            cin>>targets[i];

        Solution ob;
        cout<<ob.findAndReplace(S,Q,index,sources,targets)<<endl;
    }
    return 0;
}  // } Driver Code Ends