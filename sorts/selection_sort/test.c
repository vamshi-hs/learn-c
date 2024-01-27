#include <stdio.h>
#include <assert.h>
#include "./selection_sort.h"

int array_equal(int *arr1,int *arr2,int n){
	// prerequisite that two arrays have equal length n
	for (int i = 0; i < n;i++){
		if (arr1[i] != arr2[i]){
			return 0;
		}
	}
	return 1;
}

void test_selection(){
	int arr[] = {34,12,4,565,23,54,65,32,32,324};
	int res_arr[] = {4,12,23,32,32,34,54,65,324,565};

	int n = sizeof(arr)/sizeof(arr[0]);
	int res_arr_n = sizeof(res_arr)/sizeof(res_arr[0]);
	selection_sort(arr,n);
	assert(n == res_arr_n);
	assert(array_equal(arr,res_arr,n));

	int empty_arr[] = {};
	int empty_size = 0;
	int res_empty_arr[] = {};
	selection_sort(empty_arr,n);
	assert(array_equal(empty_arr,res_empty_arr,empty_size));
	//(1);
}

int main(){
	test_selection();
	printf("Selection sort test passed");
	printf("\n");
}
