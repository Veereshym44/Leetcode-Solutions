class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int m=n*n;
        int i=1;
        vector<vector<int>>ans(n,vector<int>(n));
        int sr=0,sc=0,er=n-1,ec=n-1;
        while(i<=m)
        {
           for(int j=sc;j<=ec&&i<=m;j++)
           {
               ans[sr][j]=i++;
           }
           sr++;

           for(int j=sr;j<=er&&i<=m;j++)
           {
               ans[j][ec]=i++;
           }
           ec--;
           for(int j=ec;j>=sc&&i<=m;j--)
           {
               ans[er][j]=i++;
           }
           er--;
           for(int j=er;j>=sr&&i<=m;j--)
           {
               ans[j][sc]=i++;
           }
           sc++;

        }
        return ans;
    }
};