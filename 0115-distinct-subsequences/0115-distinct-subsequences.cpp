class Solution {
public:
    // int ans(string s,string t,int i,int j,vector<vector<int>>&dp)
    // {
    //     if(j==t.size())return 1;

    //     if(i==s.size())return 0;
    //     if(dp[i][j]!=-1)return dp[i][j];
    //     if(s[i]==t[j])
    //     {
    //         return dp[i][j]=ans(s,t,i+1,j+1,dp)+ans(s,t,i+1,j,dp);
    //     }
    //     return dp[i][j]=ans(s,t,i+1,j,dp);
    // }
    int numDistinct(string s, string t) {
       vector<vector<long long>> dp(s.size() + 1, vector<long long>(t.size() + 1, 0));
    int n=1e9+7;
        for(int i=0;i<=s.length();i++)
        {
            dp[i][t.length()]=1;
        }

        for(int i=s.size()-1;i>=0;i--)
        {
            for(int j=t.size()-1;j>=0;j--)
            {
                if(s[i]==t[j])
                {
                    dp[i][j]=dp[i+1][j]%n+dp[i+1][j+1]%n;
                }
                else{
                    dp[i][j]=dp[i+1][j]%n;
                }
            }
        }
        return dp[0][0]%n;
    }
};