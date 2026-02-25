class Solution {
public:
    string longestCommonPrefix(vector<string>& stri) {
        if(stri.empty())return "";
        string res="";
        for(int i=0;i<stri[0].size();i++){
        for(auto s:stri){
        if(i>=s.size()||s[i]!=stri[0][i])return res;
        }
        res+=stri[0][i];
        }
        return res;
    }
};
