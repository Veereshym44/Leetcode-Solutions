class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();
    
        priority_queue<pair<int,pair<int,int>>,
        vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>>pq;
        pq.push({0,{0,0}}); 
        vector<vector<bool>>vis(n,vector<bool>(m,0));
        int ans = INT_MIN;
        while(!pq.empty()){
            auto it = pq.top();
            int row = it.second.first;
            int col = it.second.second;
            int wt = it.first;
            ans = max(ans,wt);
            pq.pop();
            vis[row][col]=1;

            int delRow[]={-1,0,+1,0};
            int delCol[]={0,-1,0,+1};
    if(row==n-1 && col == m-1)return ans;
            for(int i=0;i<4;i++){
                int nrow = row + delRow[i];
                int ncol = col + delCol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol]){
                    pq.push({abs(heights[nrow][ncol]-heights[row][col]),{nrow,ncol}});
                }
            }
        }
        return ans;
    }
};