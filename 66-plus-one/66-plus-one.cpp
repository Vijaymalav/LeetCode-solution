class Solution {
public:
    vector<int> plusOne(vector<int>& dig) {
        int n=dig.size();
        int add=1;
        for(int i=n-1;i>=0;i--){
            int val=dig[i]+add;
            if(val<=9){
                dig[i]=val;
                add=val/10;
                break;
            }
            else {
                dig[i]=val%10;
                add=val/10;
            }
            
        
        }
        if(add){
            reverse(dig.begin(),dig.end());
            dig.push_back(add);
               reverse(dig.begin(),dig.end());
        }
        return dig;
    }
};