//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
      string maxSum(string w,char x[], int b[],int n){
          // code here     
          map<char,int> mp;
          
          int l= w.length();
          
          for(int i=0;i<l;i++)
          {
              mp[w[i]]= (int) w[i];
          }
          for(int i=0;i<n;i++)
          {
              mp[x[i]]=b[i];
          }
          int sum=0;
          int mxsum=INT_MIN;
          string ans="",res;
          for(int i=0;i<l;i++){
              sum+=mp[w[i]];
              ans.push_back(w[i]);
              if(sum>=mxsum){
                  res=ans;
                 mxsum=sum;
              }
              if(sum<0){
                  sum=0;
                  ans="";
              }
          }
          
          return res;
      }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends