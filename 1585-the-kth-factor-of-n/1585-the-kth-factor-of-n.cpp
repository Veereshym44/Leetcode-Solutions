class Solution {
public:
    int kthFactor(int n, int k) {
        int x=n/2;
        vector<int>ans;
        ans.push_back(1);
        for(int i=2;i<=x;i++)
        {
            if(n%i==0)
            ans.push_back(i);
        }
        ans.push_back(n);
        if(ans.size()<k)return -1;
        return ans[k-1];
    }
};