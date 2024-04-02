#include "./maxHeap.h"
#include <stdio.h>

struct ArrayList maxH_insert(struct ArrayList alist,int newValue){
	al_push(&alist,newValue);
	int i = alist.len-1;
	printf("i = %d\n",i);
	while(i > 0){
		int parent = (i - 1)/2;
		printf("parent: %d\n",parent);
		int parentValue = 0;
		int currentValue = 0;
		if (al_get_i(alist,parent,&parentValue) && al_get_i(alist,i,&currentValue)){
			if (parentValue >= currentValue){
				break;
			} else {
				al_replace_at(&alist,parent,currentValue);  
				al_replace_at(&alist,i,parentValue);  
			}
		}
		i = parent; 
	}
	return alist;
}

int maxH_pop(struct ArrayList *alist,int *returnValue){
	int popped_value = 0;
	if (al_pop(alist,&popped_value)){
		*returnValue = popped_value;	
	}
	/* int popped_value = al_pop(alist); */
	int current_index = 0;
	while(current_index < alist->len){
		int left_i = 2 * current_index + 1;
		int right_i = 2 * current_index + 2;
		int current_value = 0;
		if (!al_get_i(*alist,current_index,&current_value)){
			return 0; 
		}
		int left_value = 0;
		int right_value = 0;
		if (al_get_i(*alist,left_i,&left_value) && left_value > current_value){
			al_replace_at(alist,left_i,current_value);
			al_replace_at(alist,current_index,left_value);  
			current_index = left_i;
			continue;
		} else if (al_get_i(*alist,right_i,&right_value) && right_value > current_value){
			al_replace_at(alist,right_i,current_value);  
			al_replace_at(alist,current_index,right_value);  
			current_index = right_i;
			continue;
		} else {
			break;
		}
	}
	return 1;
}

struct ArrayList maxH_heap_sort(struct ArrayList heap){
	int length = heap.len;
	if (length <= 0) return heap;
	struct ArrayList new_alist = al_empty_new();
	while(length > 0){
		int insertAt = length - 1;
		int popped_value = 0;
		if (!maxH_pop(&heap,&popped_value)) {
			/* printf("popped value: %d, insertAt: %d\n",popped_value,insertAt); */
			return heap;
		}
		/* if (popped_value == -100000){ */
		else {
			printf("Before: ");
			al_print(heap);
			al_push(&new_alist,popped_value);
			/* al_replace_at(&alist,insertAt,popped_value); */
			length--;
		}
	}
	return new_alist;
}
