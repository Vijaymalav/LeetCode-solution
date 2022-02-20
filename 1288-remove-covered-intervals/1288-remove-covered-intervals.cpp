class Solution {
public:
   static bool comp(vector<int>&a ,vector<int>&b){
        if(a[1]==b[1])return a[0]<b[0];
        return a[1]>b[1];
    }
    int removeCoveredIntervals(vector<vector<int>>& inter) {
        stack<pair<int,int>>st;
        int cnt=0;
        int n=inter.size();
        sort(inter.begin(),inter.end(),comp);
        for(auto it:inter){
            if(st.empty()){
                st.push({it[0],it[1]});
                continue;
            }
            auto tp=st.top();
            int f1=tp.first;
            int s1=tp.second;
            int f2=it[0];
            int s2=it[1];
            if(f2>=f1 and s1>=s2){
                cnt++;
             
            }
            else{
                st.pop();
                st.push({f2,s2});
            }
            
        }
        
        
        return n-cnt;
    }
};