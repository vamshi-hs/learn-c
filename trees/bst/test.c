#include <stdio.h>
#include <assert.h>
#include "./binary_search_tree.h"
/* #include "../../arrayList/array_list.h" */

void testBst(){
	printf("Testing bst........\n");
	int arr[] = {1,2,3,4};
	struct Bst *tree = NULL;
		//insert(NULL,3);
	int size = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i < size;i++){
		tree = insert(tree,arr[i]);
	}
	struct ArrayList alist = al_empty_new();
	alist = inorderToAlist(tree,alist);
	al_print(alist);
	printf("\n");
	assert(search(tree,2));
	assert(!search(tree,12));
}

int main(){
	testBst();
	return 0;
}
