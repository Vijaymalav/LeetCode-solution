// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        // code here
        
        int idx=-1;
        int cnt=1;
        while(N){
            if(N&1==1 and idx!=-1)return -1;
            if(N&1==1){
                idx=cnt;
            }
            N=N>>1;
            cnt++;
        }
    
        return idx;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}  // } Driver Code Ends