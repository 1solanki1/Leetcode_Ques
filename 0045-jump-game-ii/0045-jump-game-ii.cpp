class Solution {
public:
    int jump(vector<int>& num) {
       int curr=0,far=0,jump=0,n=num.size();

        for(int i=0;i<n-1;i++){
            far=max(far,i+num[i]);
            if(i==curr)jump++,curr=far;
        }
return jump;
    }
};