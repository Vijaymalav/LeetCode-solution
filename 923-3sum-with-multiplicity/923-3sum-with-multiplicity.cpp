class Solution {
public:
   
//     int threeSumMulti(vector<int>& arr, int target) {
//         sort(arr.begin(),arr.end());
//         int n=arr.size();
//          int mx= 1e9+7;
//         int ans=0;
//         for(int i=0;i<n-2;i++){
//             int j=i+1;
//             int k=n-1;
//             int tar=target-arr[i];
           
//             while(j<k){
//              int sum=arr[j]+arr[k];
//                 if(sum==tar){
//                     if(arr[j]==arr[k]){
//                         ans+=((( (k-j)*(k-j+1))>>1)%mx)%mx;
                       
//                         break;
//                     }
//                     else{
//                         int cnt1=1;
//                         while(j+1<k and  arr[j]==arr[j+1]  ){
//                             j++;
//                             cnt1++;
//                         }
//                         int cnt2=1;
//                          while( (k-1)>j and arr[k]==arr[k-1]   ) {
//                             k--;
//                             cnt2++;
//                         }
                    
//                         ans+=(cnt1*cnt2)%mx;
//                             i++;
//                         k--;
                        
//                     }
//                 }
//                 else if(sum<tar)j++; 
//                 else  k--;
                
//             }
          
//         }
//           return ans;
//     }
    int threeSumMulti(vector<int>& arr, int target) {
        sort(begin(arr),end(arr));//because sort will help us to use two pointer
        int n=arr.size();
        int mod=1e9+7;
        int cnt=0;
        for(int i=0;i<n-2;i++){
            int low=i+1,high=n-1;
            int temp=target-arr[i];
            while(low<high){
             if(arr[low]+arr[high]==temp){
               if(arr[low]==arr[high]){//from low to high all are equal then simply add number of pairs in ans
                 cnt=(cnt+(((high-low)*(high-low+1))>>1)%mod)%mod; break;
               }else{
                 int l=1,r=1;
                while(low + 1 < high && arr[low] == arr[low + 1]) low++,l++;
            while(high - 1 >= low && arr[high] == arr[high - 1]) high--,r++;
                  cnt+=(l*r)%mod;
                  low++,high--;
               }
             }else if(arr[low]+arr[high]<temp){
                low++; 
             }else high--;
            }
        }
        return cnt;
    }
};