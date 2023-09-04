class Solution {
public:
    int calPoints(vector<string>& o) {
        
        vector<int>vec;
        for(int i=0;i<o.size();i++)
        {
            string ch=o[i];
            if(ch=="C")
            vec.pop_back();
            else if(ch=="D")
            {
                vec.push_back(vec.back()*2);
            }
            else if(ch=="+")
            vec.push_back(vec[vec.size()-1]+vec[vec.size()-2]);
            else{
                vec.push_back(stoi(ch));
            }


    
        }
        int sum=accumulate(vec.begin(),vec.end(),0);
        return sum;
    }
};