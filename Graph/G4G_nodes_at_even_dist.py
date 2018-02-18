from collections import defaultdict

'''
https://practice.geeksforgeeks.org/problems/nodes-at-even-distance/0
'''

class Graph:
	def __init__(self,nodes):
		self.graph = defaultdict(list)

	def addEdge(self, u, v):
		self.graph[u].append(v)
		self.graph[v].append(u)

	def DFSset(self):
		self.visited = [False]*(len(self.graph)+1)
		self.depth = [0]*(len(self.graph)+1)

	def DFSrecur(self, v, num):
		self.visited[v] = True				
		for u in self.graph[v]:	
			if self.visited[u] != True:
				self.depth[u] = num
				self.DFSrecur(u, num+1)

m = int(input())

while m:
	n = int(input())
	g = Graph(n)

	inputNums = input().split()
	for i in range(0,2*(n-1),2):
		u = int(inputNums[i]); v = int(inputNums[i+1]) 
		g.addEdge(u,v)

	g.DFSset()
	g.depth[1] = 0
	g.DFSrecur(1,1)

	even = 0; odd = 0
	for i in range(1, n+1):
		if g.depth[i] %2 == 0: even += 1
		else: odd += 1

	pair = int(even*(even-1)/2 + odd*(odd-1)/2)
	print(g.depth)
	print(pair)	
	m -= 1
