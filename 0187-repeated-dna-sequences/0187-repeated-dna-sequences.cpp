class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string ,int>mp;
        vector<string >v;int n=s.size();


        for(int i=0;i+10<=n;i++){
      string sub=  s.substr(i,10);
        mp[sub]++;

        if(mp[sub]==2){v.push_back(sub);}
        }
        return v;

    }
};