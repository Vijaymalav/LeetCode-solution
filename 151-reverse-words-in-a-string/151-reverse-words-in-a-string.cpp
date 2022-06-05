class Solution {
public:
    string reverseWords(string s) {
        stack<string>stk;
        
        string tmp="";
        for(int i=0;i<s.length();i++){
          
          if(s[i]==' ' and tmp!="" ){
                stk.push(tmp);
             tmp="";
            }
            else if(s[i]!=' ') tmp.push_back(s[i]);
        }
        if(tmp!="")stk.push(tmp);
        s="";
        while(!stk.empty()){
            string str=stk.top();
            stk.pop();
            s+=str;
            s.push_back(' ');
        }
        s.pop_back();
        return s;
    }
};