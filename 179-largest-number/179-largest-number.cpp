class Solution {
public:
   static bool comp(string &s1,string &s2){
        if((s1+s2)>(s2+s1))return true;
        return false;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> vec;
        for(auto num:nums){
            vec.push_back(to_string(num));
        }
        sort(vec.begin(),vec.end(),comp);
        string ans;
        for(auto it:vec){
            ans+=it;
        }
        int i=0;
        while( ans.size()>1){
            if(ans[0]=='0'){
                ans.erase(0,1);
            }
            else break;
        }
        return ans;
    }
};