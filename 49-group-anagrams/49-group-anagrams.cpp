class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string ,vector<string>>m;
        for(auto str:strs){
            string s=str;
            sort(s.begin(),s.end());
            m[s].push_back(str);
        }
        vector<vector<string>>ans;
        if(m.size()==0){
            return {{""}};
        }
        for(auto v:m){
            ans.push_back(v.second);
        }
        return ans;
    }
};