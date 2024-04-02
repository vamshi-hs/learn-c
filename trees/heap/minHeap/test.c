/* $ cd ~/learn-c/trees/heap/minHeap/ */
/* $ gcc test.c ./minHeap.c ~/learn-c/arrayList/array_list.c */
#include <stdio.h>
#include <assert.h>
#include "./minHeap.h"

void test(){
	struct ArrayList minHeap = al_empty_new(); 
	int arr[6] = {53,34,22,101,-23,0};	
	minHeap = minH_insert(minHeap,arr[0]);
	minHeap = minH_insert(minHeap,arr[1]);
	minHeap = minH_insert(minHeap,arr[2]);
	minHeap = minH_insert(minHeap,arr[3]);
	minHeap = minH_insert(minHeap,arr[4]);
	minHeap = minH_insert(minHeap,arr[5]);
	al_print(minHeap);
	int popped_value = 0;
	/* if (minH_pop(&minHeap,&popped_value)){ */
	/* 	printf("popped value: %d\n",popped_value); */
	/* } */
	/* int popped_value = minH_pop(&minHeap); */
	al_print(minHeap);
	minHeap = minH_heap_sort(minHeap);
	printf("Sorted list: ");
	al_print(minHeap);
}

int main(){
	test();
	return 0;
}

