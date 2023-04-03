class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        string ans = "";
        for (int i = 0; i < numRows; i++) {
            int jumps = 2 * (numRows - 1);
            for (int j = i; j < s.length(); j += jumps) {
                ans += s[j];
                int midJumps = j + jumps - 2 * i;
                if (i > 0 && i < numRows - 1 && midJumps < s.length())
                    ans += s[midJumps];
            }
        }
        return ans;
    }
};
