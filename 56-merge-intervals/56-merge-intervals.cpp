class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        sort(in.begin(),in.end());
        stack<pair<int,int>>st;
        vector<vector<int>>ans;
        int n=in.size();
        for(int i=0;i<n;i++){
            if(!st.empty()){
                if(st.top().second>=in[i][0]){
                    st.top().second=max(st.top().second,in[i][1]);
                }
                else st.push({in[i][0],in[i][1]});
                
            }
            else st.push({in[i][0],in[i][1]});
        }
        while(!st.empty()){
            ans.push_back({st.top().first,st.top().second});
            st.pop();
        }
            
        reverse(ans.begin(),ans.end());
        return ans;
        
        
    }
};