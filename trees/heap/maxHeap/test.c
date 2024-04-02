/* $ cd ~/learn-c/trees/heap/maxHeap/ */
/* $ gcc test.c ./maxHeap.c ~/learn-c/arrayList/array_list.c */
#include <stdio.h>
#include <assert.h>
#include "./maxHeap.h"

void test(){
	struct ArrayList maxHeap = al_empty_new(); 
	int arr[6] = {53,34,22,101,-23,0};	
	maxHeap = maxH_insert(maxHeap,arr[0]);
	maxHeap = maxH_insert(maxHeap,arr[1]);
	maxHeap = maxH_insert(maxHeap,arr[2]);
	maxHeap = maxH_insert(maxHeap,arr[3]);
	maxHeap = maxH_insert(maxHeap,arr[4]);
	maxHeap = maxH_insert(maxHeap,arr[5]);
	al_print(maxHeap);
	int popped_value = 0;
	/* if (maxH_pop(&maxHeap,&popped_value)){ */
	/* 	printf("popped value: %d\n",popped_value); */
	/* } */
	/* int popped_value = maxH_pop(&maxHeap); */
	al_print(maxHeap);
	maxHeap = maxH_heap_sort(maxHeap);
	printf("Sorted list: ");
	al_print(maxHeap);
}

int main(){
	test();
	return 0;
}

