class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                ans++;
            }
            else{
                i++;
            }
        }

        int total=nums.size()-ans;
        if(total%2==0)return ans;
        return ans+1;

       
    }
};
