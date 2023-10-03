class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int even = 0;
        vector<int> ans;
        
        for (auto num : nums) {
            if (num % 2 == 0) {
                even += num;
            }
        }
        
        for (auto query : queries) {
            int val = query[0];
            int index = query[1];
            
            if (nums[index] % 2 == 0) {
                even -= nums[index];
            }
            
            nums[index] += val;
            
            if (nums[index] % 2 == 0) {
                even += nums[index];
            }
            
            ans.push_back(even);
        }
        
        return ans;
    }
};
