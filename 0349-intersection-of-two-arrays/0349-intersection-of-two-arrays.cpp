class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int x=nums1.size();
        int y=nums2.size();
        vector<int> result;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        for(int i=0;i<x;i++){
            int target=nums1[i];
            if(!(result.empty())&&target==result.back()){
                continue;
            }
            int left=0,right=y-1;
            while(left<=right){
                int mid=left+(right-left)/2;
                if(target==nums2[mid]){
                    result.push_back(target);
                    break;
                }else if(nums2[mid]<target){
                    left=mid+1;
                }else{
                    right=mid-1;
                }
            }
        }
        return result;
    }
};