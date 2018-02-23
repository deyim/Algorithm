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

    def topologicalSortUtil(self):
        path = []

        while self.zeros:
            pop = self.zeros.pop(0)
            path.append(pop)
            for v in self.graph[pop]:
                self.inDegrees[v] -= 1
                if self.inDegrees[v] == 0:
                    self.zeros.append(v)

        if len(path) == self.V:
            print(1)
        else:
            print(0)
        #print(path)

    def topologicalSort(self):
        # set for topo sort
        self.inDegrees = [0]*self.V
        self.zeros = []

        for u in range(self.V):
            for v in self.graph[u]:
                self.inDegrees[v] += 1

        for i in range(self.V):
            if self.inDegrees[i] == 0:
                self.zeros.append(i)

        print(self.zeros)
        self.topologicalSortUtil()

 
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






















