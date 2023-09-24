class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        unordered_map<string,int>mp;
        string temp="";
        for(auto i:s)
        {
            temp+=i;
            mp[temp]++;
        }
        int ans=0;
        for(auto i:words)
        {
            if(mp.find(i)!=mp.end())
            {
                ans++;
            }
        }
        return ans;
    }
};