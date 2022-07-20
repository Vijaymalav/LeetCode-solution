class Solution {
public:
    bool check(string str1,string str2){
        int n=str1.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(j==str2.size())break;
            if(str1[i]==str2[j]){
                j++;
            }
        }
        if(j==str2.size())return true;
        return false;
    }
    int numMatchingSubseq(string s, vector<string>& words) {
        int n=s.size();
        int ans=0;
        unordered_map<string,int>m;
            for(auto str:words){
          m[str]++;
        }
        for(auto it:m){
            if(check(s,it.first)){
                ans+=it.second;
            }
        }
        return ans;
    }
};