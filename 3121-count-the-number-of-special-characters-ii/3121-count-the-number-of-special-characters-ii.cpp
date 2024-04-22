class Solution {
public:
    int numberOfSpecialChars(string word) {
               unordered_map<char,vector<int>>mp1,mp2;
        int j=0;
        for(auto i:word)
        {
            if(isupper(i))
            {
             char y=tolower(i);
                mp1[y].push_back(j);
            }
            else mp2[i].push_back(j);
            j++;
            
        }
        
        int cnt=0;
        for(auto i:mp2)
        {
            char x=i.first;
            if(mp1.find(x)!=mp1.end())
            {
                int a=mp2[i.first][mp2[i.first].size()-1];
                int b=mp1[x][0];
                
                if(a<b)cnt++;
            }
        }
        
        return cnt;
    }
};