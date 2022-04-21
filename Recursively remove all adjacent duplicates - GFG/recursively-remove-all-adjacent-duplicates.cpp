// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
  string remove(string s){
        string ans;
        int len = s.length();
        if(s[0] != s[1])
            ans.push_back(s[0]);
        bool f = 0;
        for(int i = 1; i < len; i++){
            while(s[i] == s[i+1]){
                f = 1;
                i++;
            }
            if(i > 0 && s[i] != s[i-1])
                ans.push_back(s[i]);
        }
        if(f == 0)
            return ans;
        return remove(ans);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.remove(s) << "\n";
    }
    return 0;
}  // } Driver Code Ends