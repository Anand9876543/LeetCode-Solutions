class Solution {
public:
    string addBinary(string a, string b) {
        int x=a.length()-1;
        int y=b.length()-1;
        string sol="";
        int carry=0;
        while(x>=0||y>=0||carry){
            int sum=carry;
            if(x>=0){
                sum+=a[x]-'0';
                x--;
            }
            if(y>=0){
                sum+=b[y]-'0';
                y--;
            }
            carry=sum/2;
            sol+=to_string(sum%2);
        }
        reverse(sol.begin(),sol.end());
        return sol;
    }
};