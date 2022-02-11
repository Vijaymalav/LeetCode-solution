// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
  public:
    string newIPAdd (string s)
    {
        //code here.
        int n=s.size();
        string ans="";
        string tmp="";
        int i=0;
       while(i<n){
            tmp.push_back(s[i]);
            i++;
            if(s[i]=='.'){
                i++;
                int cnt=0;
                int idx;
                for(int j=0;j<tmp.size();j++){
                    if(tmp[j]!='0'){
                        idx=j;
                        break;
                    }
                    cnt++;
                }
                if(cnt==tmp.size()){
                    ans+="0.";
                    tmp="";
                }
                else{
                  
                    ans+=tmp.substr(idx);
                      ans.push_back('.');
                    tmp="";
                }
            }
            
        } 
        int cnt=0;
                int idx;
        for(int j=0;j<tmp.size();j++){
                    if(tmp[j]!='0'){
                        idx=j;
                        break;
                    }
                    cnt++;
                }
                if(cnt==tmp.size()){
                    ans+="0";
                   
                }
                else{
                  
                    ans+=tmp.substr(idx);
                     
           
                }
       
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.newIPAdd (s) << endl;
    }
}

  // } Driver Code Ends