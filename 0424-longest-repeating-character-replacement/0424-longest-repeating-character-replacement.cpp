class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans=0;
        unordered_map<char,int>mp;
        int maxi=0;


        int i=0,j=0;
        while(j<s.length())
        {
            mp[s[j]]++;
            maxi=max(maxi,mp[s[j]]);

            if(j-i+1-maxi>k)
            {
                while(j-i+1-maxi>k)
                {
                    mp[s[i]]--;
                    i++;
                }
            }
             
            ans=max(ans,j-i+1);
            j++;
           
        }
    
        return ans;
    }
};