class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans=num;
        int n=num.size()-k;
        if(k>=num.size())return "0";
        int top=-1,start=0;
        
        for(int i=0;i<ans.size();i++){
            while(top>=0 and ans[top]>ans[i] and k>0){
                top--;
                k--;
            }
            top++;
            ans[top]=ans[i];
        }
        while(start<=top and ans[start]=='0')start++;
        
       string res="";
        for(int i=start;i<n;i++){
            res.push_back(ans[i]);
        }
        if(res=="")return "0";
        return res;
    }
};