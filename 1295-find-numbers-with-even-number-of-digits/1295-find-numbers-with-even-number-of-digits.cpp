class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int x=0,count=0;
        for(int num:nums){
            while(num>0){
                count++;
                num/=10;
            }
            if(count%2==0){
                x++;
            }
            count=0;
        }
        return x;
    }
};