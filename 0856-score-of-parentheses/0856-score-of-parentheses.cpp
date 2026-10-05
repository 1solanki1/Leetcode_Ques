class Solution {
public:
    int scoreOfParentheses(string s) {
       int st=0,ans=0;
       for(int i=0;i<s.size();i++){
       if(s[i]=='(') st++;
       else{ 
        st--;   if(s[i-1]=='(')ans+=1<<st;
    }}
return ans;
    }};