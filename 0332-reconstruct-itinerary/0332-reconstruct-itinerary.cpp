class Solution {
public:
    void dfs(string s,map<string, priority_queue<string,vector<string>,greater<string>>>&mp,vector<string>&ans)
    {
        if(mp[s].size()==0)
        {
            ans.push_back(s);
            return;
        }
      auto& st=mp[s];
        while(!st.empty())
        {
            string temp=st.top();
            st.pop();
            dfs(temp,mp,ans);
            
        }
        ans.push_back(s);
    }
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        map<string, priority_queue<string,vector<string>,greater<string>>>mp;
        for(int i=0;i<tickets.size();i++)
        {
            mp[tickets[i][0]].push(tickets[i][1]);
        }
        vector<string>ans;
        dfs("JFK",mp,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};