class Solution {
public:
    long long int dp[102];
    int f(int i, string &s){
        if(i>=s.size()-1)return 1;
        if(dp[i]!=-1)return dp[i];
        int a = s[i]-48;
        int b = (s[i]-48)*10+s[i+1]-48;
        if(a==0)return 0;
        int p1 = 0, p2 = 0;
        if(1<=a and a<=26)p1 = f(i+1, s);
        if(1<=b and b<=26)p2 = f(i+2, s);
        return dp[i] = p1+p2;
    }
    int numDecodings(string s) {
        memset(dp, -1, sizeof dp);
        s+='z';
        return f(0, s);
    }
};
