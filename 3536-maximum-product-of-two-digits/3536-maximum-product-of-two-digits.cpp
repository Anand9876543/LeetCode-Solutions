class Solution {
public:
    int maxProduct(int n) {
        int f=0,s=0;
        while(n>0){
            if((n%10)>f){
                s=f;
                f=n%10;
            }
            else if((n%10)>s){
                s=n%10;
            }
            n/=10;
        }
        return s*f;
    }
};