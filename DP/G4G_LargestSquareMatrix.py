'''

url: https://practice.geeksforgeeks.org/problems/largest-square-formed-in-a-matrix/0
type: DP

'''
def Find(a,b,c):
	minimum = min(a,b,c)
	return minimum+1

TC = int(input())

while TC:
	TC -= 1
	row,col = map(int, input().split());
	
	field = []
	inputString = input().split()
	for i in range(row):
		myList = inputString[i*(col):(i+1)*col]
		myList = [int(i) for i in myList]
		field.append(myList)
	d = [[0] * col for x in range(row)]
	

	maximum = 0
	for i in range(row):
		for j in range(col):
			if field[i][j] == 1:
				d[i][j] = Find(d[i-1][j],d[i][j-1],d[i-1][j-1])
			if d[i][j] > maximum:
				maximum = d[i][j]
		
	print(maximum)
