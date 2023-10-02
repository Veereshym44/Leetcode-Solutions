class Solution {
public:
    bool winnerOfGame(string colors) {
        if(colors.length()<3)return false;

        int cnt1=0,cnt2=0;
        int n=colors.size();

        for(int i=1;i<n-1;i++)
        {
            if(colors[i]=='A')
            {
                if(colors[i-1]=='A' && colors[i+1]=='A')
                cnt1++;
            }


            if(colors[i]=='B')
            {
                if(colors[i-1]=='B' && colors[i+1]=='B')
                cnt2++;
            }
        }

        return cnt1>cnt2;
            }
};