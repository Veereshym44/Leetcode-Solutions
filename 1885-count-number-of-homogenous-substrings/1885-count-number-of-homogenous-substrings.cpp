class Solution {
public:
    int countHomogenous(string s) {
        int ans=1,cur=1;
        int mod=1000000007;
        for(int i=1;i<s.length();i++)
        {
            if(s[i]==s[i-1])
            {
                cur++;
            }
            else
            cur=1;

            ans=(ans+cur)%mod;
        }
        return ans;
    
    
    }
};