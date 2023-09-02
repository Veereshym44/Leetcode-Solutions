class Solution {
public:
    int numRabbits(vector<int>& answers) {
       unordered_map<int,int>mp;
       int ans=0;
       for(int i=0;i<answers.size();i++)
       {
         mp[answers[i]]++;
       } 
     for(auto it : mp){
ans += ((it.second + (it.first + 1) - 1) / (it.first + 1)) * (it.first + 1);
}



      
       return ans;
    }
};