from LinkedList import LinkedList

def findKth(head,k):
	if head == None:
		return 0

	curNum = findKth(head.next,k)+1

	if curNum == k:
		print(head.value)
	return curNum



# def findKth(myList):
# 	slow = fast = myList.head

# 	for i in range(k):
# 		fast = fast.next

# 	while fast:
# 		slow = slow.next
# 		fast = fast.next 

# 	return slow.value


l0 = LinkedList()
l0.generate(10,1,30)
print(l0)
k = 5
findKth(l0.head,5)