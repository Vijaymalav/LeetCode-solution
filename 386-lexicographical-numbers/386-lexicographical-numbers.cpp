class Solution {
public:

        
        
 vector<int> ans;
    void dfs(int i,int n){
    if(i>n){
        return;
    }
        ans.push_back(i);
    for(int j=0;j<10;j++){
    dfs(10*i+j,n);    
    }
    
}
    vector<int> lexicalOrder(int n) {
        for(int i=1;i<=9;i++){
            dfs(i,n);
        }
        return ans;
    }
        
        
        
        
        
        
        // vector<string>vecstr;
        // for(int i=1;i<=n;i++){
        // vecstr.push_back(to_string(i));
        // }
        // sort(vecstr.begin(),vecstr.end());
        // vector<int>ans;
        // for(int i=0;i<n;i++){
        //     ans.push_back(stoi(vecstr[i]));
        // }
        // return ans;
        
        
        
        
    
};