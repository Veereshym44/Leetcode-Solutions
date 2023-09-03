class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='I')
            {
            if(s[i+1]=='V'||s[i+1]=='X'||s[i+1]=='L'||s[i+1]=='C'||s[i+1]=='D'||s[i+1]=='M')
               sum=sum-1;
             else 
               sum=sum+1;
            }
               if(s[i]=='V')
            {
            if(s[i+1]=='L'||s[i+1]=='X'||s[i+1]=='C'||s[i+1]=='D'||s[i+1]=='M')
               sum=sum-5;
             else 
               sum=sum+5;
            }
               if(s[i]=='X')
            {
            if(s[i+1]=='L'||s[i+1]=='C'||s[i+1]=='D'||s[i+1]=='M')
               sum=sum-10;
             else 
               sum=sum+10;
            }
            
              if(  s[i]=='L')
              {
            if(s[i+1]=='C'||s[i+1]=='D'||s[i+1]=='M')
            sum=sum-50;
            else
                sum=sum+50;
              } 
               
            if(s[i]=='C')
            {
                if(s[i+1]=='D'||s[i+1]=='M')
            sum=sum-100;
            else
         sum=sum+100;
                }
               
            if(s[i]=='D')
            {
            if(s[i+1]=='M')
            sum=sum-500;
            else
            sum=sum+500;
                }
            if(s[i]=='M')
                sum=sum+1000;
            
            
        }  
       return sum; 
    }
};