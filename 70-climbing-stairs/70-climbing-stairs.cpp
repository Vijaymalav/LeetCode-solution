class Solution {
public:
//     int helper(int n,vector<int>&vec){
     
//         if(vec[n]!=-1)return vec[n];
//         return vec[n]= climbStairs(n-1)+climbStairs(n-2);
//     }
    int climbStairs(int n) {
           if(n==1 || n==2)return n;
        vector<int>vec(n+1);
        vec[1]=1;
        vec[2]=2;
        for(int i=3;i<=n;i++){
            vec[i]=vec[i-1]+vec[i-2];
        }
        return vec[n];
    }
};