class Solution {
public:
    vector<int>dp;
    int n;
    int ans(int indx,string s,vector<string>&d)
    {
        if(indx>=n)return 0;
        if(dp[indx]!=-1)return dp[indx];
        int val=n;
        for(string& word:d)
        {
            int wLen=word.length();
            if(indx+wLen<=s.length() && s.substr(indx,wLen)==word)
            {
                int extra=ans(indx+wLen,s,d);
                val=min(extra,val);
            }
        }
        int notFound=1+ans(indx+1,s,d);
        val=min(val,notFound);
        return dp[indx]=val;
    }
    int minExtraChar(string s, vector<string>& d) {
      n=s.length();
      dp.assign(n,-1);
      return ans(0,s,d);
    }
};