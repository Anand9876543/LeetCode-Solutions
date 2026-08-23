class Solution {
public:
    int reverse(int x) {
        int b = 0, a = x;
        while (a != 0) {
            if ((b > INT_MAX / 10 || b < INT_MIN/10) ||
                (b == INT_MAX/10 && a % 10 > 7) || (b == INT_MIN/10 && a % 10 < -8)) {
                return 0;
            }
            int pop=a%10;
            b =b*10+pop;
            a /= 10;
        }
        return b;
    }

};