class Solution {
public:
    void dfs(vector<vector<int>>&adj,vector<bool>&vis,int &t1,int &t2,int s)
    {
        vis[s]=true;

        t1++;
t2=t2+adj[s].size();
        for(auto i:adj[s])
        {
          
            if(!vis[i])
            dfs(adj,vis,t1,t2,i);
        }

    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<bool>vis(n,false);
        vector<vector<int>>adj(n);

        for(auto i:edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
            int ans=0;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                int t1=0;
                int t2=0;

                dfs(adj,vis,t1,t2,i);

                if(t1*(t1-1)==t2)
                ans++;
            }
        }

        return ans;
    }
};