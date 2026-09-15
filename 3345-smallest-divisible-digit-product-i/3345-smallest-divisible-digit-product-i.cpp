class Solution {
public:
    int smallestNumber(int n, int t) {
        int x;
        
        for(int i=n;i<=100;i++){
            if(i>=10){
                x=i;
                int y=-1;
                while(x>0){
                    int s=x%10;
                    x/=10;
                    if(y==-1){
                        y=s;
                    }else{
                        y*=s;
                    }
                }
                if(y%t==0){
                    return i;
                }
            }
            else if(i%t==0){
                return i;
            }
        }
        return 0;
    }
};