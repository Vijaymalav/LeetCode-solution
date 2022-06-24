class Solution {
public:
       bool isPossible(vector<int>& A) {
        long cnt = 0;
        int n = A.size(), a;
        priority_queue<int> pq(A.begin(), A.end());
        for (int a : A)
            cnt += a;
        while (true) {
            a = pq.top(); pq.pop();
            cnt -= a;
            if (a == 1 || cnt == 1)
                return true;
            if (a < cnt || cnt == 0 || a % cnt == 0)
                return false;
            a %= cnt;
            cnt += a;
            pq.push(a);
        }
    }
};