class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>m;
        for(auto it:arr)m[it]++;
        
        vector<int>vec;
        for(auto it:m){
            vec.push_back(it.second);
            
        }
        sort(vec.begin(),vec.end());
        int cnt=0;
        int sz=n;
        for(int i=vec.size()-1;i>=0;i--){
            sz-=vec[i];
            cnt++;
            if(sz<=(n/2))return cnt;
        }
        return cnt;
        
    }
};