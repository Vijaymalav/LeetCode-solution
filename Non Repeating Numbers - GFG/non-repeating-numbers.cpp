// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        vector<int>ans;
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]==nums[i+1])i++;
        //     else{
        //         ans.push_back(nums[i]);
        //     }
        // }
        // if(nums[nums.size()-1]!=nums[nums.size()-2])ans.push_back(nums[nums.size()-1]);
        // return ans;
        
        // BY bit manupulation
        
        int n=nums.size();
        int xorr=0;
        for(int i=0;i<n;i++){
            xorr=xorr^nums[i];
        }
        // cout<<xorr<<endl;
        int x=0,y=0;
        int right_set_bit=xorr & ~(xorr-1);
        // cout<<"set bit"<<right_set_bit<<endl;
        for(int i=0;i<n;i++){
            if((right_set_bit & nums[i])==0){
                x=x^nums[i];
            }
            else{
                y=y^nums[i];
            }
        }
       if(x>y){
           ans.push_back(y);
        ans.push_back(x);
       }
       else{
            ans.push_back(x);
             ans.push_back(y);
       }
       return ans;
        
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends