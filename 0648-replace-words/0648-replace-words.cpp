class Solution {
public:
    string replaceWords(vector<string>& dict, string s) {
        unordered_map<string,int>mp;
        for(auto i:dict)
        {
            mp[i]++;
        }

        string ans="";
        string cur="";

        int i=0;
        while(i<s.length())
        {
            if(s[i]!=' ')
            {
            cur+=s[i];

            if(mp.find(cur)!=mp.end())
            {
                ans+=cur;
                
                cur="";
                    while(s[i]!=' ' && i<s.length())
                    {
                        i++;
                    }

                    if(i<s.length())
                    ans+=' ';
                
            }
            }

      else{
        ans+=cur;
        ans+=' ';
        cur="";
      }


            i++;



            
        }

      
        ans+=cur;

        return ans;


    }
};