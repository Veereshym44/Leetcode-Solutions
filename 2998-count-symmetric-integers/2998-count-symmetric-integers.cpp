class Solution {
public:
    bool isSym(string s)
    {
        int n=s.length();
        if(n%2!=0)
        return false;
        int i=0,j=n-1;
        int s1=0,s2=0;
        while(i<j)
        {
            s1+=s[i++]-'0';
            s2+=s[j--]-'0';
        }
        return s1==s2;
    }
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++)
        {
            string str=to_string(i);
            if(isSym(str))
            count++;
        }
        return count;
    }

};