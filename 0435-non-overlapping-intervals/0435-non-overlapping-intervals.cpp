bool comp(vector<int>&a,vector<int>&b)
{
    return b[1]>a[1];
}
class Solution {
public:

    int eraseOverlapIntervals(vector<vector<int>>& in) {
        sort(in.begin(),in.end(),comp);
        int count=0;
        // for(int i=0;i<in.size()-1;i++)
        // {
        //     if(in[i][1]>in[i+1][0])
        //     {
        //         count++;
        //     }
        // }
        int prev=0,next=1;
        while(prev<in.size()-1&&next<in.size())
        {
            if(in[prev][1]>in[next][0])
            {
                next++;
                count++;
            }
            else{
                prev=next;
                next++;
            }

        }
        return count;

    }
};