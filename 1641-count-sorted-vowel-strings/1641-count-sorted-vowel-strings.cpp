class Solution {
public:
    int countVowelStrings(int n) {
        vector<int> t(5, 1);
        int res = 0;
        
        while(--n){
            for(int i=3; i>=0; i--){
                t[i] += t[i+1];
            }
        }
        
        for(auto x:t) res += x;
        
        return res;
    }
};