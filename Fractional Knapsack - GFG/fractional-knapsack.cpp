// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool comp(pair<double,int>&a,pair<double,int>&b){
        return a.first>b.first;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        vector<pair<double,int>>vec(n);
        double ans=0;
        for(int i=0;i<n;i++){
            vec[i]={((double)arr[i].value/(double)arr[i].weight),arr[i].weight};
        }
        sort(vec.begin(),vec.end(),comp);
        for(int i=0;i<n;i++){
            if(vec[i].second<=W){
                ans+=(vec[i].first*vec[i].second);
                W-=vec[i].second;
            }
            else {
                ans+=(vec[i].first*W);
                break;
            }
        }
        
        return ans;
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends