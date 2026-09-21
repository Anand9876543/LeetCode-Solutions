class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>results;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=9){
                results.push_back(nums[i]);
            }else{
                int x=nums[i];
                vector<int> temp;
                while(x>0){
                    temp.push_back(x%10);
                    x/=10;
                }
                for(int i=temp.size()-1;i>=0;i--){
                    results.push_back(temp[i]);
                }
            }
        }
        return results;
    }
};