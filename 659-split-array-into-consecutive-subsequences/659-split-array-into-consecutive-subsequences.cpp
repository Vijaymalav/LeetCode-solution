class Solution {
public:
    bool isPossible(vector<int>& A) {
        unordered_map<int, int> s1, s2;
        for (int i: A) {
            s1[i]++;
        }
        for (int i: A) {
            if (s1[i] == 0) continue;
            s1[i]--;
            if (s2[i - 1] > 0) {   
                s2[i - 1]--;
                s2[i]++;
            } else if (s1[i + 1] > 0 && s1[i + 2] > 0) {
                s1[i + 1]--;
                s1[i + 2]--;
                s2[i + 2]++;
            } else {   
                return false;
            }
        }
        return true;
    }
};