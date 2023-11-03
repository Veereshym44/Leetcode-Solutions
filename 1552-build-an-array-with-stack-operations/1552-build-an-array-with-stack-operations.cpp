class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        int i=1,j=0;
        while(j<target.size() && i<=n)
        {
            ans.push_back("Push");
            if(target[j]!=i)
            ans.push_back("Pop");
            else j++;
            i++;
        }
        return ans;
    }
};