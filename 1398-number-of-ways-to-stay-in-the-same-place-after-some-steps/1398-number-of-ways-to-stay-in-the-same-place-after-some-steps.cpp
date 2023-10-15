class Solution {
private:
    long long solve(int steps,int arrLen, int i, vector<vector<long long>> &dp){
        if(!i && !steps)
            return 1;
        if(i == arrLen || steps < 0 || i < 0 || i > steps)
            return 0;
        if(dp[steps][i] != -1)
            return dp[steps][i];
            
        long long left = solve(steps - 1, arrLen, i - 1, dp);
        long long right = solve(steps - 1, arrLen, i + 1, dp);
        long long stay = solve(steps - 1, arrLen, i, dp);
        return dp[steps][i] = (long long)((left + right + stay) % mod);
    }
public:
    long long mod = 1e9 + 7;
    int numWays(int steps, int arrLen) {
        vector<vector<long long>> dp(steps + 1, vector<long long> (steps/2 + 1, -1));
        return (int)solve(steps, arrLen, 0, dp);
    }
};