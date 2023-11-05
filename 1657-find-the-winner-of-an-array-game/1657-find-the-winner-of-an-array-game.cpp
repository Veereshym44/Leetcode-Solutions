class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        if (k == 1) {
            return max(arr[0], arr[1]);
        }
        if (k >= arr.size()) {
            return *max_element(arr.begin(), arr.end());
        }

        int cur=arr[0];
        int cnt=0;

        for(int i=1;i<arr.size();i++)
        {
            if(cur>arr[i])
            {
                cnt++;
            }
            else{
                cur=arr[i];
                cnt=1;
            }

            if(cnt==k)return cur;
        }

        return cur;
    }
};