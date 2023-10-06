#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    int ans(int n, int val, int k) {
        if (n == 0 && k >= 2) return 1;  
        if (n == 0 && k < 2 ||val>9) return 1;  

        int left = 1;
        if (n - val >= 0) {
            left = val * ans(n - val, val, k + 1);
        }

        int right = ans(n, val + 1, k);

        return max(left, right);
    }

    int integerBreak(int n) {
        if (n == 2) return 1;
        if(n==3)return 2;
        return ans(n, 1, 0);
    }
};


