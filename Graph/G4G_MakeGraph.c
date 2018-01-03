/*
 * =====================================================================================
 *
 *       Filename:  graph_create.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/05/2017 17:31:50
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include "Graph.h"

struct Graph* makeGraph(){
	int V, edge;
	int src, dest;
	scanf("%d%d", &V, &edge);
	struct Graph* graph = createGraph(V);
	
	for(int i = 0 ; i < edge ; i ++){
		scanf("%d%d", &dest, &src);
		addEdge(graph, src, dest);
	}
	
	//printGraph(graph);
	
	return graph;
	
}

