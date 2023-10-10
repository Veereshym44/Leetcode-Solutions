class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        if(n==1)return 0;

        vector<vector<int>>mp(n);

        for(int i=0;i<n;i++)
        {
            if(i!=headID)
            mp[manager[i]].push_back(i);
        }

        

        

        queue<pair<int,int>>q;
        q.push({headID,0});
        int ans=0;

        while(!q.empty())
        {
          int indx=q.front().first;
          int val=q.front().second;

          ans=max(ans,val);
          q.pop();

          for(auto i:mp[indx])
          q.push({i,val+informTime[indx]});  
           

   
        }

        return ans;



    }
};