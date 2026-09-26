class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> x;
        for(int num:nums){
            if(num!=0){
                x.push_back(num);
            }
        }
        while(x.size()<nums.size()){
            x.push_back(0);
        }
        nums=x;

    }
};