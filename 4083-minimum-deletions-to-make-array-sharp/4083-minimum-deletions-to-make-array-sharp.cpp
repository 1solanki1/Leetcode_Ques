class Solution {
public:
    int minDeletions(vector<int>& num) {
        int n=num.size(),cnt=0;

    for(int i=0;i<n-1;i++){
    if(num[i]==num[i+1])cnt++;
    }

return cnt;
    }
};