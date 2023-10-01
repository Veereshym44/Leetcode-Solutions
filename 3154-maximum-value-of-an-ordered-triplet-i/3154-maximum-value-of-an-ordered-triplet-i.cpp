class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();

    vector<long long> maxLeft(n);
    vector<long long> maxRight(n);

    long long maxVal = LLONG_MIN;
        
        
    maxRight[n - 1] = nums[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        maxRight[i] = max(maxRight[i + 1], (long long)nums[i]);
    }

    maxLeft[0] = nums[0];
    for (int i = 1; i < n; i++) {
        maxLeft[i] = max(maxLeft[i - 1], (long long)nums[i]);
    }


    for (int j = 1; j < n - 1; j++) {
        long long leftVal = maxLeft[j - 1];
        long long rightVal = maxRight[j + 1];

        long long tripletVal = (leftVal - nums[j]) * rightVal;

        maxVal = max(maxVal, tripletVal);
    }

    if(maxVal>0) return maxVal;
        
    return 0;

    }
};