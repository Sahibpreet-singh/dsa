class Solution {
public:
    int distinctSubseqII(string s) {
        int n = s.size();

        vector<set<string>> dp(n + 1);

        for (int i = 1; i <= n; i++) {

            // Skip s[i-1]
            dp[i] = dp[i - 1];

            // Take s[i-1]
            for (string x : dp[i - 1]) {
                dp[i].insert(x + s[i - 1]);
            }

            // s[i-1] alone
            dp[i].insert(string(1, s[i - 1]));
        }

        return dp[n].size();
    }
};  