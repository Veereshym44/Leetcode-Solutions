class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int zero=0;
        int i=0,j=0;
        int ans=0;
        while(j<nums.size())
        {
            if(nums[j]==0)
            {
                zero++;
            }
            while(zero!=0)
            {
                if(nums[i]==0)
                zero--;
                i++;
            
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};