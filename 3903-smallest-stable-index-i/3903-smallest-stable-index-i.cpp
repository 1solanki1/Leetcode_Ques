class Solution {
public:
    int firstStableIndex(vector<int>& num, int k) {
       int mx=num[0]; vector<int>mn=num;

    for(int i=num.size()-2;i>=0;i--){
        mn[i]=min(mn[i],mn[i+1]);
    }

    for(int i=0;i<num.size();i++){
        mx=max(mx,num[i]);

if(mx-mn[i]<=k)return i;
}
return -1;
}};