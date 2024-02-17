#include "./minHeap.h"
#include <stdio.h>

struct ArrayList minH_insert(struct ArrayList alist,int newValue){
	al_push(&alist,newValue);
	int i = alist.len-1;
	printf("i = %d\n",i);
	while(i > 0){
		int parent = (i - 1)/2;
		printf("parent: %d\n",parent);
		int parentValue = 0;
		int currentValue = 0;
		if (al_get_i(alist,parent,&parentValue) && al_get_i(alist,i,&currentValue)){
			if (parentValue <= currentValue){
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

int minH_pop(struct ArrayList *alist){
	int popped_value = al_pop(alist);
	int current = 0;
	while(current < alist->len){
		int left_i = 2 * current + 1;
		int right_i = 2 * current + 2;
		int current_value = 0;
		if (!al_get_i(*alist,current,&current_value)){
			return -100000;
		}
		int left_value = 0;
		int right_value = 0;
		if (al_get_i(*alist,left_i,&left_value) && left_value < current_value){
			al_replace_at(alist,left_i,current_value);  
			al_replace_at(alist,current,left_value);  
			current = left_i;
			continue;
		} else if (al_get_i(*alist,right_i,&right_value) && right_value < current_value){
			al_replace_at(alist,right_i,current_value);  
			al_replace_at(alist,current,right_value);  
			current = right_i;
			continue;
		} else {
			break;
		}
	}
	return popped_value;
}

struct ArrayList minH_heap_sort(struct ArrayList alist){
	int length = alist.len;
	if (length <= 0) return alist;
	struct ArrayList new_alist = al_empty_new();
	while(length > 0){
		int insertAt = length - 1;
		int popped_value = minH_pop(&alist);
		printf("popped value: %d, insertAt: %d\n",popped_value,insertAt);
		if (popped_value == -100000){
			return alist;
		} else {
			printf("Before: ");
			al_print(alist);
			al_push(&new_alist,popped_value);
			/* al_replace_at(&alist,insertAt,popped_value); */
			length--;
		}
	}
	return new_alist;
}
