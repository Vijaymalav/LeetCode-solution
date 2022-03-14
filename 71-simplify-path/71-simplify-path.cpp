class Solution {
public:
    stack<string> revstk(stack<string> stk){
        stack<string> s;
        while(!stk.empty()){
            s.push(stk.top());
            stk.pop();
        }
        return s;
    }
    string simplifyPath(string path) {
        string ans="/";
        vector<string>vec;
        string tmp="";
        for(auto ch:path){
            if(ch=='/'){
                vec.push_back(tmp);
                tmp="";
            }
            else{
                tmp.push_back(ch);
            }
        }
     if(tmp!="")vec.push_back(tmp);
        // reverse(vec.begin(),vec.end());
        stack<string>stk;
        for(auto s:vec){
            if(s=="" or s=="." or (stk.empty() and s==".."))continue;
            else if(s==".." and !stk.empty())stk.pop();
            else  stk.push(s);
        }
        stk=revstk(stk);
        while(!stk.empty()){
            ans+=stk.top();
            ans.push_back('/');
            stk.pop();
        }
        ans.pop_back();
        // reverse(ans.begin(),ans.end());
        return ans==""?"/":ans;
        
    }
};