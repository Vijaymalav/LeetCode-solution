class Solution {
public:
    int candy(vector<int>& rat) {
           int n=rat.size();
        vector<int>arr(n,1);
     
        for(int i=1;i<n;i++){
            if(rat[i-1]<rat[i]){
                arr[i]=arr[i-1]+1;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(rat[i]>rat[i+1] and arr[i]<(arr[i+1]+1)){
                arr[i]=arr[i+1]+1;
            }
        }
        int sum=0;
        for(int i=0;i<n;i++){
            
            sum+=arr[i];
        }
        return sum;
        
    }
};