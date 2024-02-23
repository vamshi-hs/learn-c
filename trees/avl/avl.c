#include "./avl.h"
#include <stdlib.h>
#include <stdio.h>

int avl_getHeight(const struct AVL* tree){
    if (tree == NULL) {
        return 0;
    }
    int leftHeight = tree->left ? tree->left->height : 0;
    int rightHeight = tree->right? tree->right->height : 0;
    int treeHeight = leftHeight > rightHeight ? leftHeight : rightHeight;
    return 1 + treeHeight;
}

int avl_getBalance(const struct AVL* tree){
    if (tree == NULL){
        return 0;
    }
    return avl_getHeight(tree->left) - avl_getHeight(tree->right);
}

struct AVL * avl_rightBalance(struct AVL * tree){
    if (tree == NULL || tree->right == NULL){
        printf("1");
        return tree;
    }
    struct AVL * r = tree->right;
    struct AVL * rl = tree->right->left;
    tree->right = rl;
    r->left = tree;
    tree->height = avl_getHeight(tree);
    r->height = avl_getHeight(r);
    return r; 
}

struct AVL * avl_leftBalance(struct AVL * tree){
    if (tree == NULL || tree->left == NULL){
        printf("1");
        return tree;
    }
    struct AVL * l = tree->left;
    struct AVL * lr = tree->left->right;
    tree->left = lr;
    l->right = tree;

    tree->height = avl_getHeight(tree);
    l->height = avl_getHeight(l);
    return l; 
}

struct AVL * avl_insert(struct AVL* tree,int newValue){
  if (tree == NULL){
   struct AVL* newTree = (struct AVL *)malloc(sizeof(struct AVL));
        newTree->data = newValue;
        newTree->height = 1;
        newTree->left = NULL;
        newTree->right = NULL;
        return newTree;
    } else if(tree->data < newValue){
    tree->right = avl_insert(tree->right,newValue);
  } else{
    tree->left = avl_insert(tree->left,newValue);
  }
  tree->height = avl_getHeight(tree);
  if (avl_getBalance(tree) >= 2){
    if(avl_getBalance(tree->left) == -1){
      tree->left = avl_rightBalance(tree->left);
    }
    tree = avl_leftBalance(tree);
  }
  if (avl_getBalance(tree) <= -2){
   if(avl_getBalance(tree->right) == 1){
      tree->right = avl_leftBalance(tree->right);
    }
    tree = avl_rightBalance(tree);
  }
  printf("Pre order: ");
	avl_preorderPrint(tree);
  printf("\n");
  return tree;
}

void avl_inorderPrint(const struct AVL *tree){
  if (tree == NULL){
    return;
  }
  avl_inorderPrint(tree->left);
  printf("%d ",tree->data);
  avl_inorderPrint(tree->right);
}

void avl_postorderPrint(const struct AVL *tree){
  if (tree == NULL){
    return;
  }
  avl_postorderPrint(tree->left);
  avl_postorderPrint(tree->right);
  printf("%d ",tree->data);
}
void avl_preorderPrint(const struct AVL *tree){
  if (tree == NULL){
    return;
  }
  printf("%d ",tree->data);
  avl_preorderPrint(tree->left);
  avl_preorderPrint(tree->right);
}