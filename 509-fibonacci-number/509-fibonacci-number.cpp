class Solution {
public:
    int fib(int n) {
     
        if(n==0 || n==1)return n;
        int f=0,s=1,val;
        for(int i=1;i<n;i++){
            val=f+s;
            f=s;
            s=val;
        }
        return val;
    }
};