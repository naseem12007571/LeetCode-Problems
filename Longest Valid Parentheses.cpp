//IN THIS PROBLEM I FIND LONGEST LONGEST VALID PRENTHESIS SUBSTRING
class Solution
{
public:
    int longestValidParentheses(string s)
    {
        vector<int> v;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                v.push_back(i);
            }
            else
            {
                if (v.size() > 0 && s[v.back()] == '(')
                {
                    v.pop_back();
                }
                else
                {
                    v.push_back(i);
                }
            }
        }
        if (v.size() == 0)//ARRAY WE STORE INDICES WHERE OUR SUBSTRINGS WILL BE INCOREECT & EXTRA OPENING BRACKET'S INDICES
            return s.length();
        int ans = 0, a = 0, b = s.length();
        while (v.size() > 0)
        {
            a = v.back();
            v.pop_back();
            ans = max(ans, b - a - 1);
            b = a;
        }
        ans = max(ans,b);
        return ans;
    }
};
