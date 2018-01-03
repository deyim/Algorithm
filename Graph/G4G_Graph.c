/*
 * =====================================================================================
 *
 *       Filename:  Graph.c
 *
 *    Description:  Graph data structure
 *
 *        Version:  1.0
 *        Created:  09/05/2017 17:11:30
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Graph.h"

struct AdjListNode* newAdjListNode(int dest)
{
	struct AdjListNode* newNode = (struct AdjListNode*) malloc(sizeof(struct AdjListNode));
	newNode->dest = dest;
	newNode->next = NULL;
	
	return newNode;
}
struct Graph* createGraph(int V)
{
	struct Graph* graph = (struct Graph *)malloc(sizeof(struct Graph));
	graph->V = V;
	graph->array = (struct AdjList*)malloc(V*sizeof(struct AdjList));
	
	//Initialize each adj list as empty by making head as NULL
	for(int i = 0 ; i < V; i ++){
		graph->array[i].Head = NULL;
	}
	
	return graph;
}
void addEdge(struct Graph* graph, int src, int dest)
{
	//Rewrite your code!
	
	//src to dest
	struct AdjListNode *newNode = newAdjListNode(dest);
	newNode->next = graph->array[src].Head;
	graph->array[src].Head = newNode;
	
	//dest to src
	newNode = newAdjListNode(src);
	newNode->next = graph->array[dest].Head;
	graph->array[dest].Head = newNode;

	
}
void printGraph(struct Graph* graph)
{
	//reWrite your code!!
	struct AdjListNode *curNode = NULL;
	for(int i = 0 ; i < graph->V ; i++){
		curNode = graph->array[i].Head;
		printf("List[%d]", i);
		while(curNode){
			printf("->%d",curNode->dest);
			curNode = curNode->next;
		}
		printf("\n");
	}
}



