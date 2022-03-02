class Solution {
public:
    bool issub(string s,string t,int n,int m){
       
         if(m==0)return true;
         if(n==0)return false;
       if(s[m-1]==t[n-1]){
           return issub(s,t,n-1,m-1);
       }
        return issub(s,t,n-1,m);
    }
    bool isSubsequence(string s, string t) {

        int n=t.size();
        int m=s.size();
     return issub(s,t,n,m);;
        
      
    }
};