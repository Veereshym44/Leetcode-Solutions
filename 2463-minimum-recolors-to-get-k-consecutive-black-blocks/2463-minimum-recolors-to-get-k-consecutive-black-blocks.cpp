class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int b=0,w=0;
        
        for(int i=0;i<k;i++)
        {
            if(blocks[i]=='B')
                b++;
            else w++;
            }
        int i=0,j=k;
        int ans=k-b;
        
        
        while(j<blocks.length())
        {
            if(blocks[j]=='W')
                w++;
            else b++;
            
            if(blocks[i]=='W')w--;
            else b--;
            
            i++;
            j++;
            
            ans=min(ans,k-b);
                
            
        }
        
        return ans;
    }
};