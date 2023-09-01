class Solution {
public:
    // bool ans(vector<int>&nums,int indx,vector<int>&dp)
    // {
       
    //     if(indx==nums.size()-1)return true;
    //     if(nums[indx]==0)return false;
    //     if(dp[indx]!=-1)return dp[indx];
    //     for(int i=indx+1;i<=indx+nums[indx];i++)
    //     {
    //         if(i<nums.size() && ans(nums,i,dp))  return dp[indx]=true;
    //     }
    //     return dp[indx]=false;
    // }
    bool canJump(vector<int>& nums) {
        
       int reach = 0; 
    
        for(int idx = 0; idx < nums.size(); idx++) {
            
            if(reach < idx) return false;
            
            reach = max(reach, idx + nums[idx]);
        }
        

        return true;
    }
};