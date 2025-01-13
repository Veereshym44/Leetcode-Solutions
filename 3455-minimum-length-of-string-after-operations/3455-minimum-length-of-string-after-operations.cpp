class Solution {
public:
 
    int minimumLength(string s) {
        unordered_map<char,int>mp;
        
        
        
        for(auto i:s)
        {
            mp[i]++;
        }
        
        int ans=0;
        for(auto i:mp)
        {
    
    if(i.second<3) continue;
            
    if(i.second%2)ans+=i.second-1;
            
            else ans+= i.second-2;

        }
        
        return s.length()-ans;
    }
};