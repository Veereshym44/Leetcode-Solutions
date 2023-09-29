class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        char ch;
        int i=0;
        while(i<nums.size()-1 &&nums[i]==nums[i+1] )
        {
            i++;
        }
        if(i==nums.size()-1)return true;
        if(nums[i]<nums[i+1])
            ch='i';
        else ch='d';
        
        while(i<nums.size()-1)
        {
            if(nums[i]<nums[i+1] && ch=='d')
                return false;
            else if(nums[i]>nums[i+1] && ch=='i')
                return false;
            
            i++;
                
        }
        return true;
    }
};