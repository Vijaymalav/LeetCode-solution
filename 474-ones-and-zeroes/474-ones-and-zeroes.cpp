class Solution {
public:
 int findMaxForm(vector<string>& strs, int m, int n) {
  vector<vector<int>> memo(m+1, vector<int>(n+1, 0));
  int numZero, numOne;

  for (auto &s : strs) {
    numZero = numOne = 0;
    // count number of zeroes and ones in current string
    for (auto c : s) {
      if (c == '0')
	numZero++;
      else if (c == '1')
	numOne++;
    }
      
    for (int i = m; i >= numZero; i--) {
	for (int j = n; j >= numOne; j--) {
          memo[i][j] = max(memo[i][j], memo[i - numZero][j - numOne] + 1);
	}
    }
  }
  return memo[m][n];
}
};