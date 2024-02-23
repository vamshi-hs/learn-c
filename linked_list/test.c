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
	assert(!ll_exists(list,22));
	assert(ll_exists(list,1));
	assert(!ll_is_empty(NULL));
	assert(ll_is_empty(list));
}

int main(){
	test();
	printf("Test passed\n");
	return 0;
}
