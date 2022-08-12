class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>>row(9,vector<int>(9,-1));
         vector<vector<int>>col(9,vector<int>(9,-1));
         vector<vector<int>>box(9,vector<int>(9,-1));
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){
                if(board[i][j]=='.')continue;
                int b=(i/3)*3+j/3;
                if(row[i][board[i][j]-'1']!=-1 || col[j][board[i][j]-'1']!=-1 || box[b][board[i][j]-'1']!=-1)return false;
                row[i][board[i][j]-'1']=1;
                col[j][board[i][j]-'1']=1;
                box[b][board[i][j]-'1']=1;
            }
        }
        return true;
        
    }
};