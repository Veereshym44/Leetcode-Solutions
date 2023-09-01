class Solution {
public:
  bool binarySearch(vector<int>&arr,int target){
        int low = 0;
        int high = arr.size()-1;
        while(high-low>=0){
            int mid = (high+low)/2;
            if(arr[mid]>target){
                high = mid-1;
            }
            else if(arr[mid]<target)    low = mid+1;
            else return true;
        }
        return false;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if(!binarySearch(nums,target))return {-1,-1};
        int low=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int high=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        
     
        return {low,high-1};
    }
};