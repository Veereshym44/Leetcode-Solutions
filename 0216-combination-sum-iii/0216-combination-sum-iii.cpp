class Solution {
public:
    vector<vector<int>>answer;
    vector<int>path;
    void ans(int k,int n,int val)
    {
        
        if(k==0 && n==0)
        {
            answer.push_back(path);
            return;
        }
        if(k==0|| n==0||val>9)
        {
            return ;
        }
        
      
        path.push_back(val);
        ans(k-1,n-val,val+1);
        path.pop_back();

        

        ans(k,n,val+1);
    
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        ans(k,n,1);

        return answer;
    }
};