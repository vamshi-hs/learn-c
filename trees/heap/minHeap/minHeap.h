#include "../../../arrayList/array_list.h"
/* struct MinHeap{ */
/* 	int data; */
/* 	struct MinHeap * left; */
/* 	struct MinHeap * right; */
/* }; */


/* struct MinHeap* insert(struct MinHeap *tree,const int newData){ */
/* 	if (tree == NULL) { */
/* 		struct MinHeap* newTree = (struct MinHeap*)malloc(sizeof(struct MinHeap)); */
/* 		newTree->data = newData; */
/* 		newTree->left = NULL; */
/* 		newTree->right = NULL; */
/* 	} */
/* } */
struct ArrayList minH_insert(struct ArrayList alist,int newValue);
int minH_pop(struct ArrayList *alist);
struct ArrayList minH_heap_sort(struct ArrayList alist);
