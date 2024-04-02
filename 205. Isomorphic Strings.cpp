class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();

        for (int i = 0; i < n; i++) {
            // Check if s[i] has been mapped to a different character in t
            for (int j = 0; j < i; j++) {
                if (s[i] == s[j] && t[i] != t[j]) {
                    return false;
                }
            }

            // Check if t[i] has been mapped to a different character in s
            for (int j = 0; j < i; j++) {
                if (t[i] == t[j] && s[i] != s[j]) {
                    return false;
                }
            }
        }

        return true;
    }
};
