class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> a,b;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='#'){
                a.push(s[i]);
            }else if(!(a.empty())){a.pop();}
            
        }
        for(int i=0;i<t.length();i++)
        {
            if(t[i]!='#'){
                b.push(t[i]);
            }else if(!(b.empty())){b.pop();}
            
        }   
        return a==b;
    }
};