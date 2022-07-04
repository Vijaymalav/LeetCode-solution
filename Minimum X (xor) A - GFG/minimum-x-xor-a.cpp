// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
     int minVal(int a, int b) 
   {
       
       int count=__builtin_popcount(b);
       //cout<<count<<endl;
       if(a==0)
       {
           return pow(2,count)-1;
       }
       int n=log2(a)+1;
       int arr[n]={0};
       int i=n-1;
       while(a>0)
       {
           arr[i]=0;
           if(a%2==1)
           arr[i]++;
           i--;
           a=a/2;
       }
       int fin_ans[n]={0};
       int ct=0;
       for(int i=0;i<n;i++)
       {
           fin_ans[i]=0;
           if(arr[i]==1 && ct<count)
           {
               fin_ans[i]=arr[i];
               ct++;
           }
       }
       if(ct<count)
       {
           int j=n-1;
           while(j>=0 && ct<count)
           {
               if(fin_ans[j]==0)
               {
                   fin_ans[j]=1;
                   ct++;
               }
               j--;
           }
       }
       int ans=0;
       if(ct<count)
       {
           ans=pow(2,count)-1;
       }
       else
       {
           for(int i=0;i<n;i++)
           {
               ans=ans*2;
               if(fin_ans[i]==1)
               ans++;
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
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}  // } Driver Code Ends