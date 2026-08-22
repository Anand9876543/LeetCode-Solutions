class Solution {
public:
    bool checkDivisibility(int n) {
        long int sum=0,pro=1,x;
        x=n;
        while(x!=0){
            sum+=x%10;
            pro*=x%10;
            x/=10;
        }
        if(n%(sum+pro)==0){
            return true;
        }
        return false;
        
    }
};