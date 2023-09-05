class Solution {
public:
    vector<vector<int>>dp;
    int ans(vector<int>&n1,vector<int>&n2,int i,int j,int n,int m)
    {
        if(i==n || j==m)
        return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(n1[i]==n2[j])
        return dp[i][j]=1+ans(n1,n2,i+1,j+1,n,m);
        return dp[i][j]=max(ans(n1,n2,i+1,j,n,m),ans(n1,n2,i,j+1,n,m));
    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        dp.assign(nums1.size(),vector<int>(nums2.size(),-1));
        return ans(nums1,nums2,0,0,nums1.size(),nums2.size());
    }
};