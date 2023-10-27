class Solution {
public:
    int expandCenter(int left,int right,string s)
    {
        while(left>=0 && right<s.length()&& s[left]==s[right])
        {
            left--;
            right++;
        }
        return right-left-1;
    }
    string longestPalindrome(string s) {
       int n=s.length();
       int sub1=0,sub2=0,start=0,end=0;
       for(int i=0;i<n;i++)
       {
           sub1=expandCenter(i,i,s);
           sub2=expandCenter(i,i+1,s);
           int sub=max(sub1,sub2);
            if(sub>end-start)
            {
                start=i-(sub-1)/2;
                end=i+sub/2;
            }   

       } 
       return s.substr(start,end+1-start);
    }
};