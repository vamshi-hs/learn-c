#include "./stack.h"
#include <stddef.h>
#include <assert.h>
#include <stdio.h>

Stack* stack_push(Stack *stack,int data) {
/* (Stack *) */
  return (Stack *)ll_insert_at_start((struct LinkedList *)stack,data);
  /* printf("%d\n",data); */
  /* if (stack == NULL){ */
  /*   printf("stack is empty still this is wrong"); */
  /* } */
}

int stack_pop(Stack *stack,int *returnValue){
  ll_remove_at_first((struct LinkedList *)stack,returnValue);
}

int stack_is_empty(Stack *stack){
  if (stack == NULL){
    return 1;
  } else {
    return 0;
  }
}
