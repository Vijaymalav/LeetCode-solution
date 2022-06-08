class Solution {
public:
     int removePalindromeSub(string S) {
         int ans=1;
        if (S == "") return 0;
        for (int i = 0, j = S.size() - 1; i < j; i++, j--)
            if (S[i] != S[j]){
                ans=2;
                break;
            }
        return ans;
    }
};