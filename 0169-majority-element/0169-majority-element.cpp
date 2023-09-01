class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        
        for(auto i:nums)
        {
            mp[i]++;

        }
        int ans=nums[0];
        for(auto i:mp)
        {
            if(mp[ans]<i.second)
            ans=i.first;
            
        }
        return ans;
    }
};