class Solution {
public:
    int MOD = 1e9 + 7;

    long long f(int i, int k, vector<vector<long long>>& dp) {

        // No segments left
        if (k == 0)
            return 1;

        // Not enough points for another segment
        if (i < 1)
            return 0;

        if (dp[i][k] != -1)
            return dp[i][k];

        // Don't use point i
        long long ans = f(i - 1, k, dp);

        // Make a segment ending at i
        for (int j = 0; j < i; j++) {
            ans += f(j, k - 1, dp);
            ans %= MOD;
        }

        return dp[i][k] = ans;
    }

    int numberOfSets(int n, int k) {
        vector<vector<long long>> dp(
            n, vector<long long>(k + 1, -1)
        );

        return f(n - 1, k, dp);
    }
};