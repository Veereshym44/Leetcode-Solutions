class Solution {
public:
    int numRabbits(vector<int>& answers) {
       unordered_map<int,int>mp;
       for(int i=0;i<answers.size();i++)
       {
           
           mp[answers[i]]++;
       } 

       int ans=0;
       for(auto i:mp)
       {
        //    ans+=i.second;
        if(i.second>i.first+1)
        {
            ans+=i.second%(i.first+1)==0?(i.second/(i.first+1))*(i.first+1):((i.second/(i.first+1))+1)*(i.first+1);
        }
        else{
            ans+=i.first+1;
        }

       }
       return ans;
    }
};