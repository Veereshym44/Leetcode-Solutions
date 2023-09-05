class Solution {
public:
    int longestOnes(vector<int>& s, int k) {
        int ans = 0;
        int zeroCount = 0;

        int i = 0, j = 0;
        while (j < s.size()) {
            if (s[j] == 0) {
                zeroCount++;
            }

            while (zeroCount > k) {
                if (s[i] == 0) {
                    zeroCount--;
                }
                i++;
            }

            ans = max(ans, j - i + 1);
            j++;
        }

        return ans;
    }
};
