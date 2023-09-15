class Solution {
public:
    int distance(vector<int>& a, vector<int>& b) {
        return abs(a[0] - b[0]) + abs(a[1] - b[1]);
    }

    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        vector<vector<pair<int, int>>> adj(n);

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int dist = distance(points[i], points[j]);
                adj[i].push_back({dist, j});
                adj[j].push_back({dist, i});
            }
        }

    
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, 0}); 
        int cnt = 0;
        int ans = 0;
        vector<bool> vis(n, false);

        while (!pq.empty()) {
            pair<int, int> p = pq.top();
            pq.pop();
            if (vis[p.second]) continue;
            else {
                vis[p.second] = true;
                ans += p.first;
                cnt++;

                if (cnt == n) return ans; 

              
                for (auto& [wt, j] : adj[p.second]) {
                    if (!vis[j]) pq.push({wt, j});
                }
            }
        }
        return -1; 
    }
};
