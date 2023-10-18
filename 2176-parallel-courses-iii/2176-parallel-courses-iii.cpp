class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& r, vector<int>& t) {
        vector<int>indeg(n+1,0);
        vector<vector<int>>adj(n+1);
        for(auto &i:r)
        {
            indeg[i[1]]++;
            adj[i[0]].push_back(i[1]);
        }
      vector<int>ans=t;
      ans.insert(ans.begin(),0);

        queue<int>q;
        for(int i=1;i<=n;i++)
        {
            if(indeg[i]==0)
            {
                q.push(i);
                
            }
        }
int res=0;
        while(!q.empty())
        {
            int c=q.front();
            q.pop();
            for(auto i:adj[c])
            {
                ans[i]=max(ans[i],ans[c]+t[i-1]);
               
                indeg[i]--;
                if(indeg[i]==0)
                q.push(i);
            }
        }


        res=*max_element(ans.begin(),ans.end());
        return res;
   
    }
};