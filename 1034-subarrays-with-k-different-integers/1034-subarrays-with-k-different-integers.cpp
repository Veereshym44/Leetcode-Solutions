class Solution {
public:
long long subMostK(vector<int>&s,int k){
        int n = s.size();
        int i = 0;
        int j = 0;
        unordered_map<int,int>hash;
        int cnt = 0;
        int res = 0;
        while(j<n){
           hash[s[j]]++;
           if(hash[s[j]]==1){
               cnt++;
           }
           if(cnt>k){
               while(cnt>k){
                   hash[s[i]]--;
                   if(hash[s[i]]==0){
                       cnt--;
                   }
                   i++;
               }
           }
           res+=(j-i+1);
           j++;
        }
        return res;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return subMostK(nums,k) - subMostK(nums,k-1);
    }
};