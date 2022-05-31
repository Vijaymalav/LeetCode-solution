// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    static bool comp(pair<int,int>&a,pair<int,int>&b){
            if(a.second==b.second)return a.first>b.first;
            return a.second<b.second;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        if(n==0)return 0;
        vector<pair<int,int>>mt(n);
        for(int i=0;i<n;i++){
            mt[i]={start[i],end[i]};
        }
        int ans=1;
        sort(mt.begin(),mt.end(),comp);
        int fns=mt[0].second;
        for(int i=1;i<n;i++){
            if(fns<mt[i].first){
                ans++;
                fns=mt[i].second;
            }
        }
        
        return ans;
    }
    // {(1,2),(3,4),(0,6),(5,7),(8,9),(5,9)}
    
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends