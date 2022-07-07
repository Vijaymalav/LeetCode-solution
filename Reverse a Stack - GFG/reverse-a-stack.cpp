// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
void pushbottom(stack<int>&st,int val){
        // cout<<"func call pushbottom"<<endl;
    if(st.empty()){
        st.push(val);
        return;
    }
    
    int ele=st.top();
    st.pop();
    pushbottom(st,val);
    st.push(ele);
}
void revstk(stack<int>&st){
    // cout<<"func call revstk"<<endl;
    if(st.empty())return;
    int ele=st.top();
    st.pop();
    revstk(st);
    pushbottom(st,ele);

}
    vector<int> Reverse(stack<int> St){
        // revstk(St);
        vector<int>ans;
        while(!St.empty()){
            ans.push_back(St.top());
            St.pop();
        }
        return ans;
    }
};

// { Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        vector<int> ans=ob.Reverse(St);
        for(int i=0;i<N;i++){
            cout<<ans[i];
            if(i!=N-1) cout<<" ";
        }
        cout<<endl;
    }
}  // } Driver Code Ends