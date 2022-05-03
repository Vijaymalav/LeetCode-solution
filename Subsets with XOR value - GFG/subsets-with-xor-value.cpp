// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
public:
  int subsetXOR(vector<int> arr, int N, int K) {
        vector<int> prv(128, 0), curr(128, 0);
        prv[0] = 1, prv[arr[0]] = 1;
        for(int i = 1; i < N; i++){
            for(int xr = 0; xr < 128; xr++){
                    curr[xr] = prv[xr] + prv[xr^arr[i]];
            }
            prv = curr;
        }
        return prv[K];
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int K;
        cin>>K;
        vector<int> v;
        for(int i = 0;i<N;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }    
        Solution ob;
        cout << ob.subsetXOR(v,N,K) << endl;
    }
    return 0; 
}  // } Driver Code Ends