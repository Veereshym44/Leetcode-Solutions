class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;

        for(auto i:arr)
        {
            mp[i]++;        }
    

    int cnt=0;

    string ans;

    for(auto i:arr)
    {
        if(mp[i]==1 && ++cnt==k)
        {
            ans=i;
            break;
        }

     
    
    }

    return ans;
    }
};