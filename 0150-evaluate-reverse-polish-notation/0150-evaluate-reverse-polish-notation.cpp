class Solution {
public:
    int evalRPN(vector<string>& tok) {
        stack<int>st;
        int n=tok.size();
        for(int i=0;i<n;i++){
            if(tok[i]=="+"||tok[i]=="-"||tok[i]=="*"||tok[i]=="/"){

int b=st.top();st.pop();  int a=st.top();st.pop();
          

            if(tok[i]=="+") st.push( a+b);
            else if(tok[i]=="*") st.push( a*b);
            else if(tok[i]=="-") st.push( a-b);
            else st.push( a/b);
        }

        else st.push(stoi(tok[i]));
        }return st.top();
    }
};