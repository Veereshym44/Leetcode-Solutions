class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int>mp;
        
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            unordered_set<int>s(nums[i].begin(),nums[i].end());
            for(auto j:s)
                mp[j]++;
            
        }
        
        vector<int>ans;
        for(auto i:mp)
        {
            if(i.second==n)
                ans.push_back(i.first);
        }
        return ans;
    }
};