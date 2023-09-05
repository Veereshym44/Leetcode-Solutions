class Solution {
public:
    int numSub(string s) {
        
        int mod=1000000007;
        int cur=0;
        if(s[0]=='1')cur=1;
        int ans=cur;
        for(int i=1;i<s.length();i++)
        {
            if(s[i]=='1'&&s[i-1]=='1')
            cur++;
            else if(s[i]=='1')
            cur=1;
            else
            cur=0;

            ans=(ans+cur)%mod;
        }
        return ans;
    }
};