class Solution {
public:
  
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
      
        unordered_map<int,int>mp;
        int cur=1;
        int ans=0;
        int i=0,j=0;
        while(j<nums.size())
        {
            cur*=nums[j];

            if(cur>=k)
            {
                while(cur>=k&&i<nums.size()&&i<=j)
                {
                    cur=cur/nums[i];
                    i++;
                }
            }
        if(cur<k)
          ans+=j-i+1;
          j++;
        }
        return ans;
    }
};