// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int dist(string str){
        unordered_set<char>st;
        for(auto ch:str){
            st.insert(ch);
        }
        return st.size();
    }
    int findSubString(string str)
    {
        unordered_map<char,int>m;
        int ans=INT_MAX;
        int n=str.size();
        int sz=dist(str);
       
        if(sz<=1)return sz;
        int i=0, j=0;
        while(i<=j and j<n){
            // cout<< "j is "<< j << " i is "<<i<<endl;
            m[str[j]]++;
           
            if(m.size()==sz){
                while(i<=j){
                m[str[i]]--;
                
                if(m[str[i]]==0){
                    // cout<< "j is "<< j << " i is "<<i<<endl;
                   ans=min(ans,(j-i+1));
                //   cout<<"before "<<m.size()<<endl;
                   m.erase(str[i]);
                   i++;
                    // cout<<"after "<<m.size()<<endl;
                   break;
                }
                i++;
                }
            }
             j++;
        }
        return ans;
    }
};

// { Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}  // } Driver Code Ends