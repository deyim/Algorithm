from LinkedList import LinkedList

def partition(myList, x):
	node = myList.head
	newList = LinkedList()

	while node.next:
		if node.value >= x:
			newList.add(node.value)
			node.value = node.next.value
			#node.next와 같이 가장 Nonetype 에러가 날 확률이 높은 곳을 조심해야돼!!
			node.next = node.next.next
		else:
			node = node.next

	myList.tail.next = newList.head

l1 = LinkedList()
l1.generate(10,1,10)
print(l1)
partition(l1,5)
print(l1)