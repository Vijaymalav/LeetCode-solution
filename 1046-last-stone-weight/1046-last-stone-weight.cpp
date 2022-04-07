class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==1)return stones[0];
       priority_queue<int>pq;
        for(auto it:stones){
            pq.push(it);
            
        }
        while(pq.size()>1){
            int f=pq.top();pq.pop();
            int s=pq.top();pq.pop();
            if(f==s)continue;
             pq.push(f-s);
        }
        if(pq.empty()) return 0;
        return pq.top();
    }
};