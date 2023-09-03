class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=0;
        int ans=0;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]==' ')
            {
                if(len>0)
                ans=len;
            len=0;
            }
            else
            len++;
        }
        if(len>0)
        return len;
        return ans;
    }
};