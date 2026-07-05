class Solution {
public:
    bool isSubsequence(string s, string l) {
        int a=s.length(),b=l.length(),i=0,j=0;
        while(i<a&&j<b){
            if(s[i]==l[j]){i++;}
j++;}

if(i==a)return true;
else return false;
}

};