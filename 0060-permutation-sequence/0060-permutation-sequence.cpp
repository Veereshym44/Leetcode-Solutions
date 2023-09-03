class Solution {
public:
 
    string getPermutation(int n, int k) {
        vector<string>answer;
        string str="";
        for(int i=1;i<=n;i++)
        {
            str+=i+'0';
        }
        cout<<str;
       for(int i=0;i<k-1;i++)
       {
           next_permutation(str.begin(),str.end());
       }
       return str;
      
    }
};