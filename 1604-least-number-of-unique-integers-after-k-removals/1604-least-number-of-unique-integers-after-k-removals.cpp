class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(auto i:arr)
        {
            mp[i]++;
        }
        priority_queue<int,vector<int>,greater<>>pq;


        for(auto i:mp)
        {
        
        pq.push(i.second);
        }
       

        while(k>0 && !pq.empty() && k>=pq.top())
        {
           
            k-=pq.top();

           
            pq.pop();
            

        }

        return pq.size();
    }
};