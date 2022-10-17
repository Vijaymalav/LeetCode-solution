class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        int n=s.size(),ans=0;
        int i=0;
        for( i;i<(n-1);i++){
            if(m[s[i+1]]>m[s[i]]){
                ans+=(m[s[i+1]]-m[s[i]]);
                i++;
            }
            else {
                ans+=m[s[i]];
            }
        }
        if(i<n){
            ans+=m[s[i]];
        }
        return ans;
    }
};