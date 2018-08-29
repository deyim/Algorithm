class Solution:
    
    def dp(self, n):
        if n==1:
            return 1
        elif n ==2:
            return 2
        return self.dp(n-1)+self.dp(n-2)
        
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        return self.dp(n)

