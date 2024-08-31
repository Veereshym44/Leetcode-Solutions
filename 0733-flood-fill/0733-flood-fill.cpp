class Solution {
public:

        void bfs(vector<vector<int>>&grid,int sr,int sc,int c)
        {   
            int ssc=grid[sr][sc];

            grid[sr][sc]=c;
            int arr[4]={0,1,0,-1};
            int brr[4]={1,0,-1,0};

            vector<vector<bool>>vis(grid.size(),vector<bool>(grid[0].size(),false));
            vis[sr][sc]=true;

            queue<pair<int,int>>q;
            q.push({sr,sc});

            while(!q.empty())
            {
                int row=q.front().first;
                int col=q.front().second;
                q.pop();

                for(int i=0;i<4;i++)
                {
                    int nr=row+arr[i];
                    int nc=col+brr[i];

                    if(nr>=0 && nr<grid.size() && nc>=0 && nc<grid[0].size() &&!vis[nr][nc])
                    {
                        vis[nr][nc]=true;

                        if(grid[nr][nc]==ssc)
                        {
                        grid[nr][nc]=c;

                        q.push({nr,nc});
                        }
                    }
                }



            }
        }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        bfs(image,sr,sc,color);
        return image;
    }
};