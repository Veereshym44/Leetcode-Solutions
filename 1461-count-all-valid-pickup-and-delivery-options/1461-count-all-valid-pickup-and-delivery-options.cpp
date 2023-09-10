class Solution {
public:
    int countOrders(int n) {
        long long int mod = 1e9 + 7;
        vector<vector<long long int>> dp(n + 1, vector<long long int>(n + 1, 0));

        // Initialize base cases
        dp[0][0] = 1;

        for (int drop = 1; drop <= n; drop++) {
            for (int pick = 0; pick <= drop; pick++) {
                dp[pick][drop] %= mod;
                if (pick > 0) {
                    dp[pick][drop] += pick * dp[pick - 1][drop];
                    dp[pick][drop] %= mod;
                }

              
                if (pick < drop) {
                    dp[pick][drop] += (drop - pick) * dp[pick][drop - 1];
                    dp[pick][drop] %= mod;
                }
            }
        }

        return dp[n][n];
    }
};
