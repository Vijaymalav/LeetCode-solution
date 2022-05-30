class Solution {
public:
     int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        long dved = labs(dividend), dvs = labs(divisor), ans = 0;
        int sign = dividend > 0 ^ divisor > 0 ? -1 : 1;
        while (dved >= dvs) {
            long temp = dvs, m = 1;
            while (temp << 1 <= dved) {
                temp <<= 1;
                m <<= 1;
            }
            dved -= temp;
            ans += m;
        }
        return sign * ans;
    }
};