class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0,j=0;
        int n=fruits.size();
        unordered_map<int,int>m;
        int mx=INT_MIN;
        while(j<n){
            if(m.find(fruits[j])==m.end()){
                if(m.size()==2){
                    mx=max(mx,(j-i));
                 for(i;i<j;i++){
                     m[fruits[i]]--;
                     if(m[fruits[i]]==0){
                         
                         m.erase(fruits[i]);
                         i++;
                         break;
                     }
                 }
            
                }
                m[fruits[j]]++;
                j++;
            }
            else{
                 m[fruits[j]]++;
                j++;
            }
        }
           mx=max(mx,(j-i));
        return mx;
        
    }
};