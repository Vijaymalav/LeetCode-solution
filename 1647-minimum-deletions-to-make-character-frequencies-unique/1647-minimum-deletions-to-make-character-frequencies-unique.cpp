class Solution {
public:
    int minDeletions(string s) {
        int ans=0;
        unordered_map<char,int>fq;
        unordered_set<int>st;
        for(auto ch:s)fq[ch]++;
        for(auto it:fq){
            int f=it.second;
            int k=f;
            while( f and st.find(f)!=st.end()){
                f--;
            }
            st.insert(f);
            ans+=(k-f);
        }
        return ans;
    }
};