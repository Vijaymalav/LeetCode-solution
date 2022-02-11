class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())return false;
        vector<int>vec1(26,0);
        vector<int>vec2(26,0);
        for(int i=0;i<s1.size();i++){
            vec2[s2[i]-'a']++;
            vec1[s1[i]-'a']++;
        }
        if(vec1==vec2)return true;
        int j=0;
        for(int i=s1.size();i<s2.size();i++){
            vec2[s2[j++]-'a']--;
             vec2[s2[i]-'a']++;
            if(vec1==vec2)return true;
            
        }
        
        return false;
    }
};