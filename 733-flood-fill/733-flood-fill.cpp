class Solution {
public:
      void dfs(vector<vector<int>>&img,int row,int col,int newclr,int currclr,int i,int j, vector<vector<bool>>&vis){
        if(i<0 || j<0 || i>=row || j>=col || img[i][j]!=currclr || vis[i][j])return ;
        img[i][j]=newclr;
        vis[i][j]=true;
            dfs(img,row,col,newclr,currclr,i+1,j,vis);
        
        
            dfs(img,row,col,newclr,currclr,i,j+1,vis);
       
       
            dfs(img,row,col,newclr,currclr,i-1,j,vis);
        
        
            dfs(img,row,col,newclr,currclr,i,j-1,vis);
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int row=image.size();
        int col=image[0].size();
         vector<vector<bool>>vis(row,vector<bool>(col,false));
        dfs(image,row,col,newColor,image[sr][sc],sr,sc,vis);
        return image;
    }
};