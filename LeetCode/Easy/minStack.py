class MinStack:
    minNum = []
    stack = []
    def __init__(self):
        """
        initialize your data structure here.
        """
        self.minNum.clear()
        self.stack.clear()
        

    def push(self, x):
        """
        :type x: int
        :rtype: void
        """
        self.stack.append(x)
        if not self.minNum or x <= self.minNum[0]:
            self.minNum.insert(0,x)        
        else:
            self.minNum.append(x)

    def pop(self):
        """
        :rtype: void
        """
        popped = self.stack.pop()
        self.minNum.remove(popped)
        
        
    def top(self):
        """
        :rtype: int
        """
        return self.stack[-1]      
        

    def getMin(self):
        """
        :rtype: int
        """
        # print(self.minNum)
        return self.minNum[0]
        
        


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(x)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()