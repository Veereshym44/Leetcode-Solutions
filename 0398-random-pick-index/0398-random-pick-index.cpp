class Solution {
public:
    unordered_map<int,vector<int>>mp;
    Solution(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]].push_back(i);
        }

        
    }
    
    int pick(int target) {

int ans;
        if(mp.find(target)!=mp.end())
        {
            int x=mp[target].size();
            if(x==1)
            return mp[target][0];

            else{

                int y=rand()%x;

                ans=mp[target][y];
            }
        }
        return ans;
        
    }
};

/**
 
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 
 */