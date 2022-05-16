// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
int longSubarrWthSumDivByK(int arr[], int n, int k) {

    map<long long, int> m;
    long long sum = 0;
    int len = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        
        int curr = ((sum % k) + k) % k;
    
        if(curr == 0)
            len = i + 1;
        else if(m.find(curr) == m.end())
            m[curr] = i;
        else
            len = max(len, i - m[curr]);
    }
    
    return len;
}
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}
  // } Driver Code Ends