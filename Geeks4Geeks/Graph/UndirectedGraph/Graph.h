/*
 * =====================================================================================
 *
 *       Filename:  Graph.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/05/2017 17:30:49
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

struct AdjListNode
{
	int dest;
	struct AdjListNode* next;
};
struct AdjList
{
	struct AdjListNode* Head;
};
struct Graph
{
	int V;
	struct AdjList* array;
};

// A utility function to create a new adjacency list node
struct AdjListNode* newAdjListNode(int dest);

//A utility function that creates a graph of V vertices
struct Graph* createGraph(int V);

// Adds an edge to an undirected graph
void addEdge(struct Graph* graph, int src, int dest);

//
void printGraph(struct Graph* graph);
