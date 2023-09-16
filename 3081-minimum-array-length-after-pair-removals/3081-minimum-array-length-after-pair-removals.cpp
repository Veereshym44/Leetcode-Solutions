class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
unordered_map<int,int>mp;

     int maxi=0;

     for(auto i:nums)
     {
         mp[i]++;
         maxi=max(maxi,mp[i]);
     }
     maxi=maxi*2-nums.size();

     if(maxi>0)return maxi;

     else
     return abs(maxi)&1;


     
    }
};