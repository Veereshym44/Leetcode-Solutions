class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>ans;
     for(auto i:arr)
     {
         if(ans.size()==arr.size())break;

         ans.push_back(i);
         if(ans.size()==arr.size())break;
         if(i==0)ans.push_back(i);
     }
     arr=ans;
    }
};