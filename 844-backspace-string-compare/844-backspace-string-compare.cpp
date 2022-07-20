class Solution {
public:
   bool backspaceCompare(string S, string T) {
        // int i = S.length() - 1, j = T.length() - 1, back;
        // while (1) {
        //     back = 0;
        //     while (i >= 0 && (back > 0 || S[i] == '#')) {
        //         back += S[i] == '#' ? 1 : -1;
        //         i--;
        //     }
        //     back = 0;
        //     while (j >= 0 && (back > 0 || T[j] == '#')) {
        //         back += T[j] == '#' ? 1 : -1;
        //         j--;
        //     }
        //     if (i >= 0 && j >= 0 && S[i] == T[j]) {
        //         i--;
        //         j--;
        //     } else {
        //         break;
        //     }
        // }
        // return i == -1 && j == -1;
       
       stack<char>st1,st2;
       for(auto ch:S){
           if(ch!='#')st1.push(ch);
           else if(!st1.empty()) {
               st1.pop();
           }
       }
        for(auto ch:T){
           if(ch!='#')st2.push(ch);
           else if(!st2.empty()) {
               st2.pop();
           }
       }
       return st1==st2;
    }
};