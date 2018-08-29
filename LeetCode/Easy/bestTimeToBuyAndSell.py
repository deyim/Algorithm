#largest subarray sum problem!!
#Kardane's 
class Solution:
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        #longest increasing subsequence! 
        length = len(prices)
        d = [[1,i,0] for i in range (length)]
        
        for j in range(length):
            if prices[j] == 0:
                continue
            for i in range(j):
                if prices[j] > prices[i] and d[j] >= d[i]:
                    d[j][0] = d[i][0]+1
                    d[j][1] = d[i][1]
                    d[j][2] = prices[i] - prices[d[i][1]]
                    
        
        maxProfit = 0
        for i in range(length):
            if prices[i] == 0:
                continue
            maxProfit = max(maxProfit, d[j][2])            
        
        return maxProfit
                
                
        
        
                
                
    
    #[7,6,4,3,1]
    # 마지막 문제만 TLE 뜬다.. ㅜㅡㅜ














#  longestFirst = -99999999; curFirst = -9999999
#         longestLast = 999999999; curLast = 99999999
#         longestCnt = 0
#         curCnt = 0
        
#         for i in range(len(prices)):
#             print(longestFirst, longestLast)
#             if prices[i] > longestLast: 
#                 longestCnt += 1
#                 longestLast = prices[i]
                
#             elif prices[i] > curLast:
#                 print(2,prices[i], curLast)
#                 curCnt += 1
#                 curLast = prices[i]
#                 if longestCnt < curCnt:
#                     longestCnt = curCnt
#                     longestFirst = curFirst
#                     longestLast = curLast
#             else:
#                 print(3)
#                 curCnt = 1
#                 curFirst = prices[i]
#                 curLast = prices[i]
                
#         if(longestFirst == -99999999):
#             return 0
#         return longestLast - longestFirst