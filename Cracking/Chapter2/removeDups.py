from LinkedList import LinkedList

def removeDups(myList):
	if not myList:
		return

	
	curNode = myList.head
	appeared = [curNode.value]
	# while curNode:
	# 	if curNode.value in appeared:
	# 		preNode.next = curNode.next
	# 		curNode = preNode.next
	# 	else:
	# 		appeared.append(curNode.value)
	# 		preNode = curNode; curNode = curNode.next
	while curNode.next:
		if curNode.next.value in appeared:
			curNode.next = curNode.next.next
		else:
			appeared.append(curNode.next.value)
			curNode = curNode.next
		





l0 = LinkedList([])
print(l0)
removeDups(l0)
print(l0)


l1 = LinkedList([1,4,2,3,5,6,6,3,2,1,7]) #1,4,2,5,6,3,7
print(l1)
removeDups(l1)
print(l1)

l2 = LinkedList()
l2.generate(50,1,30)
print(l2)
removeDups(l2)
print(l2)