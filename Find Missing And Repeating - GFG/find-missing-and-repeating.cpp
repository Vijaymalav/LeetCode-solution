// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int x=0,y=0;
        int xr=0;
        for(int i=0;i<n;i++){
            xr=xr^arr[i];
            xr=xr^(i+1);
        }
        int cnt=0;
        
        xr=xr & ~(xr-1);
        
         for(int i=0;i<n;i++){
                     if((xr & (i+1))!=0)
                x = x^(i+1);
            if((xr & arr[i])!=0)
                x=x^arr[i];
            if((xr & (i+1))==0)
                y = y^(i+1);
            if((xr & arr[i])==0)
                y=y^arr[i];
        }
        int* ans=new int[2];
         for(int i=0;i<n;i++)
        {
            if(arr[i]==x)
            {
                ans[0]=x;
                ans[1]=y;
                return ans;
            }
        }
        ans[0]=y;
        ans[1]=x;
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends