class Solution {
public:
    int maxProfit(vector<int>& p) {
       int ans=0;
        int b=p[0];
        for(int i=1;i<p.size();i++){
            if(b<p[i]){
                ans=max(ans,p[i]-b);
                
             }
            else b=p[i];
        }
        return ans;
    }
};