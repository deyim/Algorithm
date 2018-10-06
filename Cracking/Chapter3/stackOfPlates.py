from SetOfStack import SetOfStack


st = SetOfStack(3)

for i in range(11):
	st.push(i)


st.printStack()
for i in  range(11):
	print(st.pop())





