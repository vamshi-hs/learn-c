#include <stdio.h>
#include "./dfs.h"

void test(){
	/* struct Node * newNode = createNode(34); */
	struct Node * newNode = NULL;
	/* printf("NewNode num: %d\n",newNode->num); */
	pushNode(&newNode,1);
	pushNode(&newNode,11);
	pushNode(&newNode,111);
	pushNode(&newNode,11111);
	pushNode(&newNode,111111);
	printNodes(newNode);
}

void test1(){
	struct Graph* graph = createGraph(7);
	addEdge(graph,0,1);
	addEdge(graph,0,2);
	addEdge(graph,1,3);
	addEdge(graph,1,4);
	addEdge(graph,4,6);
	addEdge(graph,2,5);

	dfs(graph);
}

int main(){
	test1();	
	return 0;
}
