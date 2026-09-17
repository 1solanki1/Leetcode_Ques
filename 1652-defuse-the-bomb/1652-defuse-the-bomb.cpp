class Solution {
public:
    vector<int> decrypt(vector<int>& num, int k) { 
         int n=num.size();
        vector<int>mp(n,0);

if(k==0)return mp;
for(int r=0;r<n;r++){ int sum=0;
if(k>0) for(int l=1;l<=k;l++) sum+=num[(r+l)%n];
else    for(int l=1;l<=-k;l++) sum+=num[(r-l+n)%n];
mp[r]=sum;
}return mp;
    }
};