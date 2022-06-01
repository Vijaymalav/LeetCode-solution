// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
vector<int>ans;
void helper(int i,vector<int>arr,int sum,int n){
    if(i==n){
        ans.push_back(sum);
        return;
    }
    sum+=arr[i];
    helper(i+1,arr,sum,n);
    sum-=arr[i];
    helper(i+1,arr,sum,n);
    
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        helper(0,arr,0,N);
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends