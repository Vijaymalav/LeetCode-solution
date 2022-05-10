// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
     vector<int> res;
   void divid(int l, int r, vector<int>&nums)
   {
       if (l > r)
           return;
       if (l == r)
       {
           res.push_back(nums[l]);
           return;
       }
       int mid = (l + r) / 2LL;
       res.push_back(nums[mid]);
       divid(l, mid - 1, nums);
       divid(mid + 1, r, nums);
   }
   vector<int> sortedArrayToBST(vector<int>& nums) {
       sort(nums.begin(), nums.end());
       divid(0, nums.size() - 1, nums);
       return res;
   }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends