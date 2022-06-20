class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string>vecstr;
        for(int i=1;i<=n;i++){
        vecstr.push_back(to_string(i));
        }
        sort(vecstr.begin(),vecstr.end());
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(stoi(vecstr[i]));
        }
        return ans;
    }
};