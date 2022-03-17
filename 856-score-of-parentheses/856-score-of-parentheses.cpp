class Solution {
public:
  int i=0;
        int scoreOfParentheses(string s) {
      int score=0;
          
            
            while(i<s.size()){
             char first=s[i];i++;
            if(first=='('){
                if(s[i]==')'){
                    score=score+1;
                    i++;
                }
                else{
                    score=score+2*(scoreOfParentheses(s));
                }
            }
            else return score;
            }
        return score;
    }
};