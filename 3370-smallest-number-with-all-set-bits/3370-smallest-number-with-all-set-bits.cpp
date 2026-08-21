class Solution {
public:
    int smallestNumber(int n) {
        int a;
        if(n<2){
            return 1;
        }
        for(int i=2;i<n;i++){
            a=pow(2,i)-1;
            if(n<=a){
                return a;
            }
        }
        return -1;
    }
};