class Solution {
public:
    int rob(vector<int>& num) {
        int n=num.size();
        if(n==1)return num[0];
        int h1= money(num,0,n-2);
        int h2=money(num,1,n-1);
        return max(h1,h2);
    }

public :int money(vector<int >&num, int st,int end){
        int p1=0,p2=0;
        for(int i=st;i<=end;i++){
int curr=max(p1,p2+num[i]);
       p2=p1;   p1=curr;
       
}


return p1;
}
};