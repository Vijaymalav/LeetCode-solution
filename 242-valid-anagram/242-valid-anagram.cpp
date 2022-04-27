class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>vec(26,0);
        vector<int>ans=vec;
        for(auto ch:s){
            vec[ch-'a']++;
        }
        
        for(auto ch:t){
            vec[ch-'a']--;
        }
       return vec==ans;
    }
};