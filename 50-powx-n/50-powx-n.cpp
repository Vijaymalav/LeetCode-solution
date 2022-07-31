class Solution {
public:
    double myPow(double x, int n) {
          double ans=(double)1.0;
        if(x==1.0)return (double)1.0;
        long p=n;
        if(p<0)p=-1*p;
        while(p){
            if(p%2==0){
                x=x*x;
                p=p/2;
            }
            else {
                ans=ans*x;
                p=p-1;
            }
        }
        if(n<0){
            return (double)1.0/ans;
        }
        return ans;
    }
};