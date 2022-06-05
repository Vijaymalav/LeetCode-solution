class Solution {
public:

    string longestPalindrome(string s) {
        int n=s.size();
        int x=0;
        int y=0;
        vector<vector<bool>>dp(n+1,vector<bool>(n+1,false));
        for(int g=0;g<n;g++){           // g means gap 
            for(int i=0,j=g;i<n and j<n;j++,i++){
                if(g==0)dp[i][j]=true;
                else if(g==1){
                    if(s[i]==s[j])dp[i][j]=true;
                    else dp[i][j]=false;
                }
                else {
                    if(s[i]==s[j] and dp[i+1][j-1]==true){
                        dp[i][j]=true;
                    }
                    else dp[i][j]=false;
                }
                
                if(dp[i][j]){
                    x=i;
                    y=g;
                }
                
                
            }
            
            
        }
        return s.substr(x,y+1);
        
        
        
        
//         int n=s.size();
//         int x=0,y=0;
//         vector<vector<bool>>dp(n+1,vector<bool>(n+1,false));
//         for(int g=0;g<n;g++){
//             for(int i=0,j=g;i<n and j<n;i++,j++){
//               if(g==0){
//                   dp[i][j]=true;
//               }else if(g==1){
//                   if(s[i]==s[j])dp[i][j]=true;
//                   else dp[i][j]=false;
//               }
//                 else{
//                     if(s[i]==s[j] and dp[i+1][j-1]==true){
//                         dp[i][j]=true;
//                     }
//                     else dp[i][j]=false;
//                 }
                
                
//                 if(dp[i][j]){
//                     x=i;
//                     y=j;
//                 }
//             }
//         }
//         return s.substr(x,y-x+1);
        
        
        
    }
};