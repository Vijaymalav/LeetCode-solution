class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int> > &Grid) {
        int m = Grid.size() , n = Grid[0].size();
        vector<vector<int>> t(m+1,vector<int>(n+1,0));
        t[0][1] = 1;
        for(int i = 1 ; i <= m ; ++i)
            for(int j = 1 ; j <= n ; ++j)
                if(!Grid[i-1][j-1])
                    t[i][j] = t[i-1][j]+t[i][j-1];
        return t[m][n];
    }
};