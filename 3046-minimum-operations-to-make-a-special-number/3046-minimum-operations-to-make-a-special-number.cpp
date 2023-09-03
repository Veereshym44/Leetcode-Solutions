class Solution {
public:
    int dp[101][25];
    int ans(string num,int indx,long long  val)
    {
       if(indx==num.length())
       {
           if(val%25==0)return 0;
           return 1e9;
       }
       if(dp[indx][val]!=-1)return dp[indx][val];
       int dig=num[indx]-'0';
       
       int pic=ans(num,indx+1,((val*10)+dig)%25);
       int notPic=1+ans(num,indx+1,val);
       return dp[indx][val]=min(pic,notPic);
    }
    int minimumOperations(string num) {
        memset(dp,-1,sizeof(dp));
    
     return ans(num,0,0); 
    }
};