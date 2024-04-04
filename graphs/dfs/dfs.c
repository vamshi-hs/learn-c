#include <stdlib.h>
#include <stdio.h>
#include "./dfs.h"
#include "../../arrayList/array_list.h"

struct Node * createNode(int newValue){
	struct Node * newNode = (struct Node *)malloc(sizeof(struct Node));
	newNode->num = newValue;
	newNode->next = NULL;
	return newNode;
}

void pushNode(struct Node** list,int newValue){
	if (*list == NULL){
		*list = createNode(newValue);
	}
	struct Node * newNode = (struct Node *)malloc(sizeof(struct Node));
	newNode -> num = newValue;

	struct Node * temp = *list;
	while(temp -> next != NULL){
		temp = temp ->next;
	}
	temp -> next = newNode;
}

void printNodes(struct Node * list) {
	struct Node * temp = list;
	while(temp != NULL){
		printf("%d ",temp->num);
		temp = temp -> next;
	}
	printf("\n");
}

//initialize graph
struct Graph* createGraph(int numVertices){
	struct Graph * graph = (struct Graph *)malloc(sizeof(struct Graph));
	graph->listLen = numVertices;

	graph->list = (struct Node **)malloc(numVertices * sizeof(struct Node*));
	graph->visited = (int *)malloc(numVertices * sizeof(int));
	
	for(int i = 0;i < numVertices; i++){
		graph->list[i] = NULL;
		graph->visited[i] = 0;
	}

	return graph;
}

void addEdge(struct Graph* graph,int src,int dest){
	struct Node * newNode = createNode(dest);
	newNode -> next = graph -> list[src];
	graph -> list[src] = newNode;

	newNode = createNode(src);
	newNode -> next = graph -> list[dest];
	graph -> list[dest] = newNode;
}

void dfs(struct Graph* graph){
	struct ArrayList stack = al_new(0);
	int i = 0;
	while(!al_is_len_empty(stack)){
		int vertex =  0;
		if (!al_pop(&stack,&vertex)){
			return;
		}
		graph -> visited[vertex] = 1;
		printf("Visiting ...%d\n",vertex);
		struct Node* one_list = graph -> list[vertex]; 
		while (one_list != NULL) {
			if (!graph -> visited[one_list->num]){
				al_cons(&stack,one_list -> num);
			}
			one_list = one_list -> next;
		}
	}
}
