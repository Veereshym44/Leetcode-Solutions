class Solution {
public:
    int minSwaps(string s) {
        int cnt=0;

        stack<char>stk;

        for(auto i:s)
        {
            if(i==']')
            {   if(!stk.empty())stk.pop();
                else
                {
                    stk.push(']');
                cnt++;
                }

            }
            if(i=='[')stk.push('[');
        }

        return cnt;
    }
};