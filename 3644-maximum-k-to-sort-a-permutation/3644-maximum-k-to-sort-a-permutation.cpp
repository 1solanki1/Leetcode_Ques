class Solution {
public:
    int sortPermutation(vector<int>& num) {
        int n=num.size(),ans=-1;

        for(int i=0;i<n;i++){
            if(num[i]!=i)ans&=num[i];
        }

return max(ans,0);
    }
};