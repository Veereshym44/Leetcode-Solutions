
class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>&people) {
      vector<int>beg,end;

      for(auto i:flowers)
      {
          beg.push_back(i[0]);
          end.push_back(i[1]);
      }

      sort(beg.begin(),beg.end());
      sort(end.begin(),end.end());

      vector<int>ans;
      for(int i=0;i<people.size();i++)
      {
          int left=beg.size()-(upper_bound(beg.begin(),beg.end(),people[i])-beg.begin());
          int right=end.size()-(lower_bound(end.begin(),end.end(),people[i])-end.begin());
            ans.push_back(right-left);
      }
      return ans;
    }
};