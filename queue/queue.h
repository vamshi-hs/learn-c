#include "../arrayList/array_list.h"

//stack has two operations, push and pop in Last In First Out (LIFO) fashion
typedef struct ArrayList Queue;

void queue_push(Queue *queue,int data);
//0 means empty queue, one means top value removed
int queue_pop(Queue *queue,int *returnValue); 
int queue_is_empty(Queue *queue);
