class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int k) {
        vector<int>diff;
        int ans=0;
        for(int i=0;i<capacity.size();i++)
        {
            int x=capacity[i]-rocks[i];
            if(x==0)ans++;
            else diff.push_back(x);
        }

        sort(diff.begin(),diff.end());

        for(int i=0;i<diff.size();i++)
        {
            if(diff[i]<=k)
            {
                ans++;
                k-=diff[i];
            }
            else
            break;
        }
        return ans;
    }
};