#include "./linked_list.h"
#include <stdio.h>
#include <assert.h>

void test(){
	printf("Testing linked list: ");
	int arr[] = {1,2,3,4};
	int size = sizeof(arr)/sizeof(int);
	struct LinkedList * list = NULL;
	for (int i = 0; i < size;i++){ 
		list = ll_insert_at_end(list,arr[i]);
	}
	ll_printList(list);
	list = ll_insert_at_start(list,34);
	ll_printList(list);
	/* printf("3\n"); */
	assert(!ll_exists(list,22));
	assert(ll_exists(list,1));
	assert(!ll_is_empty(NULL));
	assert(ll_is_empty(list));

	printf("Testing linked list remove at first: \n");
	int arr1[] = {1,2,3,4};
	int size1 = sizeof(arr1)/sizeof(int);
	struct LinkedList * list1 = NULL;
	for (int i = 0; i < size1;i++){
		list1 = ll_insert_at_start(list1,arr1[i]);
	}
	int returnValue = 0;
	ll_printList(list1);
	assert(ll_remove_at_first(list1,&returnValue));
	printf("returnValue: %d\n",returnValue);
	assert(returnValue==4);
}

void test_sortedly(){
  	printf("Testing linked list insert in sorted order: \n");
	int arr1[] = {4,3,2,1};
/* ,2,1}; */
	int size1 = sizeof(arr1)/sizeof(int);
	struct LinkedList * list1 = NULL;
	for (int i = 0; i < size1 ; i++){
	  list1 = ll_insert_sortedly(list1,arr1[i]);
	  printf("data: %d",list1->data);
	}
	printf("\n");
	int returnValue = 0;
	ll_printList(list1);
	assert(ll_remove_at_first(list1,&returnValue));
	printf("returnValue: %d\n",returnValue);
	assert(returnValue == 1);
}

int main(){
	/* test(); */
	test_sortedly();
	printf("Test passed\n");
	return 0;
}
