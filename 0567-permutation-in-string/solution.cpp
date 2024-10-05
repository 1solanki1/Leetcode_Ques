class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        vector<int> s1_count(26, 0), s2_count(26, 0);
        for (char c : s1) s1_count[c - 'a']++;
        for (int i = 0; i < s1.size(); i++) s2_count[s2[i] - 'a']++;
        if (s1_count == s2_count) return true;
        for (int i = s1.size(); i < s2.size(); i++) {
            s2_count[s2[i] - 'a']++;
            s2_count[s2[i - s1.size()] - 'a']--;
            if (s1_count == s2_count) return true;
        }
        return false;
    }
};

