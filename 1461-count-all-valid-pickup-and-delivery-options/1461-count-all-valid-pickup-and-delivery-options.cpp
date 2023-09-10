class Solution {
public:
    int mod=1e9+7;

    long long int ans(int pick,int drop,vector<vector<long long int>>&dp)
    {
        if(pick==0 && drop==0)return 1;
        if(pick<0 || drop<0||drop<pick)return 0;
        if(dp[pick][drop]!=-1)return dp[pick][drop];

      long long int answer=0;

      answer+=pick*ans(pick-1,drop,dp);
      answer%=mod;
      answer+=(drop-pick)*ans(pick,drop-1,dp);
      answer%=mod;
      return dp[pick][drop]=answer;

    }
    int countOrders(int n) {
        vector<vector<long long int>>dp(n+1,vector<long long int>(n+1,-1));
        return ans(n,n,dp);
    }
};