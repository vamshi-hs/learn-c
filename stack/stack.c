#include "./stack.h"
#include <stddef.h>
#include <assert.h>
#include <stdio.h>

Stack* stack_push(Stack *stack,int data) {
  return (Stack *)ll_insert_at_start((struct LinkedList *)stack,data);
}

int stack_pop(Stack *stack,int *returnValue) {
  ll_remove_at_first((struct LinkedList *)stack,returnValue);
}

Stack* stack_insert_sortedly(Stack *stack,int data) {
  return (Stack *)ll_insert_sortedly((struct LinkedList *)stack,data);
}

int stack_is_empty(Stack *stack) {
  if (stack == NULL){
    return 1;
  } else {
    return 0;
  }
}
