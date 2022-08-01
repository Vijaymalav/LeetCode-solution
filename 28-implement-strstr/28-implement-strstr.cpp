class Solution {
public:
    int strStr(string A, string B) {
        int n=A.size();
        int m=B.size();
        for(int i=0;i<=(n-m);i++){
            string str=A.substr(i,m);
            if(str==B)return i;
        }
        return -1;
        
    }
};