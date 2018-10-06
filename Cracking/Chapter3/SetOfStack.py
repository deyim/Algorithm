

class SetOfStack:

	def __init__(self, capacity=3):
		self.capacity = capacity
		self.stacks = [[]]
		self.curSet = 0
	
	def printStack(self):
		for stack in self.stacks:
			print(stack)

	def isThresh(self):
		return self.capacity == len(self.stacks[self.curSet])

	def push(self,value):
		if self.isThresh():
			self.curSet += 1
			self.stacks.append([])
		self.stacks[self.curSet].append(value)

	def pop(self):
		popped = self.stacks[self.curSet].pop()
		if len(self.stacks[self.curSet]) == 0:
			self.curSet -= 1
			self.stacks.pop()
		return popped

	def peek(self):
		return self.stacks[self.curSet][-1]