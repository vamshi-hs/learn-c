#include <stdio.h>
#include "./avl.h"

void test_avl(){
	printf("Testing avl........\n");
	int arr[] = {10,20,30,40,50,25};
	struct AVL *tree = NULL;
	int size = sizeof(arr)/sizeof(arr[0]);
	for(int i=0 ; i < size ; i++){
		printf("inserting %d\n",arr[i]);
		tree = avl_insert(tree,arr[i]);
	}
	avl_preorderPrint(tree);
}

int main(int argc, char const *argv[])
{
    test_avl();
    return 0;
}
