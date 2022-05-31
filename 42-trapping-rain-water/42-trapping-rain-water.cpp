class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int ans=0;
        vector<int>right(n);
        vector<int>left(n);
        left[0]=-1;
        for(int i=1;i<n;i++){
            left[i]=max(left[i-1],height[i-1]);
        }
        right[n-1]=-1;
        for(int i=n-2;i>=0;i--){
            right[i]=max(right[i+1],height[i+1]);
        }
        
        for(int i=0;i<n;i++){
            int mn=min(left[i],right[i]);
            mn=mn-height[i];
            if(mn>0){
                ans+=mn;
            }
        }
        return ans;
    }
};