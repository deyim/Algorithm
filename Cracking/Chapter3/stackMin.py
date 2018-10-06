class Stack:

	def __init__(self):
		self.values = []
		self.minStack = []

	def __str__(self):
		return ''.join(str(self.values))

	def push(self, value):
		self.values.append(value)
		if not self.minStack:
			self.minStack.append(value)
		elif self.minStack[-1] > value:
			self.minStack.append(value)

	def pop(self):
		if self.min() == self.peek():
			self.minStack.pop()
		return self.values.pop()

	def min(self):
		return self.minStack[-1]

	def peek(self):
		return self.values[-1]

st = Stack()
st.push(5); st.push(6); st.push(3); st.push(1)
print(st)
print(st.peek())
print(st.min())
print(st.pop())
print(st.min())