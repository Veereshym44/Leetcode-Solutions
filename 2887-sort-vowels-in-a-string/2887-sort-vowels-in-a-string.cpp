class Solution {
public:
    bool isVowel(char ch)
    {
        char arr[]={'A','E','I','O','U','a','e','i','o','u'};
        for(int i=0;i<10;i++)
        {
            if(arr[i]==ch)
            return true;
        }
        return false;
    }
    string sortVowels(string s) {
        vector<char>vo;
        vector<int>pl;
        for(int i=0;i<s.length();i++)
        {
            if(isVowel(s[i]))
            {
                vo.push_back(s[i]);
                pl.push_back(i);
            }
        }

        sort(vo.begin(),vo.end());
        for(int i=0;i<vo.size();i++)
        {
            s[pl[i]]=vo[i];
        }
        return s;
    }
};