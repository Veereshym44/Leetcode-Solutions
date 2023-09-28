class Solution {
public:
    int tribonacci(int n) {

        if(n==0)return 0;
        if(n==1)return 1;
        if(n==2)return 1;
     vector<int>dp(n+1,0);
    int prev1=0;
    int prev2=1;
     int prev3=1;

     int val;

     for(int i=3;i<=n;i++)
     {
         val=prev1+prev2+prev3;
         prev1=prev2;
         prev2=prev3;
         prev3=val;
        
     }
     return val;
    }
};