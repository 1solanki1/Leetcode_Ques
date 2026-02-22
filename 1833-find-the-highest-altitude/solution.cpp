class Solution {
public:
    int largestAltitude(vector<int>& n) {
        int curr=0,max=0;
        for(int i=0;i<n.size();i++){
            curr+=n[i];
        if(curr>=max){max=curr;}
        }

        return max;
    }
};
