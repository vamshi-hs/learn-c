#include "./queue.h"
#include <stdio.h>
#include <assert.h>

void test(){
  int arr[] = {1,2,3,4};
  
  Queue queue = (Queue)al_new(0);

  for (int i = 0; i < 4;i++){
    queue_push(&queue,arr[i]);
  }


  int returnValue = 0;

  assert(queue_pop(&queue,&returnValue));
  printf("Return value: %d\n",returnValue);
  assert(returnValue == 0);
  assert(!queue_is_empty(&queue));
}

int main(){
  
  test();
  printf("Congratulations!! All test cases are passed.\n");

  return 0;
}
