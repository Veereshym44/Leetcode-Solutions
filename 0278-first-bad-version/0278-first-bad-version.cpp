// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
     int low=1,high=n;
     int res;
     while(low<=high)
     {
        int mid=(high-low)/2+low;
        if(isBadVersion(mid))
        {
            high=mid-1;
            res=mid;

        }
        else{
            low=mid+1;
        }
     }
     return res;
    
    }
};