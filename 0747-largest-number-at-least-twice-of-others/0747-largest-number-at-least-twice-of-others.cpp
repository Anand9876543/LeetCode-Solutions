class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int indx=-1,a=-1,sl=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(a<nums[i]){
                sl=a;
                a=nums[i];
                indx=i;
            }
            else if(nums[i]>sl){
                sl=nums[i];
            }
        }
        if(2*sl<=a){
            return indx;
        }
        return -1;
    }
};