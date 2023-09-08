class Point {
public:
    int x, y;
    Point(int a, int b) : x(a), y(b) {}
};

class Compare {
public:
    bool operator()(const Point* a, const Point* b) const {
        return (a->x * a->x + a->y * a->y) < (b->x * b->x + b->y * b->y);
    }
};

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        priority_queue<Point*, vector<Point*>, Compare> pq;

        for (int i = 0; i < p.size(); i++) {
            Point* pt = new Point(p[i][0], p[i][1]);
            pq.push(pt);
            if (pq.size() > k) {
                
                pq.pop();
            }
        }

        vector<vector<int>> ans;

        while (!pq.empty()) {
            int x = pq.top()->x;
            int y = pq.top()->y;
            ans.push_back({x, y});
            
            pq.pop();
        }
        return ans;
    }
};
