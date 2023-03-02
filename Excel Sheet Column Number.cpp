class Solution {
public:
    int titleToNumber(string columnTitle) {
        // int titleToNumber(string columnTitle) {
    int result = 0;
    int n = columnTitle.length();
    for(int i = 0; i < n; i++) {
        int value = columnTitle[i] - 'A' + 1;
        result += value * pow(26, n - i - 1);
    }
    return result;
// }

        
    }
};
