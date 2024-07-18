class Solution {
public:
    string getSmallestString(string s) {
        for(int i=0;i<s.length()-1;i++)
        {
            int a=s[i]-'0';
            int b=s[i+1]-'0';
            if(a>b && (a%2 == b%2))
            {
                swap(s[i],s[i+1]);
                break;
            }
        }
        return s;
    }
};