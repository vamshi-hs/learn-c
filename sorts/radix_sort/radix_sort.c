#include <assert.h>
#include <stdio.h>
#include "../../stack/stack.h"

int ten(int power) {
  int product = 1;
  for(int i = 0; i < power; i++){
    product *= 10;
  }
  return product;
}

int digitAt(int num,int at){
  assert(at >= 1);
  int mod_value = num % ten(at);

  if (at == 1) return mod_value;
  
  return mod_value / ten(at - 1);
  
}


int radix_sort_iter(int *arr,int size,int decimal){
//                                  0    1    2    3    4    5    6    7    8    9
  Stack *stacks[10] = {NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL};
/* struct LinkedList *stacks[10] = {NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL}; */

  int base_values[size];
  int all_zero = 1;
  for (int i = 0; i < size; i++){
    if (digitAt(arr[i],decimal) != 0) {
      all_zero = 0; // false
    }
    base_values[i] = digitAt(arr[i],decimal);
  }

  if (all_zero){
    return 1;
  }

  for (int i = 0; i < size; i++){
    int min = i;

    for (int j = i + 1;j < size; j++){
      if (base_values[min] > base_values[j]) {
	min = j;
      }
    }

    stacks[base_values[min]] = stack_insert_sortedly(stacks[base_values[min]],arr[min]);

    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;

    int temp_base = base_values[i];
    base_values[i] = base_values[min];
    base_values[min] = temp_base;
  }

  int counter = 0;

  for (int i = 0;i < 9; i++){
    if (stacks[i]== NULL){
      continue;
    }

    struct LinkedList * temp = (struct LinkedList *)stacks[i];

    while(temp != NULL) {
      arr[counter] = temp->data;
      temp = temp -> next;
      counter += 1;
    }
  }

  return 0;
}

void radix_sort(int *arr,int size){
  int decimal = 1;
  while(radix_sort_iter(arr,size,decimal) == 0){
    decimal++;
  }
}
