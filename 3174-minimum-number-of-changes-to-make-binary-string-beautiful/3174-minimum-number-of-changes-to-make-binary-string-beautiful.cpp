class Solution {
public:
    int minChanges(string s) {
int ans=0;
        for(int i=0;i<s.length();i+=2)
        {
            int ch1=s[i]=='1'?1:0;
            int ch2=s[i+1]=='1'?1:0;
            
            if(ch1!=ch2)ans++;
        }
        return ans;
    }
};