class Solution:
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        # sorting =>
        #increasing subsequence
        profit = 0
        for i in range(1,len(prices)):
            if prices[i] > prices[i-1]:
                profit += (prices[i]-prices[i-1])
        
        return profit
            
        
#         sortedPrices = prices
#         sortedPrices.sort()
#         length = len(prices)
#         profit = 0
        
#         low = 0 ; high = length-1
#         while low < high:
#             lowDay = prices.index(sortedPrices[low])
#             highDay = prices.index(sortedPrices[high])
#             if lowDay < highDay:
#                 profit += (sortedPrices[high]-sortedPrices[low])
#             elif lowDay > highDay:
                
            
            
            
        
        