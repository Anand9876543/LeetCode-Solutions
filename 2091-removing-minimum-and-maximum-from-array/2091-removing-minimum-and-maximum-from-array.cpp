class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 1;

        int minIdx = 0, maxIdx = 0;
        for (int i = 0; i < n; ++i) {
            if (nums[i] < nums[minIdx]) minIdx = i;
            if (nums[i] > nums[maxIdx]) maxIdx = i;
        }

        int first = min(minIdx, maxIdx);
        int second = max(minIdx, maxIdx);

        int bothFromFront = second + 1;
        int bothFromBack = n - first;
        int bothSides = (first + 1) + (n - second);

        return min({bothFromFront, bothFromBack, bothSides});
    }
};