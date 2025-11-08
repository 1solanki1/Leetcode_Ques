class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());

        unordered_set<int> st(nums.begin(), nums.end());
        vector<int> missing;

        for (int x = mn; x <= mx; x++) {
            if (!st.count(x)) {
                missing.push_back(x);
            }
        }
        return missing;
    }
};


