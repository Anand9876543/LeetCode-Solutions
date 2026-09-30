class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rsum = 0;
        int lsum = 0, pivot = 0;
        while (pivot<nums.size()) {
            for (int i = pivot + 1; i < nums.size(); i++) {
                rsum += nums[i];
            }
            for (int i = 0; i < pivot; i++) {
                lsum += nums[i];
            }
            if (lsum == rsum) {
                return pivot;
            } else {
                pivot++;
                lsum=0;
                rsum=0;
            }
        }
        return -1;
    }
};