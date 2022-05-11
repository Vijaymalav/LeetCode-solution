// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return Largest Number

class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
   string largestNumber(int n, int sum)
    {
        string ans;
        for(int i=0;i<n;i++){
            int lrg= 9;
           
            while(sum-lrg<0)lrg--;
            
            sum=sum-lrg;
            ans+=to_string(lrg);
        }
        if(sum!=0)return "-1";
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin>>t;

	while(t--)
	{
	    //taking n and sum
		int n,sum;
		cin>>n>>sum;
		
        Solution obj;
        //function call
		cout<<obj.largestNumber(n, sum)<<endl;
	}
	return 0;
}  // } Driver Code Ends