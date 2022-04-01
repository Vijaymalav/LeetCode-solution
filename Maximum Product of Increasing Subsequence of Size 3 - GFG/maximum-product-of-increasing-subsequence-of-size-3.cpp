// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 



 // } Driver Code Ends


class Solution{
  public:
    vector<int> maxProductSubsequence(int *arr , int n) 
    { 
        // Complete the function
        vector<int>maxi(n),ans;
        maxi[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            maxi[i]=max(maxi[i+1],arr[i]);
        }
        long int res=-1;
        long int curr=0;
        long int last;
        set<int>st;
        st.insert(arr[0]);
        for(int i=1;i<n;i++){
            st.insert(arr[i]);
            auto it=st.find(arr[i]);
            if(it!=st.begin()){
                it--;
                last=*it;
                if(arr[i]<maxi[i]){
                  curr=last*arr[i]*maxi[i];
                  if(curr>res){
                   res=curr;
                   ans={last,arr[i],maxi[i]};
                  }
                }
            }
            
        }
        if(ans.empty()) return {-1};
        return ans;
    } 

};

// { Driver Code Starts.
// Driver Program 
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    
	    int num;
	    cin>>num;
	    int arr[num];
	    for(int i = 0; i<num; ++i)
	        cin>>arr[i];
	    
	    vector<int> res;
	    Solution obj;
	    res = obj.maxProductSubsequence(arr, num);
	    
	    if(res[0] == -1)
	        cout<<"Not Present\n";
	    else{
    	    for(int i = 0; i<3; ++i)
    	        cout<<res[i]<<" ";
    	    cout<<"\n";
	    }
	    
	}
} 
  // } Driver Code Ends