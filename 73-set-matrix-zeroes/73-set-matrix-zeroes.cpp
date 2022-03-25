class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int n=mat.size();
        if(n==0)return;
        int m=mat[0].size();
        unordered_set<int>Rst,Cst;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    Rst.insert(i);
                    Cst.insert(j);
                }


            }
        }
          for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                     if(Rst.find(i)!=Rst.end()){
                    mat[i][j]=0;
                }
                else if(Cst.find(j)!=Cst.end()){
                     mat[i][j]=0;
                }

            }
        }
        
        
               
    }
};