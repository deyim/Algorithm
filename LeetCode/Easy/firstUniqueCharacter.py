class Solution:
    def firstUniqChar(self, s):
        """
        :type s: str
        :rtype: int
        """
               
        nons= []
        
        for i in range(len(s)):
            if s[i] not in nons:
                nons.append(s[i])
            elif s[i] in nons:
                nons.remove(s[i])
           
            
            
        if not nons:
            return -1
        else:
            return s.index(nons[0])
            
        
        #"aadadaad" => 있다없다 끝이 아니라 있는게 여러번일 수 있잖아!!