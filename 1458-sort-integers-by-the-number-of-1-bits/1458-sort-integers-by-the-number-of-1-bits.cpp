int cnt(int a)
{
    int count=0;
    while(a>0)
    {
        if(a&1==1)count++;
        a>>=1;
    }
    return count;
}
bool comp(int a,int b)
{
    if(cnt(a)==cnt(b))return a<b;
return cnt(a)<cnt(b);
}
class Solution {
public:
    
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),comp);
        return arr;
    }
};