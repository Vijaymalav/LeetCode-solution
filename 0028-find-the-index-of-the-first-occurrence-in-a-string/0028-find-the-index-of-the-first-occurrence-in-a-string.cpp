class Solution {
public:
    int strStr(string h, string n) {
        
        int l=n.size();
        if(h.size()<l)return -1;
        for(int i=0;i<=(h.size()-l);i++){
            string str=h.substr(i,l);
            if(str==n){
                return i;
            }
        }
        return -1;
        
    }
};