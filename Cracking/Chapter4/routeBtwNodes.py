from Graph import Graph, Node
import queue

def createNewGraph():
    g = Graph()
    sizegraph = 6
    temp = [0] * sizegraph

    temp[0] = Node("a", 3)
    temp[1] = Node("b", 0)
    temp[2] = Node("c", 0)
    temp[3] = Node("d", 1)
    temp[4] = Node("e", 1)
    temp[5] = Node("f", 0)

    temp[0].addAdjacent(temp[1])
    temp[0].addAdjacent(temp[2])
    temp[0].addAdjacent(temp[3])
    temp[3].addAdjacent(temp[4])
    temp[4].addAdjacent(temp[5])

    for i in range(sizegraph):
        g.addNode(temp[i])
    return g

def BFS(graph, start, end):
    q = queue.Queue(len(g.getNodes()))

    start.visited = True
    q.put(start)
    while not q.empty():
        cur = q.get()
        for vertex in cur.getAdjacent():
            if vertex.visited == False:
                if vertex == end:
                    return True
                q.put(vertex)
                q.visited = True
    return False


g = createNewGraph()
n = g.getNodes()
start = n[0]
end = n[5]
print(BFS(g, start, end))