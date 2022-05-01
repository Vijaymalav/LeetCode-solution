// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
bool Prime(int number){
    if (number == 0 || number == 1 || (number % 2 == 0 && number > 2)) {
 return false;
}

else {
 for (long long i=3; i <= (long long)sqrt(number)+1; i++) {
  if (number % i == 0) {
   return false;
  }
 }
 return true;
}
}
int superPrimes(int n)
{
    // Your code goes here
    vector<int> vec;
    int count = 0;
    for(int i=2;i<=n;i++){
        if(Prime(i)){
            vec.push_back(i);
        }
    }
    for(int i=1;i<vec.size();i++){
        if(vec[i] - vec[i-1] == 2){
            count++;
        } 
    }
    
    return count;
}
};

// { Driver Code Starts.

int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
   		Solution ob;
   		cout << ob.superPrimes(n) << "\n";
   	}

    return 0;
}
  // } Driver Code Ends