class Solution {
public:
     void dfs(string s,string d , unordered_map<string,vector<pair<string,double>>>&m,double &ans,unordered_set<string>&st,double temp){
       if(st.find(s)!=st.end()){
           return ;
       }
  else{
      st.insert(s);
      if(s==d){
          ans=temp;
          return;
      }
      else{
          for(auto x:m[s]){
              dfs(x.first,d,m,ans,st,temp*x.second);
          }
      }
  }
        
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        unordered_map<string,vector<pair<string,double>>>m;
        for(int i=0;i<equations.size();i++){
            m[equations[i][0]].push_back({equations[i][1],values[i]});
             m[equations[i][1]].push_back({equations[i][0],1/values[i]});
        }
        vector<double>res;
        for(int i=0;i<queries.size();i++){
            string s=queries[i][0];
            string d=queries[i][1];
            
            double ans=-1.0;
           unordered_set<string>st;
            if(m.find(s)!=m.end() and m.find(d)!=m.end())
                dfs(s,d,m,ans,st,1.0);
                    res.push_back(ans);
            
         
        }
        return res;
    }

};