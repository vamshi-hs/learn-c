#include "../linked_list/linked_list.h"

//stack has two operations, push and pop in Last In First Out (LIFO) fashion
typedef struct Linked_List Stack;

Stack* stack_push(Stack *stack,int data);
//0 means empty stack, one means top value removed
int stack_pop(Stack *stack,int *returnValue); 
int stack_is_empty(Stack *stack);
