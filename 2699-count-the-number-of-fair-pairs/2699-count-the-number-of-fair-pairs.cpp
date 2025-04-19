class Solution {
public:
    long long ans(vector<int>nums,int tar)
    {
        int i=0,j=nums.size()-1;
    long long res=0;
        while(i<j)
        {
            if(nums[i]+nums[j]>tar)
            {
                j--;
            }
            else 
            {
                res+=j-i;
                i++;

            }  
            
        }
        return res;
    }
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        return ans(nums,upper)-ans(nums,lower-1);
    }
};