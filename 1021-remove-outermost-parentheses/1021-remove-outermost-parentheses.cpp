class Solution {
public:
    string removeOuterParentheses(string s) {
        int depth=0;string  r="";
    for(char  c:s){
        if(c=='(') {if(depth>0)r+=c;
                            depth++;}
                            else {depth--;
                        if(depth>0)r+=c;}}
return r;
    }
};