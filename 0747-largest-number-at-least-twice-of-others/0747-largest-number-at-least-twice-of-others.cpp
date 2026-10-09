class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int indx=0,a=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(a<nums[i]){
                a=nums[i];
                indx=i;
            }
        }
        sort(nums.begin(),nums.end()); 
        if((2*(nums[n-2]))<=(nums[n-1])){
            return indx;
        }
        return -1;
    }
};