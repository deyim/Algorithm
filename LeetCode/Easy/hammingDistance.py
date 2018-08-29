class Solution:
    def hammingDistance(self, x, y):
        """
        :type x: int
        :type y: int
        :rtype: int
        """
        if x == y:
            return 0
        
        binX = bin(x)[2:]
        binY = bin(y)[2:]
        
        lenX = len(binX); lenY = len(binY)
        if lenX > lenY:
            binY = "0"*(lenX-lenY)+binY
        else:
            binX = "0"*(lenY-lenX)+binX
        
        cnt = 0
        for i in range(len(binX)):
            if binX[i] != binY[i]:
                cnt += 1
        
        return cnt
        
        

# cnt = 0
#         for i in range(5,-1,-1):
#             curPower = 2**i
#             print(curPower)
#             if x < curPower and y < curPower:
#                 continue
#             if x%curPower != y%curPower:
#                 cnt +=1
#                 print(curPower)
        
#         return cnt