class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<long long,long long> m;
        int cnt = 0;
        for(int i=0;i<arr.size();i++)
        {
            int rem = (arr[i]%k+k)%k;
            if(rem==0)
            {
                if(m.find(rem)!=m.end())
                {
                    cnt++;
                    m[rem]--;
                    if(m[rem]==0)
                    m.erase(rem);
                }
                else
                m[rem]++;
            }
            else if(m.find(k-rem)!=m.end())
            {
                cnt++;
                m[k-rem]--;
                if(m[k-rem]==0)
                m.erase(k-rem);
            }
            else
            m[rem]++;
        }
        if(cnt>=arr.size()/2)
        return true;
        return false;
    }
};