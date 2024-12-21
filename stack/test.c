#include "./stack.h"
#include <stdio.h>
#include <assert.h>

void test(){
  int arr[] = {1,2,3,4};
  
  Stack *stack = NULL;

  for (int i = 0; i < 4;i++){
    stack = stack_push(stack,arr[i]);
  }

  int returnValue = 0;

  assert(stack_pop(stack,&returnValue));
  printf("Return value: %d\n",returnValue);
  assert(returnValue == 4);
  assert(!stack_is_empty(stack));
}

int main(){
  
  test();
  printf("Congratulations!! All test cases are passed.\n");

  return 0;
}
