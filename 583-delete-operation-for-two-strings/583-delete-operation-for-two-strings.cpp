class Solution {
public:
 int minDistance(string& word1, string& word2) {        
	vector<vector<int> >dp(2, vector<int>(size(word2) + 1));
     int n=size(word1);
     int m=size(word2);
	for(int i = 0; i <= n; i++) 
		for(int j = 0; j <= m; j++) 
			if(!i || !j) dp[i & 1][j] = i + j;
			else dp[i & 1][j] = word1[i - 1] == word2[j - 1] ? dp[(i - 1) & 1][j - 1] : 1 + min(dp[(i - 1) & 1][j], dp[i & 1][j - 1]);
	return dp[size(word1) & 1][size(word2)];
}

};