class Solution {
public:
    string getHint(string secret, string guess) {
        int x=0,y=0;
        unordered_map<char,int>mp1,mp2;
        for(int i=0;i<secret.length();i++)
        {
            if(secret[i]==guess[i])
            x++;
            else{
                mp1[secret[i]]++;
                mp2[guess[i]]++;

            }
        }


        for(auto i:mp1)
        {
            if(mp2.find(i.first)!=mp2.end())
            {
               y+=min(i.second,mp2[i.first]);
            }
        }

        string s;
        s+=to_string(x);
        s+='A';
        s+=to_string(y);
        s+='B';
        return s;
    }
};