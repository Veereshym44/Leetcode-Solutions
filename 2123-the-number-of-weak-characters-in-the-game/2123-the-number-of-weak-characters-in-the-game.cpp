class Solution {
public:
    static bool comp(vector<int>&a,vector<int>&b)
    {
        if(a[0]==b[0])
        {
            return a[1]<b[1];
        }
        return a[0]>b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& p) {
        sort(p.begin(),p.end(),comp);
        int ans=0;

       int maxi=0;

       for(auto ps :p)
       {
           if(maxi>ps[1])
           ans++;

           else maxi=ps[1];
       }
        return ans;
    }
};