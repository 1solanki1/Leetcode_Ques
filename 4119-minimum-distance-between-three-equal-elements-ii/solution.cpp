class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        int n=nums.size();
        int result = INT_MAX;

        for (int k=0;k<n;k++) {
            mp[nums[k]].push_back(k);
            if(mp[nums[k]].size()>=3){
                vector<int>&vec=mp[nums[k]];
                int siz=vec.size();
               int i=vec[vec.size()-3];
                result=min(result,(2*(k-i)));
            }
        }
return result==INT_MAX ?-1:result;
       
    }};
