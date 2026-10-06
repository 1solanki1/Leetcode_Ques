class Solution {
public:
    int minAddToMakeValid(string s) {
        int st=0,end=0;
        for(char c:s){
            if(c=='(')st++;
            else {
                if(st>0)st--;
                else end++;

                }
        }
return st+end;

    }
};