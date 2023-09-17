class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq(stones.begin(),stones.end());
        while(!pq.empty())
        {
            int x=pq.top();

            pq.pop();

            if(pq.empty())return x;

            else 
            {
                int y=pq.top();
                pq.pop();
                if(x!=y)
                pq.push(abs(x-y));

            }
        }
        return 0;

    }
};