class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        int i=0,j=cp.size()-1;
        int ans=0,sum=0;
        for(int i=0;i<k;i++){
            sum+=cp[j];
            j--;
        }
        
        j++;
        ans=sum;
        while(j<cp.size()){
            sum+=cp[i++];
            sum-=cp[j++];
            ans=max(ans,sum);
        }
        return ans;
        
    }
};