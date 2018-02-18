from collections import defaultdict

class Graph:
	def __init__(self, nodes):
		self.graph = defaultdict(list)
		self.nodes = nodes

	def addEdge(self, u, v):
		self.graph[u].append(v); self.graph[v].append(u)

	def DFSset(self, start):
		self.visited = [False] * self.nodes
		self.depth = [0] * self.nodes
		self.DFSrecur(start,0)

	def DFSrecur(self, u, depth):
		self.visited[u] = True		
		self.depth[u] = depth
		for v in self.graph[u]:
			if self.visited[v] == False:
				self.DFSrecur(v, depth+1)

# G4G Nodes at even distance
def Nodes_at_even():
	T = int(input())

	while T:
		T -= 1

		N = int(input()); g = Graph(N)
		Numbers = input().split()
		for i in range(0,2*(N-1),2):
			print(i,i+1)
			u = int(Numbers[i]); v = int(Numbers[i+1])
			g.addEdge(u-1,v-1)

		g.DFSset(0)

		even = 0; odd = 0
		for i in g.depth:
			if i%2 == 0 : even += 1
			else: odd += 1

		ans = int(even*(even-1)/2 + odd*(odd-1)/2)
		print(g.depth)
		print(even, odd, ans)
		#print(int(ans))
	
# G4G Nth Fibonacci Number
def getFibo(targ):
	global d
	if targ <= 0:
		return 0
	elif d[targ] == -1:
		d[targ] = getFibo(targ-1) + getFibo(targ-2)
	return d[targ]%1000000007
def Fibo():
	T = int(input())
	global d
	d[0] = 0; d[1] = 1; d[2] = 1

	while T:
		T -= 1
		targ = int(input())
		print(getFibo(targ))
		
# G4G nCr
def nCr():
	T = int(input())

	while T:
		T -= 1
		two = input().split()
		N = int(two[0]); R = int(two[1])
		d = [[0]*(R+1) for i in range(N+1)]
		d[1][0] = 1; d[1][1] = 1;

		for n in range(1,N+1):
			for r in range(0,R+1):
				if r == 0 or n ==r:
					d[n][r] = 1
				elif n > r:
					d[n][r] = (d[n-1][r] + d[n-1][r-1])%1000000007
				else:
					continue

		print(d[N][R])

# G4G X Total shapes
def findRegion(i,j):
	global field
	move = [(-1,0),(0,-1),(0,1),(1,0)]
	q = []; q.append((i,j))

	while q:
		i,j = q.pop(0); field[i][j] = 'O'

		for step in move:
			newI = i+step[0]; newJ = j+step[1]
			if newI >= row or newI < 0 or newJ >= col or newJ < 0:
				continue
			if field[newI][newJ] == 'X':
				field[newI][newJ] = 'O'
				q.append((newI, newJ))
def X_Total():
	T = int(input())
	while T:
		T -= 1
		#global row, col, field
		row = 0; col = 0; field = [];
		row, col = map(int, input().split())

		inputString = list(input().split())
		for string in inputString:
			string = [i for i in string]
			field.append(string)

		regions = 0
		for i in range(row):
			for j in range(col):
				if field[i][j] == 'X':
					findRegion(i,j)
					regions += 1

		print(regions)
	
# G4G Kadane's Algorithm
def Kadane():
	T = int(input())
	while T:
		T -= 1
		N = int(input())
		numbers = input().split()
		numbers = [int(i) for i in numbers]

		maxEndingHere = 0; maxSoFar = numbers[0]
		for num in numbers:
			maxEndingHere += num
			if maxSoFar < maxEndingHere:
				maxSoFar = maxEndingHere
			elif maxEndingHere < 0:
				maxEndingHere = 0
		print(maxSoFar)

'''
앞에 있는 애만 신경쓰면 된다고.. 그래서 max Ending Here가 
0보다 작아질 때만 다시 initialize해주고 아닐 때는 계속 더해주는거지 일단


'''
	

#Nodes_at_even()
#d = [-1]*1000
#Fibo()
#nCr()
#LCS()
#X_Total()
Kadane()































