class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.length()<26){
            return false;
        }
        unordered_set<char> unique(sentence.begin(),sentence.end());
        return unique.size()==26;
    }
};