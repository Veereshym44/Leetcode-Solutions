#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    int ans(int n, int val, int k,vector<int>&dp) {
        if (n == 0 && k >= 2) return 1;  
        if (n == 0 && k < 2 ||val>9) return 0; 

        if(dp[n]!=-1)return dp[n]; 

        int left = 1;
        if (n - val >= 0) {
            left = val * ans(n - val, val, k + 1,dp);
        }

        int right = ans(n, val + 1, k,dp);

        return dp[n]=max(left, right);
    }

    int integerBreak(int n) {
        if (n == 2) return 1;
        // if(n==3)return 2;

        vector<int>dp(n+1,-1);

        
        return ans(n, 1, 0,dp);
    }
};


