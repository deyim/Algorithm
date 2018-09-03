class Solution:
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        slen = len(s)
        tlen = len(t)
        cntChk = {}
        
        if slen != tlen:
            return False
        
        for i in range(slen):
            if s[i] in cntChk:
                cntChk[s[i]] += 1
            else:
                cntChk[s[i]] = 1
            if t[i] in cntChk:
                cntChk[t[i]] -= 1
            else:
                cntChk[t[i]] = -1
        
        for ch,cnt in cntChk.items():
            if cnt != 0:
                return False
        return True