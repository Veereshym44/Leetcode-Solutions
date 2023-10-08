class Solution {
public:
    void dfs(int s,vector<vector<int>>&adj,vector<bool>&vis)
{
    vis[s]=true;

    for(auto i:adj[s])
    {
        if(!vis[i])
        dfs(i,adj,vis);
    }
}
    int makeConnected(int n, vector<vector<int>>& connections) {
//   if(n-connections.size()>1)return -1;
int m=connections.size();

if(n-m>1)return -1;
  
  vector<vector<int>>adj(n);
  vector<bool>vis(n,false);
  int cnt=0;

  for(auto i:connections)
  {
      adj[i[0]].push_back(i[1]);
      adj[i[1]].push_back(i[0]);
  }        

  for(int i=0;i<n;i++)
  {
      if(!vis[i])
      {
          dfs(i,adj,vis);
          cnt++;
      }
  }

  return cnt-1;
    }
};