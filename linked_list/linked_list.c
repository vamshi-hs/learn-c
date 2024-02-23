#include "./linked_list.h"
#include <stdio.h>
#include <stdlib.h>

struct LinkedList *ll_insert_at_start(struct LinkedList * list,int data){
	if (list == NULL){
		struct LinkedList * newNode = (struct LinkedList*) malloc(sizeof (struct LinkedList));
		newNode->data = data;
		newNode->next = NULL;
		return newNode;
	}
	struct LinkedList * newNode = (struct LinkedList*) malloc(sizeof (struct LinkedList));
	newNode->data = data;
	newNode->next = list;
	
	struct LinkedList *new_list = newNode;
	return new_list;
}

struct LinkedList *ll_insert_at_end(struct LinkedList * list,int data){
	if (list == NULL){
		struct LinkedList * newNode = (struct LinkedList*) malloc(sizeof (struct LinkedList));
		newNode->data = data;
		newNode->next = NULL;
		return newNode;
	}
	struct LinkedList *new_list = list;
	while(list->next != NULL){
		list = list->next;
	}
	struct LinkedList * newNode = (struct LinkedList*) malloc(sizeof (struct LinkedList));
	newNode->data = data;
	newNode->next = NULL;
	
	list->next = newNode;
	return new_list;
}

void ll_printList(struct LinkedList * list){
	while(list != NULL){
		printf("%d ",list->data);
		list = list->next;
	}
	printf("\n");
}

int ll_exists(struct LinkedList *list,int key){
	while(list != NULL && list->data != key){
		list= list->next;	
	}
	if (list == NULL){
		return 0;
	} else {
		return 1; 
	}
}

int ll_is_empty(struct LinkedList *list){
	if (list == NULL){
		return 0;
	} else {
		return 1;
	}
}
