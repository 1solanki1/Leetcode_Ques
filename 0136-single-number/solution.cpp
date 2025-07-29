class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int as=0;
        for(int val : nums){
            as ^= val;
        }
    return as;
    }
};
