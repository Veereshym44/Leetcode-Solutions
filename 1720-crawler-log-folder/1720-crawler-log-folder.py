class Solution:
    def minOperations(self, logs: List[str]) -> int:
        ans=0
        for x in logs:
            if '../' in x:
                ans= max(0,ans-1)
            elif x != './':
                ans+=1
        return ans



        