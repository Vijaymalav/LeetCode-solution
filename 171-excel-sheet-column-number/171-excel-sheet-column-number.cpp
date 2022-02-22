class Solution {
public:
    int titleToNumber(string col) {
        // vector<int>vec(26,0);
        // for(int i=0;i<26;i++)vec[i]=i+1;
        int n=col.size()-1;
        int ans=0;
        for(int i=0;i<=n;i++){
            ans+=pow(26,i)*(col[n-i]-'A'+1);
        }
        return ans;
    }
};