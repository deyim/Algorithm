


def makeBuildOrder(myGraph):

	queue = []
	buildOrder = []

	for vertice in myGrapah.getVertices():
		if not vertice.incomingVertices():
			queue.append(vertice)

	while queue:
		curVertex = queue.get()
		buildOrder.append(curVertex)
		for vertice in curVertex.goingNodes():
			if not vertice.visited:
				queue.put(vertice)

	if len(buildOrder) != myGraph.size():
		return False

	return buildOrder

g = directedGraph()

for project in projects:
	g.addVertex(project)

for pair in dependencies:
	g.addEdge(pair[0], pair[1])

