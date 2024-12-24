#include <assert.h>
#include "./linked_list.h"
#include <stdio.h>
#include <stdlib.h>

struct LinkedList *ll_insert_at_start(struct LinkedList * list,int data){
	if (list == NULL){
		struct LinkedList * newNode = (struct LinkedList*) malloc(sizeof (struct LinkedList));
		newNode->data = data;
		newNode->next = NULL;
		list = newNode;
		return list;
		/* return newNode; */
	}
	struct LinkedList * newNode = (struct LinkedList*) malloc(sizeof (struct LinkedList));
	newNode->data = data;
	newNode->next = list;
	list = newNode;
	
	struct LinkedList *new_list = list;
	return new_list;
}

struct LinkedList* ll_insert_sortedly(struct LinkedList * list,int data){
  if (list == NULL){
    struct LinkedList * newNode = (struct LinkedList*) malloc(sizeof (struct LinkedList));
    newNode->data = data;
    newNode->next = NULL;
    list = newNode;
    return newNode;
  }
  
  struct LinkedList* temp = list;
  struct LinkedList* prev = NULL;
  
  while(temp != NULL && temp -> data < data) {
    prev = temp;
    temp = temp -> next;
  }

  /* assert(prev != NULL); */

  struct LinkedList * newNode = (struct LinkedList*)malloc(sizeof (struct LinkedList));

  newNode->data = data;
  newNode->next = NULL;
  /* return newNode; */
  if (temp == NULL) {
    prev -> next = newNode;
  } else if (prev == NULL){
    newNode->next = temp;
    list = newNode;
  } else {
    prev->next = newNode;
    newNode->next = temp;
  }

  return list;
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

// pass linked list as reference, returns int for actually removing with 0 for empty list and 1 for non empty list
int ll_remove_at_first(struct LinkedList *list,int *returnValue){
  if (!ll_is_empty(list)) {
    return 0;
  }
  
  *returnValue = list->data;
  list = list->next;
  return 1;
}
