class Solution {
public:
    bool isRobotBounded(string s) {
        int x=0,y=0;
        int dir=0;
        int i=0;

   
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='G')
            {
                if(dir==0)
                {
                    y++;
                   
                }
                else if(dir==1)
                {
                    x++;
                    
                }
                else if(dir==2)
                {
                    y--;
              
                }
                else if(dir==3)
                {
                    x--;
                }

                     
            }
            else if(s[i]=='L')
            {
                dir=(dir+1)%4;
               
            }
            else if(s[i]=='R')
            {
                dir=(dir-1+4)%4;
                
            }

            

        }
 
        if(x==0 && y==0)return true;
        if(dir==0)return false;
        return true;
    }
};