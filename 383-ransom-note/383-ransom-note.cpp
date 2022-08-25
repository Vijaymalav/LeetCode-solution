class Solution {
public:
    bool canConstruct(string ran, string mag) {
        vector<int>vec(26,0);
        for(auto ch:mag)vec[ch-'a']++;
        for(auto ch:ran){
          
            vec[ch-'a']--;
              if(vec[ch-'a']<0)return false;
        }
        return true;
    }
};