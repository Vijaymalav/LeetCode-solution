// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int find(string str,int l,int r){
        unordered_set<char>st;
        for(int i=l;i<r;i++){
            st.insert(str[i]);
        }
        return st.size();
    }
	vector<int>SolveQueris(string str, vector<vector<int>>Query){
	    // Code here
	    vector<int>vec;
	    for(auto it:Query){
	        vec.push_back(find(str,it[0]-1,it[1]));
	    }
	    return vec;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		int q;
		cin >> q;
		vector<vector<int>>Query;
		for(int i = 0; i < q; i++){
			int l, r;
			cin >> l >> r;
			Query.push_back({l, r});
		}
		Solution obj;
		vector<int> ans = obj.SolveQueris(str, Query);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends