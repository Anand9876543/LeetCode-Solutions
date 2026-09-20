class Solution {
public:
    int reverseDegree(string s) {
        int x=int('{');
        int sum=0;
        for(int i=0;i<s.length();i++){
            int prod=(i+1)*(x-s[i]);
            sum+=prod;
        }
        return sum;
    }
};