class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>pos(26,0);
        vector<int>ans;
        int h=0;
        int sm=0;
        
        for(int i=0;i<s.size();i++){
            pos[s[i]-'a']=i;
        }
        for(int i=0;i<s.size();i++){
            if(h<i){
                ans.push_back(h-sm+1);
                sm=i;
                h=pos[s[i]-'a'];
            }
            
            else{
                h=max(h,pos[s[i]-'a']);
            }
        }
        ans.push_back(h-sm+1);
        return ans;
    }
};