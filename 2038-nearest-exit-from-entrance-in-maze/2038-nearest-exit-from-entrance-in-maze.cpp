class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        queue<pair<int,pair<int,int>>>q;
        int m=maze.size();
        int n=maze[0].size();

        int nrow[4]={1,0,-1,0};
        int ncol[4]={0,1,0,-1};
if(maze[entrance[0]][entrance[1]]=='+')return -1;
        q.push({0,{entrance[0],entrance[1]}});

        vector<vector<bool>>vis(m,vector<bool>(n,false));
        vis[entrance[0]][entrance[1]]=true;
        while(!q.empty())
        {
            int row=q.front().second.first;
            int col=q.front().second.second;

            int steps=q.front().first;
            q.pop();

            if((row==0 || row==m-1 ||col==0 || col==n-1 )&&(row!=entrance[0] || col!=entrance[1]))return steps;

            for(int i=0;i<4;i++)
            {
                int nr=row+nrow[i];
                int nc=col+ncol[i];

                if(nr>=0 && nr<m && nc>=0 && nc<n && !vis[nr][nc] && maze[nr][nc]=='.')
                {

                    vis[nr][nc]=true;
                    q.push({steps+1,{nr,nc}});
                }
            }
        }
        return -1;

    }
};