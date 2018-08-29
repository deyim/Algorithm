# The isBadVersion API is already defined for you.
# @param version, an integer
# @return a bool
# def isBadVersion(version):

class Solution:
    def firstBadVersion(self, n):
        """
        :type n: int
        :rtype: int
        """
        # The isBadVersion API is already defined for you.
# @param version, an integer
# @return a bool
# def isBadVersion(version):

class Solution:
    def firstBadVersion(self, n):
        """
        :type n: int
        :rtype: int
        """
        low = 0 ; high = n ; center = n//2 
        while 1:
            print(center)
            if isBadVersion(center):
                if isBadVersion(center-1) == False:
                    return center
                high = center
                center = (low+high)//2
            else:
                if isBadVersion(center+1) == True:
                    return center+1     #이거 조심!!!!           
                low = center
                center = (low+high)//2
            
            
            
            # 2126753390
            # 1702766719





        # i = n/2
        # while 1:
        #     if isBadVersion(i):
        #         if isBadVersion(i-1) == False:
        #             return i
        #         i /= 2
        #     else:
        #         if isBadVersion(i+1) == True:
        #             return i
        #         i *= 2
            
        
        




        # for i in range(1,n+1):
        #     if isBadVersion(i):
        #         return i
            
            
            
            # 2126753390
            # 1702766719