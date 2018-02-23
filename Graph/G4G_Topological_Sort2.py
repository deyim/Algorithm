#Python program to print topological sorting of a DAG
from collections import defaultdict
 
#Class to represent a graph
class Graph:
    def __init__(self,vertices):
        self.graph = defaultdict(list) #dictionary containing adjacency List
        self.V = vertices #No. of vertices
 
    # function to add an edge to graph
    def addEdge(self,u,v):
        self.graph[u].append(v)

    def topologicalSortUtil(self,u):
        self.visited[u] = True

        for v in self.graph[u]:
            if self.visited[v] == False:
                self.topologicalSortUtil(v)

        self.path.insert(0,u)

       

    def topologicalSort(self):
        self.path = []
        self.visited = [False]*self.V

        for u in range(self.V):
            if self.visited[u] == False:
                self.topologicalSortUtil(u)
       
        print(self.path)

 
g= Graph(6)
g.addEdge(5, 2);
g.addEdge(5, 0);
g.addEdge(4, 0);
g.addEdge(4, 1);
g.addEdge(2, 3);
g.addEdge(3, 1);
 
print("Following is a Topological Sort of the given graph")
g.topologicalSort()
#This code is contributed by Neelam Yadav









'''

def topoSort(n, graph):
    inDegrees = [0]*n
    zeros = []

    for u in range(n):
        for v in graph[u]:
            inDegrees[v] += 1

    for i in range(n):
        if inDegrees[i] == 0:
            zeros.append(i)

    path = []

    while zeros:
        pop = zeros.pop(0)
        path.append(pop)
        for v in graph[pop]:
            inDegrees[v] -= 1
            if inDegrees[v] == 0:
                zeros.append(v)

    if len(path) == N:
        print(1)
    else:
        print(0)

'''






















