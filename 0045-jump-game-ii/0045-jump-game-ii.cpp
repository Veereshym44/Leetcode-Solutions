class Solution {
public:
    // int ans(vector<int>nums,int pos,vector<int>&dp)
    // {
    //     if(pos>=nums.size()-1)
    //     return 0;
    //     if(dp[pos]!=-1)return dp[pos];
    //     int mini=1e9;
    //     for(int i=1;i<=nums[pos];i++)
    //     {
    //         int temp=1+ans(nums,pos+i,dp);
    //         if(temp!=1e9)
    //         mini=min(mini,temp);
    //     }
    //     return dp[pos]=mini;
    // }
    int jump(vector<int>& nums) {
          int size = nums.size();
      
        vector<int>dp(size,1e9);
        dp[size-1]= 0;
        
        for(int i= size-2;i>=0;i--){
            for(int j = i+1;j<=min(size-1,i+nums[i]);j++){
                dp[i]= min(dp[i],dp[j]+1);
            }
        }
        return dp[0];
    }
};