class Solution {
public:
    int set(int n){
      if(n==0)return 0;
        int cnt=0;
        while(n){
            cnt++;
            n=n&(n-1);
        }
        return cnt;
    }
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            int setbit=set(i);
            ans.push_back(setbit);
        }
        return ans;
    }
};