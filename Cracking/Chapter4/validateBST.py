
def optimizedInorderComp(mynode):
	global lastElem
	if myNode == None:
		return

	if not optimizedInorderComp(mynode.left):
		return False

	if lastElem != None and mynode.value <= lastElem:
		return False
	lastElem = mynode.value

	if not optimizedInorderComp(mynode.right):
		return False

	return True



def inorderComp(myNode, ary):

	if myNode == None:
		return
	
	inorderComp(myNode.left, ary)
	ary.append(myNode.value)
	inorderComp(myNode.right, ary)


def recursiveComp(myNode, minVal, maxVal):
	if myNode == None:
		return True

	if myNode.value < minVal or myNode.value > maxVal:
		return False

	return recursiveComp(myNode.left, minVal, myNode.value) and\
			 recursiveComp(myNode.right, myNode.value, maxVal)