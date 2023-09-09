class Solution {
public:
    // int ans(vector<int>&nums,int target,vector<int>&dp)
    // {
    //     if(target==0)return 1;

        
    //     if(dp[target]!=-1)return dp[target];

    //     int answer=0;

    //     for(int i=0;i<nums.size();i++)
    //     {
    //         if(nums[i]<=target)
    //         answer+=ans(nums,target-nums[i],dp);
    //     }

    //     return dp[target]=answer;
    // }
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int>dp(target+1,0);

        dp[0]=1;

        for(int i=1;i<=target;i++)
        {
            for(auto num:nums)
            {
                if(num<=i)
                {
                    dp[i]+=dp[i-num];
                }
            }
        }

        return dp[target];

    }
};