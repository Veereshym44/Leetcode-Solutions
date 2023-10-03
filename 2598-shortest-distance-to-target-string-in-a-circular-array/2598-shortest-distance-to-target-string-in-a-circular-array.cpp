class Solution {
public:
    int closetTarget(vector<string>& words, string t, int s) {
        int prev;
        int next;
        int prev_count=0;
        int next_count=0;
        int n=words.size();
        if(words[s]==t)
        return 0;
int ans=INT_MAX;
        prev=(s-1+n)%n;
        next=(s+1)%n;

        while(prev!=next)
        {
            prev_count++;
            next_count++;
            if(words[prev]==t)
            {
                ans=min(ans,prev_count);
            }

            if(words[next]==t)
            {
                ans=min(ans,next_count);
            }

            prev=(prev-1+n)%n;
;
            next=(next+1)%n;
        }
        if(words[next]==t && prev==next)return min(ans,next_count+1);
        if(ans==INT_MAX)return -1;
        return ans;
    }
};