import unittest
from collections import Counter

def checkPermutation(str1, str2):
    #char_set = [0 for x in range(128)]
    counter = Counter()
    if len(str1) != len(str2):
        return False

    for ch in str1:
        counter[ch] = 1
        #key = ord(ch)
        #char_set[key]+=1
    for ch in str2:
        if counter[ch] == 0:
            return False
        counter[ch] -= 1
        #key = ord(ch)
        #if(char_set[key]==0):
        #    return False        
        #char_set[key]-=1

    return True

    #for value in char_set:
    #    if value != 0:
    #        return false

   

class PermutationTest(unittest.TestCase):
    strOriginal = "ABCDE"
    falseData = ["AABC", "ABDCD", "DDCD"]
    trueData = ["ABCED", "BCDEA"]

    def test_falseData(self):
        for data in self.falseData:
            result = checkPermutation(self.strOriginal, data)
            self.assertFalse(result)
    
    def test_trueData(self):
        for data in self.trueData:
            result = checkPermutation(self.strOriginal, data)
            self.assertTrue(result)

if __name__ == "__main__":
    unittest.main()