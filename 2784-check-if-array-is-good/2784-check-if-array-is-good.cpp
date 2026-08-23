class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n=nums.size();
        if(n<2){
            return false;
        }
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-1;i++){
            if(i+1!=nums[i]){
                return false;
            }
        }
        if(nums[n-1]==nums[n-2]){
            return true;
        }else{
            return false;
        }
        
    }
};