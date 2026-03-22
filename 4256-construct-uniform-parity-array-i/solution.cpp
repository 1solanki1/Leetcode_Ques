class Solution {
public:
    bool uniformArray(vector<int>& n) {
        int odd=0;int even=0;
        for (int x:n){
            if (x%2==0)even++;
            else odd++;}
        
        return true;
    }
};
