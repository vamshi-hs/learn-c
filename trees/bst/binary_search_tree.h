#include "../../arrayList/array_list.h"

struct Bst{
	struct Bst *left;
	int data;
	struct Bst *right;
};

void inorderPrint(const struct Bst *tree);

struct Bst* insert(struct Bst *tree,const int newData);

int search(struct Bst *tree,int key);

struct Bst* new(int data);

struct ArrayList inorderToAlist(const struct Bst *tree,struct ArrayList alist);
