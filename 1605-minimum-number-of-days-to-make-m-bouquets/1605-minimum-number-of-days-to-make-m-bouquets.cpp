class Solution {
public:
    int minDays(vector<int>& b, int m, int k) {
        int low=1;
        int high=INT_MIN;
        int n=b.size();
        for(int i=0;i<n;i++)
        {
            high=max(high,b[i]);
        }
        int ans=high+1;
        int x=ans;
        
        while(low<=high)
        {
            int cur=0;
            int mid=(low+high)/2;
            int cnt=0;
            for(int i=0;i<n;i++)
            {
                if(b[i]<=mid)
                {
                    cnt++;
                }
                else{
                    cur+=cnt/k;
                    cnt=0;
                }
            }
            cur+=cnt/k;
            if(cur<m)
            {
                low=mid+1;
                
            }
            else if(cur>=m)
            {
                ans=min(ans,mid);
                high=mid-1;
            }
           
            
        }
        if(ans==x)
        return -1;
        return ans;
    }
};