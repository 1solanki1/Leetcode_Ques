class Solution {
    public boolean isPerfectSquare(int n) {
        if(n<2)return true;
        long  st=1,end=n;

while(st<=end){
    long mid=st+(end-st)/2;

        if(mid*mid==n)return true;
        else if(mid*mid>n)end=mid-1;
        else    st=mid+1;
}
return false;
    }
}