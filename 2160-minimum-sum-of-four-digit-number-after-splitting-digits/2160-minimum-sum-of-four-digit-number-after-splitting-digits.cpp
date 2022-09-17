class Solution {
public:
    int minimumSum(int num) {
        vector<int>vec;
        while(num){
            int ld=num%10;
            vec.push_back(ld);
            num/=10;
        }
    sort(vec.begin(),vec.end());
        int f=vec[0]*10+vec[3];
        int s=vec[1]*10+vec[2];
        return (f+s);
    }
};