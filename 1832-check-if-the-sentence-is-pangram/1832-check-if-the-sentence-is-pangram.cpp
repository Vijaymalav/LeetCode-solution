class Solution {
public:
    bool checkIfPangram(string s) {
        unordered_set<char>st;
        for(auto ch:s)st.insert(ch);
        return st.size()==26;
    }
};