class Solution {
public:
    int candy(vector<int>& r) {
        vector<int>ans(r.size(),1);
        int n=r.size();
        for(int j=0;j<n-1;j++)
        {
            if(r[j]<r[j+1])
            ans[j+1]=max(ans[j+1],ans[j]+1);
            if(r[n-1-j]<r[n-j-2])
            ans[n-2-j]=max(ans[n-2-j],ans[n-1-j]+1);
        }
        n=0;
        for(auto it:ans)
        n+=it;
        return n;
    }
};