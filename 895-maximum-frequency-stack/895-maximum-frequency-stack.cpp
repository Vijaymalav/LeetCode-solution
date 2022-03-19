class FreqStack {
public:
//     stack<int>st;
//     unordered_map<int,int>m;
//     priority_queue<pair<int,int>>pq;
//     FreqStack() {
        
//     }
    
//     void push(int val) {
//         m[val]++;
//         pq.push({m[val],val});
//         st.push(val);
//     }
    
//     int pop() {
//         int ans;
//         unordered_set<int>s;
//         int fq=pq.top().first;
//         s.insert(pq.top().second);
//         pq.pop();
//         while(!pq.empty() and pq.top().first==fq){
//          s.insert(pq.top().second);
//         pq.pop();  
//         }
//         stack<int>tmp;
//         while(!st.empty()){
//            if(s.find(st.top())!=s.end()){
//                ans=st.top();
//                st.pop();
//                break;
//            } 
//             else {
//                 tmp.push(st.top());
//                 st.pop();
//             }
//         }
//         while(!tmp.empty()){
//             st.push(tmp.top());
//             tmp.pop();
//         }
//         m[ans]--;
//         for(auto it:s){
//             pq.push({m[it],it});
//         }
//         return ans;
         priority_queue<pair<int, pair<int, int>>> q;
    unordered_map<int, int> freq;
    int pos = 0;
public:
    void push(int x) {
        q.emplace(++freq[x], make_pair(++pos, x));
    }
    
    int pop() {
        auto val = q.top();
        q.pop();
        int x = val.second.second;
        freq[x]--;
        return x;
    }   
    
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */