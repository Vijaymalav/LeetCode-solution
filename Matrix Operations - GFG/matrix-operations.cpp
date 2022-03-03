// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> mat){
        //code here
        pair<int,int>ans;
        int n=mat.size();
        int m=mat[0].size();
        char d='r';
        int i=0;
        int j=0;
        do{
            if(mat[i][j]==1){
                mat[i][j]=0;
                if(d=='u')d='r';
                 else if(d=='r')d='d';   
                 else if(d=='d')d='l'; 
                 else if(d=='l')d='u'; 
            }
            if(d=='r')j++;
            else if(d=='l')j--;
            else if(d=='d')i++;
            else if(d=='u')i--;
            
        }while(i>=0 and j>=0 and i<n and j<m);
     if(d=='r')j--;
     else if(d=='l')j++;
     else if(d=='u')i++;
     else if(d=='d')i--;
     ans.first=i;
     ans.second=j;
     return ans;
   
    }

};

// { Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}  // } Driver Code Ends