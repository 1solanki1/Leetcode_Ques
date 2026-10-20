class Solution {
public: int ds(int  n){
    int sum=0;
        while(n>0){
        sum+=n%10;
        n/=10;}
return sum;
}

public: int  minSwaps(vector<int>& num) {int n=num.size();
    vector<array<int,3>>v;
        for(int i=0;i<n;i++){
        v.push_back({ds(num[i]),num[i],i});
}
sort(v.begin(),v.end());

vector<bool>vis(n,false);
int swap=0;
for(int i=0;i<n;i++){
    if(vis[i]||v[i][2]==i)continue;
    int j=i,len=0;
    while(!vis[j]){
        vis[j]=true;
        j=v[j][2];len++;
    }
swap+=len-1;
}
return swap;
    }
};