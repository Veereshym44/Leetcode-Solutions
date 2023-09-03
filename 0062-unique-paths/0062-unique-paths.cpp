class Solution {
public:
    // int ans(int i,int j,int m,int n,vector<vector<int>>&dp)
    // {
    //     if(dp[i][j]!=-1)
    //     return dp[i][j];
    //     if(i==m && j==n)
    //     return 1;
    //     if(i==m)
    //     {
    //         if(j+1<=n)
    //         return  dp[i][j]=ans(i,j+1,m,n,dp);
    //     }
    //      if(j==n)
    //     {
    //         if(i+1<=m)
    //         return dp[i][j]=ans(i+1,j,m,n,dp);
    //     }

    //     return dp[i][j]=ans(i+1,j,m,n,dp)+ans(i,j+1,m,n,dp);
    // }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        for(int i=0;i<n;i++)
        {
            dp[0][i]=1;
        }
        for(int i=0;i<m;i++)
        {
            dp[i][0]=1;
        }
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
        
     
    }
};