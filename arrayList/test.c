#include "./array_list.h"
#include <stdio.h>

void test(){
    	struct ArrayList alist = al_new(5);
    	al_push(&alist,15);
    	al_push(&alist,25);
	al_print(alist);
	al_pop(&alist);
	al_print(alist);
	al_insert_at(&alist,1,34);
	al_print(alist);
    /* printf("TODO: testing arraylist\n"); */
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}
