// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
      int trailingzero(int n)
     {   
         int ans=0;
         for(int i=5;i<=n;i*=5)
         {
             ans+=n/(i);
         }
         return ans;
     }
      
      int helper(int l,int h,int zeros)
      {
         while(l<h)
         {
          int mid=l+(h-l)/2;
          if(trailingzero(mid)>=zeros)
          {
                 h=mid;
          }
          else
          {
            l=mid+1;
          }
        }
        return l;
          
      }
   
       int findNum(int n)
       {
       
        return helper(0,5*n,n);
       
        
       }
};

// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}  // } Driver Code Ends