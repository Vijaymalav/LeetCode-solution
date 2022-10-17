//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here   
         vector<long long int>vec(n,0);
        long long int mult=1;
        int cnt=0,ind;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                ind=i;
                cnt++;
            }
            else {
                mult*=nums[i];
            }
        }
        if(cnt==1){
           
             vec[ind]=mult;
             return vec;
        }
        if(cnt>1){
       
            return vec;
        }
        for(int i=0;i<n;i++){
            vec[i]=mult/nums[i];
        }
        return vec;
    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends