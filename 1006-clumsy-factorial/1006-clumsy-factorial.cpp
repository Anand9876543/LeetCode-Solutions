class Solution {
public:
    int clumsy(int n) {
        vector<int> stack;
        stack.push_back(n);
        
        int op = 0; 
        for (int i = n - 1; i >= 1; i--) {
            if (op == 0) {
                stack.back() *= i;
            } else if (op == 1) {
                stack.back() /= i; 
            } else if (op == 2) {
                stack.push_back(i);
            } else if (op == 3) {
                stack.push_back(-i);
            }
            op = (op + 1) % 4;
        }
        
        int result = 0;
        for (int val : stack) {
            result += val;
        }
        return result;
    }
};