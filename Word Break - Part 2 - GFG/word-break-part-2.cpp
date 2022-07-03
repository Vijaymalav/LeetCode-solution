// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<bool>> present;
   void getAns(int r , int c ,int len, string curr, string &s , vector<string>&ans){
       if(r == len){
               string x = curr;
               x.pop_back();
               ans.push_back(x);
           return;
       }
       for(int i = c; i < len; i++){
           curr += s[i];
           if(present[r][i]){
               curr += " ";
               getAns(i + 1, i + 1, len, curr , s , ans);
               curr.pop_back();
           }
       }
   }
   vector<string> wordBreak(int n, vector<string>& dict, string s)
   {
       int len = s.length();
       present.resize(len , vector<bool>(len , false));
       for(int i = 0; i < len; i++){
           string curr = "";
           for(int j = i; j < len; j++){
               curr += s[j];
               for(int k = 0; k < n; k++){
                   if(dict[k] == curr){
                       present[i][j] = true;
                       break;
                   }
               }
           }
       }
       vector<string> ans;
       getAns(0,0,len,"",s, ans);
     
       return ans;
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<string> dict;
        string s;
        cin>>n;
        for(int i = 0;i < n;i++){
            cin>>s;
            dict.push_back(s);
        }
        cin>>s;
        
        Solution ob;
        vector<string> ans = ob.wordBreak(n, dict, s);
        if(ans.size() == 0)
            cout<<"Empty\n";
        else{
            sort(ans.begin(), ans.end());
            for(int i = 0;i < ans.size();i++)
                cout<<"("<<ans[i]<<")";
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends