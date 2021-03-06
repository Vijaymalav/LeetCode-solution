class Solution {
public:
   void combination(vector<vector<int>>& ans, vector<int> sol, int k, int n) {
    if (sol.size() == k && n == 0) { ans.push_back(sol); return ; }
    if (sol.size() < k) {
      for (int i = sol.empty() ? 1 : sol.back() + 1; i <= 9; ++i) {
        if (n - i < 0) break;
        sol.push_back(i);
        combination(ans, sol, k, n - i);
        sol.pop_back();
      }
    }
  }

  vector<vector<int>> combinationSum3(int k, int n) {
    vector<vector<int>> ans;
    vector<int> sol;
    combination(ans, sol, k, n);
    return ans;
  }
};