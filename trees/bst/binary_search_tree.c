#include <stdlib.h>
#include <stdio.h>
#include "./binary_search_tree.h"
/* #include "../../arrayList/array_list.h" */

struct ArrayList inorderToAlist(const struct Bst *tree,struct ArrayList alist){
  if (tree == NULL){
    return alist;
  }
  alist = inorderToAlist(tree->left,alist);
  al_push(&alist,tree->data);
  /* printf("%d ",tree->data); */
  alist = inorderToAlist(tree->right,alist);
  return alist;
}

void inorderPrint(const struct Bst *tree){
  if (tree == NULL){
    return;
  }
  inorderPrint(tree->left);
  printf("%d ",tree->data);
  inorderPrint(tree->right);
}

void postOrderPrint(const struct Bst *tree){
  if (tree == NULL){
    return;
  }
  postOrderPrint(tree->left);
  postOrderPrint(tree->right);
  printf("%d ",tree->data);
}

void preOrderPrint(const struct Bst *tree){
  if (tree == NULL){
    return;
  }
  printf("%d ",tree->data);
  preOrderPrint(tree->left);
  preOrderPrint(tree->right);
}

struct Bst* insert(struct Bst *tree,const int newData){
  if (tree == NULL){
    struct Bst* newTree = (struct Bst *)malloc(sizeof(struct Bst));
    newTree->data = newData;
    newTree->left = NULL;
    newTree->right = NULL;
  }else if(tree->data == newData){
    return tree;
  }else if(tree->data < newData){
    tree->right = insert(tree->right,newData);
    return tree;
  } else{
    tree->left = insert(tree->left,newData);
    return tree;
  }
}

struct Bst* new(int data){
  struct Bst* newTree = (struct Bst *)malloc(sizeof(struct Bst));
  newTree->data = data;
  newTree->left = NULL;
  newTree->right = NULL;
  return newTree;
}

int search(struct Bst *tree,int key){
  if (tree == NULL){
    return 0;
  } else if(tree->data == key){
    return 1;
  } else if(tree->data < key){
    search(tree->right,key);
  } else {
    search(tree->left,key);
  }
}
