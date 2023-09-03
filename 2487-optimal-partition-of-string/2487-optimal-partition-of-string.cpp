class Solution {
public:
    int partitionString(string s) {
        int cnt=1;
        unordered_map<char,int>mp;
        
        for(int i=0;i<s.length();i++)
        {
          if(mp.find(s[i])!=mp.end())
          {
              cnt++;
              mp.clear();
          } 
          mp[s[i]]++;
        }
        return cnt;
    }
};