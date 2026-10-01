class Solution {
public:
    char findTheDifference(string s, string t) {
        int x=0,y=0;
        for(char c:s){
            y+=int(c);
        }
        for(char c:t){
            x+=int(c);
        }
        return x-y;
    }
};