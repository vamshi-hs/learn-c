#include "./queue.h"
#include <stddef.h>
#include <assert.h>
#include <stdio.h>

void queue_push(Queue *queue,int data) {
/* (Queue *) */
  al_push((struct ArrayList *)queue,data);
}

int queue_pop(Queue *queue,int *returnValue){
  al_pop((struct ArrayList *)queue,returnValue);
}

int queue_is_empty(Queue *queue){
  if (queue == NULL){
    return 1;
  } else {
    return 0;
  }
}
