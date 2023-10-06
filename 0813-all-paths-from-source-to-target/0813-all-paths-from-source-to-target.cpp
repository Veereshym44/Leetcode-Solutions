class Solution {
public:
    vector<vector<int>>ans;
    vector<int>path;
    void dfs(vector<vector<int>>&adj,int s,int d,vector<bool>vis)
    {
        vis[s]=true;

       

        if(s==d)
        {
        path.push_back(s);
        ans.push_back(path);
        path.pop_back();
        return;    
        }
         path.push_back(s);
        for(auto i:adj[s])
        {
            if(!vis[i])
            {
                dfs(adj,i,d,vis);
            }
        }

        path.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<bool>vis(graph.size(),false);
        dfs(graph,0,graph.size()-1,vis);
        return ans;
    }
};