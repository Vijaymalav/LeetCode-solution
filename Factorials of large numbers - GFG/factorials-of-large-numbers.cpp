// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
void multiply(vector<int> &fac, int n){
       int carry = 0;
       for(int i=0; i<fac.size(); i++){
           int data = fac[i] * n + carry;
           fac[i] = data % 10;
           carry = data / 10;
       }
       while(carry){
           fac.push_back(carry % 10);
           carry /= 10;
       }
   }
      vector<int> factorial(int N){
       vector<int> fac = {1};
       for(int i=2; i<=N; i++){
           multiply(fac,i);
       }
       
       reverse(fac.begin(),fac.end());
       return (fac);
   }


};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends