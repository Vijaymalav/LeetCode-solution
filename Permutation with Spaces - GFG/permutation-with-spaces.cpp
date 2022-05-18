// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
vector<string>ans;
     void solvee(string s, string res, int curr){
        if(curr>=s.size() && res.size()>=s.size()){
            if(res[0]!=' ' && res[res.size()-1]!=' ')
                ans.push_back(res);
            return;
        }
        char val = s[curr];
        res.push_back(val);
        res.push_back(' ');
        solvee(s, res, curr+1);
        res.pop_back();
        solvee(s, res, curr+1);
    }
    vector<string> permutation(string S){
        // Code Here
        solvee(S, "", 0);
        return ans;
    }
};

// { Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}
  // } Driver Code Ends