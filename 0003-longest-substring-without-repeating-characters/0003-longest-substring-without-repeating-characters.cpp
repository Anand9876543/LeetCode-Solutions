class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> seen;
        int l=0;
        int maxlen=0;
        for(int r=0;r<s.length();r++){
            while(seen.count(s[r])){
                seen.erase(s[l]);
                l++;
            }
            seen.insert(s[r]);
            maxlen=max(maxlen,r-l+1);
        } 
        return maxlen;  
    }
};