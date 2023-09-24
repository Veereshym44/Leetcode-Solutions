class Solution {
public:
    static bool comp(string &a,string &b)
    {
        return a.size()<b.size();
    }
    int longestStrChain(vector<string>& words) {
        sort(words.begin(),words.end(),comp);

        unordered_map<string,int>mp;
        int ans=0;

        for(auto w:words)
        {
            mp[w]=1;
            for(int i=0;i<w.length();i++)
            {
                string prev=w.substr(0,i)+w.substr(i+1);
                if(mp.find(prev)!=mp.end())
                {
                    mp[w]=max(mp[w],mp[prev]+1);
                }

            }
            ans=max(ans,mp[w]);
        }
        return ans;
       
    }
};
