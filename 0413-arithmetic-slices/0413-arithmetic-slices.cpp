class Solution {
public:
   
    
    int numberOfArithmeticSlices(vector<int>& nums) {
         int ans=0;
        int ln= nums.size();
        if(ln<3)return 0;
        
        vector<int> diff;
        
        for(int i=1;i<ln;i++){
            diff.push_back(nums[i]-nums[i-1]);
        }
        
        ln--;
        int i=0,j=0;
        
        while(j<ln){
            while(j<ln && diff[j]==diff[i]){
                if(j!= i)ans+= (j-i);
                j++;
            }
            i=j;
        }
        
        return ans;
    }
};