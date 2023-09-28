class Solution {
public:
    string removeDuplicateLetters(string s) {
        string ans="";
        int len=s.length();
        unordered_map<char,int>mp1,mp2;
        for(auto i:s)
        mp1[i]++;
stack<char>stk;
        for(int i=0;i<len;i++)
        {
            mp1[s[i]]--;
            if(mp2.find(s[i])!=mp2.end())continue;

            while(!stk.empty() && s[i]<stk.top() && mp1[stk.top()]>0)
            {
                mp2.erase(stk.top());
                stk.pop();
            }
            stk.push(s[i]);
            mp2[s[i]]=1;
        }

        while(!stk.empty())
        {
            ans=stk.top()+ans;
            stk.pop();
        }
        return ans;
    }
};