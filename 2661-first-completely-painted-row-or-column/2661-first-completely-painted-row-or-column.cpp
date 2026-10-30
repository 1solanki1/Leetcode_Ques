class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        unordered_map<int,pair<int ,int >>mp;

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        mp[mat[i][j]]={i,j};
    }}

    vector<int>rowcount(n,0),colcount(m,0);
    
    for(int i=0;i<arr.size();i++){
        int val=arr[i];
    auto [row,col]=mp[val];
    rowcount[row]++;
    colcount[col]++;
       

    if(rowcount[row]==m|| colcount[col] ==n) return i;}
return -1;

}};