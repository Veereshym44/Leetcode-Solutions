class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int ans=0;
        priority_queue<int>pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);


        while(pq.top()>0)
        {

            int first;
            first=pq.top();
            pq.pop();

            int sec;
            if(pq.top()>0)
            {
                sec=pq.top();
                pq.pop();
            }
            else break;

            pq.push(first-1);
            pq.push(sec-1);
            ans++;
        }
        return ans;
    }
};