class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        i=len(arr)-1
        cur=arr[i]
        
        arr[i]=-1
        i=i-1
        while i>=0:
            temp=arr[i]
            arr[i]=cur

            cur=max(temp,cur)
    
            

            
            i=i-1
        return arr


        