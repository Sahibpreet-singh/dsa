class Solution {
public:
    int MOD = 1e9 + 7;

    int numberOfSets(int n, int k) {

        vector<vector<long long>> dp(
            n, vector<long long>(k + 1, 0)
        );

        vector<vector<long long>> sum(
            n, vector<long long>(k + 1, 0)
        );

        // 0 segments = 1 way for every i
        for (int i = 0; i < n; i++) {
            dp[i][0] = 1;
            sum[i][0] = i + 1;
        }

        for (int seg = 1; seg <= k; seg++) {

            for (int i = 1; i < n; i++) {

                // Don't use point i
                dp[i][seg] = dp[i - 1][seg];

                // Make a segment ending at i
                dp[i][seg] += sum[i - 1][seg - 1];

                dp[i][seg] %= MOD;

                // Prefix sum
                sum[i][seg] =
                    (sum[i - 1][seg] + dp[i][seg]) % MOD;
            }
        }

        return dp[n - 1][k];
    }
};