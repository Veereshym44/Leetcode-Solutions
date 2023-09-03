class Solution {
public:
    int minPathCost(vector<vector<int>>& nums, vector<vector<int>>& mo) {
      int n = nums.size();
      int m = nums[0].size();
    int dp[n+1][m+1];
        for(int i=0;i<m;i++)dp[n-1][i] = nums[n-1][i];
        for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<m;j++)
            {
                int ans=INT_MAX;
                for(int k=0;k<m;k++)
                {
                    ans = min(ans,dp[i+1][k]+mo[nums[i][j]][k]);
                }
                dp[i][j] = ans+nums[i][j];
            }
        }
          int ans=INT_MAX;
        for(int i=0;i<m;i++)
        {
           ans = min(ans,dp[0][i]); 
        }
        return ans;
    }
};