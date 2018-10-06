from Tree import Node


def makeLinkedLists2(myRoot):
	linkedLists = []

	if not myRoot: return None
	curList = LinkedList()
	curList.add(myRoot)

	while curList.getSize() > 0:
		linkedLists.append(curList)
		parentList = curList; curList.empty()

		for parent in parentList:
			if parent.left: curList.add(parent.left)
			if parent.right: curList.add(parent.right)
		







def makeLinkedLists(myNode, LinkedLists, level):
	if myNode is None:
		return

	if len(LinkedLists) != level:
		newLinkedList = LinkedList()
		LinkedLists.append(newLinkedList)
	LinkedLists[levle].add(myNode)
	makeLinkedList(myNode.left, level+1)
	makeLinkedList(myNode.right, level+1)

makeLinkedList(myList.head, 0)


def findLinkedList(myTree):
	root = myTree.getRoot()
	depth = myTree.getDepth()
	curDepth = 0

	LLs =[]
	oddQ = queue.Queue()
	oddQ.put(root)
	evenQ = queue.Queue()
	popQ = None; pushQ = None
	while oddQ or evenQ:
		if curDepth % 2:
			popQ = oddQ; pushQ = evenQ
		else:
			popQ = evenQ; pushQ = oddQ

		ll = LinkedList()
		while popQ:
			popped = popQ.get()
			for node in popped.getChildren():
				pushQ.put(node)
				ll.push(node)

		LLs.append(ll)



