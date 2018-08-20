import unittest


def isUnique(str):
    if(len(str) > 128):
       return False
    
    char_set = [False for x in range(128)]

    for ch in str:
        key = ord(ch)
        if char_set[key]:
            return False
        char_set[key] = True
    return True

class UniqueTest(unittest.TestCase):
    trueData = ['sgew@3','gsd','12345']
    falseData = ['aagw@3', 'aasd', '44224']

    def test_unique_true(self):
        for data in self.trueData:
            result = isUnique(data)
            self.assertTrue(result)
    
    def test_unique_false(self):  
        for data in self.falseData:
            result = isUnique(data)
            self.assertFalse(result)


if __name__ == "__main__":
    unittest.main()
