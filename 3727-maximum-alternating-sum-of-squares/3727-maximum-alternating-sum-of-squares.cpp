class Solution {
public:
    long long maxAlternatingSum(vector<int>& num) {
    int n=num.size();
    vector<long long >a(n);
     for(int i=0;i<n;i++){
        a[i]=1LL*num[i]*num[i];
    }

sort(a.begin(),a.end());
long long ans=0;

for(int i=0;i<n/2;i++){
    ans-=a[i];}
for(int i=n/2;i<n;i++){
    ans+=a[i];}
return ans;

    }
};