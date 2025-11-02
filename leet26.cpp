#include <cmath>
class Solution {
public:
    int reverse(int x) {
        int res = 0;
        int sign = x < 0 ? -1 : 1;
        x = abs(x);

        while (x > 0) {
            int digit = x % 10;
            res = res * 10 + digit;
            x /= 10;
        }

        return res * sign;
    }
};
