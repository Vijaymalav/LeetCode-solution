class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int>pq;
        int mn=INT_MAX;
        for(int i:nums){
            if(i%2==1)i*=2;
            mn=min(mn,i);
            pq.push(i);
        }
        int ans=INT_MAX;
        while(pq.top()%2==0){
            int tp= pq.top();
            pq.pop();
            ans=min(ans,tp-mn);
            mn=min(mn,tp/2);
            pq.push(tp/2);
        }
        ans=min(ans,pq.top()-mn);
        return ans;
        
    }
};