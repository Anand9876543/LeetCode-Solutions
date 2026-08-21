class Solution {
public:
    bool isAnagram(string s, string t) {
        int a = s.length();
        int b = t.length();
        vector<int> arr(26,0);
        if (a != b) {
            return false;
        }
        for(int i=0;i<a;i++){
            int x=s[i]-'a';
            arr[x]++;
        }
        for(int j=0;j<b;j++){
            int x=t[j]-'a';
            arr[x]--;
        }
        int count=0;
        for(int i=0;i<26;i++){
            if(arr[i]==0){
                count++;
            }
        }
        if(count!=26){
            return false;
        }
        return true;
    }
};