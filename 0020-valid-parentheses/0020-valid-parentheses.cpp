class Solution {
public:
    bool isValid(string s) {
        stack<char> bracket;
        for(char c:s){
            if(c=='('||c=='{'||c=='['){
                bracket.push(c);
            }
            else if(c==')'||c==']'||c=='}'){
                if(bracket.empty()){
                    return false;
                }
                char top=bracket.top();
                bracket.pop();
                if((c==')'&&top!='(')||(c=='}'&&top!='{')||(c==']'&&top!='[')){
                    return false;
                }
            }
            
        }    
        return bracket.empty();
    }
};