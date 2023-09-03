class Solution {
public:
    int n;
    bool isPossible(int i,string s,unordered_map<string,int>mp)
    {
        
        for(int j=0;j<s.length();j+=n)
        {
            string str=s.substr(j,n);
          if(mp.find(str)!=mp.end())
                {
                if(--mp[str]==-1)
                return false;

                }
                else
                {
                    return false;
                }
            }
            
       
        return true;
    }
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int>ans;
        int wLen=words[0].length();
        if(s.length()==0)return ans;
        n=wLen;
        int sLen=wLen*words.size();
        int i=0;
        unordered_map<string,int>mp;
        for(auto i:words)
        {
        
            mp[i]++;
        }
    
        while(i+sLen<=s.length())
        {
            if(isPossible(i,s.substr(i,sLen),mp))
            {
                ans.push_back(i);
            }
            i++;
        }
        return ans;
    }
};