#include <vector>
#include <algorithm>

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;

        for (int i = 0; i < l.size(); i++) {
          
            vector<int> temp(nums.begin() + l[i], nums.begin() + r[i] + 1);
            sort(temp.begin(), temp.end());

            int d = temp[1] - temp[0];
            bool isArithmetic = true;
            for (int j = 1; j < temp.size() - 1; j++) {
                if (temp[j + 1] - temp[j] != d) {
                    isArithmetic = false;
                    break;
                }
            }

            ans.push_back(isArithmetic);
        }

        return ans;
    }
};
