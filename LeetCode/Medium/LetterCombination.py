class Solution:
    letters = [[],[],['a','b','c'],['d','e','f'],['g','h','i'],['j','k','l'],['m','n','o'],['p','q','r','s'],['t','u','v'],['w','x','y','z']]
    res = []
    
    def appendString(self,digitsList, idx, length, appending):
        if idx == length:
            self.res.append(appending)
            return

        for ch in self.letters[digitsList[idx+1]]:
            self.appendString(digitsList,idx+1,length,appending+ch)
        
        
    def letterCombinations(self, digits):
        """
        :type digits: str
        :rtype: List[str]
        """
        self.res.clear()
        if digits == "":
            return self.res
        
        
        digitsList = [int(_) for _ in digits]
        self.appendString(digitsList,-1,len(digitsList)-1,"")
        
        
        return self.res
    #failure case: ""
        