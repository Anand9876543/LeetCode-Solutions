class Solution {
public:
    long long countCommas(long long n) {
        long long count=0;
        for(long long th=1000;th<=n;th*=1000){
            count+=(n-th+1);
        }
        return count;
    }
};