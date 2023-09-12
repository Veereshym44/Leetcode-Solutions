class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>mp;
        for(auto i:s)
        {
            mp[i]++;
        }

        int ans=0;

        unordered_set<int>unique;
        priority_queue<int>pq;
        for(auto i:mp)
        pq.push(i.second);

        while(!pq.empty())
        {
            int cur=pq.top();
            pq.pop();

            while(cur>0 && unique.count(cur))
            {
                cur--;
                ans++;
            }
            unique.insert(cur);
        }
        return ans;
       
    }
};