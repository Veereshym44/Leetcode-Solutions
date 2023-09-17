class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>ans;
        ans.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            int x=ans.back();

            if(nums[i]>x)
            ans.push_back(nums[i]);

            else{
                int indx=lower_bound(ans.begin(),ans.end(),nums[i])-ans.begin();
                ans[indx]=nums[i];
            }
        }
        return ans.size();
    }
};