class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]>=nums[i])
            {
                ans+=abs(nums[i-1]-nums[i])+1;
                nums[i]+=abs(nums[i-1]-nums[i])+1;
            }
        }
        return ans;
    }
};