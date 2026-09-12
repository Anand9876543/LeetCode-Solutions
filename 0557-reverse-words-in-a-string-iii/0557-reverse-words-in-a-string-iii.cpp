class Solution {
public:
    string reverseWords(string s) {
        int n=s.length(),l = 0;
        for(int r=0;r<=n;r++){
            if(r==n||s[r]==' '){
                int left=l,right=r-1;
                while(left<right){
                    swap(s[left],s[right]);
                    left++;right--;
                }
                l=r+1;
            }
        }
        return s;
    }
};