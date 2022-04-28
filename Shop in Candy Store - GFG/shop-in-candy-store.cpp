// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int cand[], int N, int K)
    {
        // Write Your Code here
        int n=N;
        vector<int>ans;
        sort(cand,cand+N);
        int mnc=0,mxc=0;
        for(int i=0;i<n;i++){
            mnc+=cand[i];
            n-=K;
        }
        int z=0;
        for(int i=N-1;i>=z;i--){
            mxc+=cand[i];
            z+=K;
            
        }
        return {mnc,mxc};
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}  // } Driver Code Ends