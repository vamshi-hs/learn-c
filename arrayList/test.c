#include "./array_list.h"
#include <stdio.h>
#include <assert.h>

void test(){
    	struct ArrayList alist = al_new(5);
	int returnValue = 0;
    	al_push(&alist,15);
    	al_push(&alist,25);
	al_print(alist);
	al_pop(&alist,&returnValue);
	al_print(alist);
	al_insert_at(&alist,1,34);
	al_print(alist);
	int myArray[] = {1,2,3,4,54,5,6,7,8,8};
	int len = sizeof(myArray)/sizeof(int);
    	struct ArrayList alist1 = al_empty_new();
	for (int i = 0; i < len; i++){
		al_push(&alist1,myArray[i]);
	}
	al_print(alist1);
	/* int at_zero; */
	/* if (al_get_i(alist1,1,&at_zero)){ */
		/* printf("shoud be one: %d ",at_zero); */
	/* } */
	al_remove_at(&alist1,4);
	al_print(alist1);
}

int main(int argc, char const *argv[])
{
    	test();
    	return 0;
}
