class Solution {
public:
    string countAndSay(int n) {
        if(n==1)return  "1";

       
        string prev=countAndSay(n-1);
         int x=prev.size();
        string  ans="";
        int i=0;
        while(i<x){
            int count=1;

        while(i+1<x &&prev[i]==prev[i+1]){
            i++;count++;}
            ans+=to_string(count)+prev[i];
            i++;
}return ans;
        }
};