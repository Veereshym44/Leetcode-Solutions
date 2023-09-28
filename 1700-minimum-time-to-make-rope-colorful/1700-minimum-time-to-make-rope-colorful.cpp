class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int pre=0;
        int ans=0;
        for(int i=1;i<colors.size();i++)
        {
            if(colors[pre]==colors[i])
            {
                ans+=min(neededTime[pre],neededTime[i]);
                pre=neededTime[pre]<neededTime[i]?i:pre;
            }
            else pre=i;
        }
        return ans;
    }
};