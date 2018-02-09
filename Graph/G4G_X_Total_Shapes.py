'''
	Type: BFS
	URL: https://practice.geeksforgeeks.org/problems/x-total-shapes/0
'''


def BFS(i,j,field,row,col):
	q = []
	move = [(-1,0),(0,-1),(1,0),(0,1)]
	q.append((i,j))
	
	while q:
		(i,j) = q.pop(0); field[i][j] = 'O'
		for adj in move:
			if i+adj[0]>=row or j+adj[1]>=col or i+adj[0] < 0 or j+adj[1] < 0: 
				continue
			if field[i+adj[0]][j+adj[1]] == 'X':
				field[i+adj[0]][j+adj[1]] = 'O'
				q.append((i+adj[0],j+adj[1]))

T = int(input())
while T:
	T -= 1
	inputNums = input().split()
	row = int(inputNums[0]); col = int(inputNums[1])

	field = []
	inputString = input().split()

	for i in range(row):
		myList = inputString[i]
		myList = [i for i in myList]
		field.append(myList)

#	for i in field:
#		print(i)
	
	region = 0
	for i in range(row):
		for j in range(col):
			if field[i][j] == 'X':
				BFS(i,j,field,row,col)
				region += 1

	print(region)



	




''''

2
4 7
OOOOXXO OXOXOOX XXXXOXO OXXXOOO
10 3
XXO OOX OXO OOO XOX XOX OXO XXO XXX OOO

'''









