class Solution {
public:
    int mySqrt(int x) {
        long long h=x;
        long long l=0;
        long long ans;
        while(l<=h){
            long long  mid=(h+l)/2;
         
            if(mid*mid==x )return mid;
            if(mid*mid<x){
             l=mid+1;
                ans=mid;
                
            }
            else h=mid-1;
        }
        return ans;
    }
};