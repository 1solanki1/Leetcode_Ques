
class Solution {
public:
    int minRemovals(vector<int>& nums, int target) {
        vector<int> lenqavitor = nums;
        
        int n = nums.size();
        int mid = n / 2;
        
        vector<pair<int,int>> left, right;
        
        for (int mask = 0; mask < (1 << mid); mask++) {
            int xr = 0, cnt = 0;
            for (int i = 0; i < mid; i++) {
                if (mask & (1 << i)) {
                    xr ^= nums[i];
                    cnt++;
                }
            }
            left.push_back({xr, cnt});
        }
        
        int rsz = n - mid;
        for (int mask = 0; mask < (1 << rsz); mask++) {
            int xr = 0, cnt = 0;
            for (int i = 0; i < rsz; i++) {
                if (mask & (1 << i)) {
                    xr ^= nums[mid + i];
                    cnt++;
                }
            }
            right.push_back({xr, cnt});
        }
        
        unordered_map<int,int> mp;
        for (auto &p : right) {
            mp[p.first] = max(mp[p.first], p.second);
        }
        
        int maxKeep = -1;
        
        for (auto &p : left) {
            int need = target ^ p.first;
            if (mp.count(need)) {
                maxKeep = max(maxKeep, p.second + mp[need]);
            }
        }
        
        if (maxKeep == -1) return -1;
        
        return n - maxKeep;
    }
};

