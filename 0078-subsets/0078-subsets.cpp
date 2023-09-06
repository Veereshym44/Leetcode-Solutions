class Solution {
public:
    void ans(vector<int>nums,vector<int>&path,vector<vector<int>>&answer,int indx)
    {
        if(indx==nums.size())
        {
            answer.push_back(path);
            return ;
        }
        ans(nums,path,answer,indx+1);
        path.push_back(nums[indx]);
        ans(nums,path,answer,indx+1);
        path.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>path;
        vector<vector<int>>answer;
        ans(nums,path,answer,0);
        return answer;
    }
};