class Solution {
public:
     bool checkCommon(bitset<26> &a, bitset<26> &b){ // function to check if two bitset are common
        for(int i=0;i<26;i++) if(a[i] && b[i]) return true; // if any of the bits are true, return true
        return false; // otherwise return false
    }
    int maxProduct(vector<string>& words) { 
        int n = words.size();
        int ans=0; 
        vector<bitset<26>> Bs(n); 
        for(int i=0;i<n;i++){ 
            for(auto &ch:words[i]) 
                Bs[i][ch-'a'] =1; 
            for(int j=0;j<i;j++) 
                if(!checkCommon(Bs[i],Bs[j])) 
                    ans = max(ans, (int)words[i].size()*(int)words[j].size()); 
        }
        return ans; // return the answer
    }
};