class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
     vector<vector<int>>ans(n,vector<int>(n));
        int k=1,dr=0;
        int l=0,r=n-1,t=0,b=n-1;
        int i=0,j=0;
        while(l<=r and t<=b){
            
            if(dr==0){
                i=t;
                j=l;
                while(j<=r){
                    ans[i][j++]=k++;
                }
                t++;
            }
            else  if(dr==1){
              i=t;
              j=r;
              while(i<=b)  ans[i++][j]=k++;
                r--;
            }
          else if(dr==2){
              i=b;
              j=r;
              while(j>=l)  ans[i][j--]=k++;
                b--;
            }
            else if(dr==3){
              i=b;
              j=l;
              while(i>=t)  ans[i--][j]=k++;
                l++;
            }
            
            dr=(dr+1)%4;
            
        }
        return ans;
    }
};