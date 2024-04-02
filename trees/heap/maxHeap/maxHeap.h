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
struct ArrayList maxH_insert(struct ArrayList alist,int newValue);
int maxH_pop(struct ArrayList *alist,int *returnValue);
struct ArrayList maxH_heap_sort(struct ArrayList alist);
