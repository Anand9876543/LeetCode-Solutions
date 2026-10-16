class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        // Option 1: Last three elements
        int option1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
        
        // Option 2: First two elements (negative) and the last element
        int option2 = nums[0] * nums[1] * nums[n - 1];
        
        return max(option1, option2);
    
    }
};