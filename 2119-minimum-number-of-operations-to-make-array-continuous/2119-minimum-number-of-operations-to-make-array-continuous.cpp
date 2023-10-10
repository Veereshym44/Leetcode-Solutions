class Solution {
public:
    int minOperations(vector<int>& nums) {
           int ans=nums.size();
           int n=nums.size();
       sort(nums.begin(), nums.end());
        auto it=unique(nums.begin(), nums.end());
        nums.erase(it, nums.end());


 
        
 for(int i=0;i<nums.size();i++)
 {
    
     int u=nums[i]+n-1;

     int j=upper_bound(nums.begin()+i,nums.end(),u)-nums.begin();

     ans=min(ans,n-j+i);
 }

        return ans;


    }
};