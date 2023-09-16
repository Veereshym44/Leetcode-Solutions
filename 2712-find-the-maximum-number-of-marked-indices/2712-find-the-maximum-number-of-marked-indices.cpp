class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& n) {
        int myans=0;
        sort(n.begin(),n.end());
        int i=0,j=(n.size()+1)/2;
        while(j<n.size()){
            if(n[i]*2<=n[j]){
                myans++;
                i++;
            }
            j++;
        }
        return myans*2;
    }
};