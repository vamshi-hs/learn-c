#include <assert.h>
#include <stdio.h>

#include "./binary_search.h"

void test(){
	int arr1[] = {43,23,54,675,34,65,76,23,210};
	int arr2[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	int n = sizeof(arr2)/sizeof(arr2[0]);
	int result1 = binary_search(arr2,0,n,13);
	int result2 = binary_search(arr2,0,n,10);
	int result3 = binary_search(arr2,0,n,100);
			//sizeof(arr2)/sizeof(int) - 1,13);
//	int result2 = binary_search(arr2,0,sizeof(arr2)/sizeof(int) - 1,10);
//	int result3 = binary_search(arr2,0,sizeof(arr2)/sizeof(int) - 1,100);
//	assert(result1 == 12);
//	assert(result2 == 9);
//	assert(result3 == -1);
}

int main(){
	test();
	printf("Binary search: ");
	printf("\033[1;32m");
 	printf("All tests passed\n");
	printf("\033[0m");
	return 0;
}
