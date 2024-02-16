#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "./array_list.h"

struct ArrayList al_new(int new_value){
    struct ArrayList alist = 
    {
        .data = malloc(2*sizeof (int)),
        .capacity = 2,
        .len = 1,
    };
    alist.data[0] = new_value;
    return alist;
}

struct ArrayList al_empty_new(){
	struct ArrayList alist = {
		.data = NULL,
		.capacity = 0,
		.len = 0,
	};
	return alist;
}

void al_push(struct ArrayList *alist,int new_value){
	if (alist->capacity == 0){
		alist->data = malloc(2*sizeof(int));
		alist->data[0] = new_value;
		alist->capacity = 2;
		alist->len = 1;
		return;
	}
	if (alist->len >= alist->capacity){
		alist->capacity *= 2;
	}
	alist->data = realloc(alist->data,alist->capacity * sizeof(int));
	alist->data[alist->len] = new_value;
	alist->len++;
}

void al_print(struct ArrayList alist){
	printf("ArrayList of len(%d): \n",alist.len);
	for(int i = 0;i < alist.len;i++){
		printf("%d ",alist.data[i]);
	}
	printf("\n");
}

int al_pop(struct ArrayList *alist){
	if (alist->len <= 0) return -1;
	int head = alist->data[0];
	memmove(alist->data,alist->data+1,(alist->len-1)*sizeof(int));
	alist->len--;
	return head;
}

void al_insert_at(struct ArrayList *alist,int index,int newValue){
	if (index < 0 || index >= alist->len) return;
	if (alist->len+1>alist->capacity){
		alist->capacity *= 2;
	}
	memmove(alist->data+index+1,alist->data+index,(alist->len-index+1)*sizeof(int));
	alist->data[index] = newValue; 
	alist->len++;
}

void al_free(struct ArrayList *alist){
	free(alist->data);
}
