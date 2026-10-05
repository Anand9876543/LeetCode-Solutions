class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]!=nums[nums.size()-1]){
                x=nums[i];
                break;
            }
        }
        for(int i=nums.size()-3;i>=0;i--){
            if(nums[i]!=x){
                return nums[i];
            }
        }
        return nums[nums.size()-1];
    }
};