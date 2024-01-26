#include <assert.h>
#include <stdio.h>

#include "./linear_search.h"

void test(){
	int arr[] = {43,23,54,675,34,65,76,23,210};
	int result1 = linear_search(arr,sizeof(arr)/sizeof(int),23);
	int result2 = linear_search(arr,sizeof(arr)/sizeof(int),10);
	assert(result1 == 1);
	assert(result2 == -1);
}

int main(){
	test();
	printf("Linear search: ");
	printf("\033[1;32m");
 	printf("All tests passed\n");
	printf("\033[0m");
	return 0;
}
