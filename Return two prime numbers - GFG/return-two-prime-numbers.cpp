// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
bool isprime(int n){
    if(n==2)return true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return false;
    }
    return true;
}
    vector<int> primeDivision(int N){
        // code here
        vector<pair<int,int>>vec;
        if(isprime(N/2))vec.push_back({N/2,N/2});
        unordered_set<int>st;
        for(int i=2;i<N;i++){
            if(isprime(i) and st.find(N-i)!=st.end()){
                vec.push_back({N-i,i});
            }
            if(isprime(i)){
                st.insert(i);
            }
        }
        pair<int,int>p={INT_MAX,INT_MAX};
        for(auto it:vec){
            if(it.first<p.first){
                p=it;
            }
        }
        return {p.first,p.second};
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.primeDivision(N);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}  // } Driver Code Ends