class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int maxi=0,maxel;
        unordered_map<int,int>mp,left,right;
        int k=0;
        for(auto i:nums)
        {
            mp[i]++;
            if(left.find(i)==left.end())left[i]=k;

            right[i]=k;
            
            if(maxi<mp[i] )
            {
                maxel=i;
                maxi=mp[i];
            }

            else if(maxi==mp[i] && right[i]-left[i]<right[maxel]-left[maxel])
            {
                maxel=i;
                maxi=mp[i];
            }
            k++;

        }
        int i=0,j=0;
        int cnt=0;
        while(j<nums.size() && cnt!=maxi)
        {
            if(nums[j]==maxel)cnt++;

            j++;

        }

        while(i<nums.size() && nums[i]!=maxel)
        {
            i++;
        }
        return j-i;

    }
};