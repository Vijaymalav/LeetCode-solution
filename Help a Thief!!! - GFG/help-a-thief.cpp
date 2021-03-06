// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxCoins(int A[], int B[], int T, int N) {
        // code here
        if(T==0)return 0;
        vector<pair<int,int>>vec(N);
        int ans=0;
        for(int i=0;i<N;i++){
            vec[i].first=B[i];
            vec[i].second=A[i];
             
            // push_back({B[i],A[i]});
        }
        sort(vec.begin(),vec.end());

        for(int i=N-1;i>=0;i--){
            // if(T==0)break;
            if(vec[i].second<T){
                ans+=(vec[i].second*vec[i].first);
                T-=vec[i].second;
                   
            }
            else {
               
                ans+=(T*vec[i].first);
                
                break;
            }
          
        }
       
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int T,N;
        cin>>T>>N;
        
        int A[N], B[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];
        for(int i=0; i<N; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.maxCoins(A,B,T,N) << endl;
    }
    return 0;
}  // } Driver Code Ends