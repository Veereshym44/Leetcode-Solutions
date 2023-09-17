class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        int bitMask=(1<<graph.size())-1;

        queue<pair<int,pair<int,int>>>q;

        set<pair<int,int>>vis;

        for(int i=0;i<graph.size();i++)
        {
            int mask=(1<<i);
            q.push({i,{0,mask}});
            vis.insert({i,mask});
        }

        while(!q.empty())
        {
            int indx=q.front().first;
            int dist=q.front().second.first;
            int mask=q.front().second.second;

            q.pop();
            for(auto i:graph[indx])
            {
                int newMask=(mask|(1<<i));
                if(newMask==bitMask)
                return dist+1;

                else if(vis.count({i,newMask}))
                continue;
                else{
                    q.push({i,{dist+1,newMask}});
                    vis.insert({i,newMask});
                }
            }
        }
        return 0;
    }
};