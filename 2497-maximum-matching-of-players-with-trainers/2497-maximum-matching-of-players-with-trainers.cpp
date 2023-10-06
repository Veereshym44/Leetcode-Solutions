class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {
        // sort(p.begin(),p.end());
        // sort(t.begin(),t.end());

        // int i=0,j=0;
        // int ans=0;
        // while(i<p.size() && j<t.size())
        // {
        //     if(p[i]<=t[j])
        //     {
        //         ans++;
        //         i++;
        //         j++;
        //     }

        //     else j++;

        // }

        int ans=0;
        priority_queue<int,vector<int>,greater<int>>pq1(p.begin(),p.end()),pq2(t.begin(),t.end());
        while(!pq1.empty() && !pq2.empty())
        {
            if(pq1.top()<=pq2.top())
            {
                ans++;
                pq1.pop();
                pq2.pop();
            }

            else pq2.pop();
        }



        return ans;
    }
};