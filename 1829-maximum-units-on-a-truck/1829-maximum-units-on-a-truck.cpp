  bool comp(vector<int>&a,vector<int>&b)
    {
      return a[1]>b[1];
    }
class Solution {
public:
  
    int maximumUnits(vector<vector<int>>& box, int t) {
        int ans=0;
        sort(box.begin(),box.end(),comp);
       for(auto i:box)
       {
          int x=min(i[0],t);
          ans+=x*i[1];
          t-=x;
          if(t==0)break;
       }
       return ans;
        
       
    }
};