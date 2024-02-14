#include <stdio.h>
#include <assert.h>
#include "./quick_sort.h"

void print_int_array(int *arr,int n){
	for(int i = 0;i < n;i++){
		printf("%d ",arr[i]);
	}
}

int array_equal(int *arr1,int *arr2,int n){
	// prerequisite that two arrays have equal length n
	for (int i = 0; i < n;i++){
		if (arr1[i] != arr2[i]){
			return 0;
		}
	}
	return 1;
}

void quick_test(){
	//int arr1[] = {34,54,65,76,648,798};
	/* int arr2[] = {3,4,5,1,2}; */
	/* int mid = 0 + (4 - 0) / 2; */
	/* int arr_unsorted[] = {5,4,3,2,1}; */
	//int res_arr[15];
	//merge(arr2,0,mid,4);
	/* quick_sort(arr2,0,4); */
	/* printf("\n\nmodified array\n\n"); */
	/* print_int_array(arr2,5); */

	int arr[] = {34,12,4,565,23,54,65,32,32,324};
	int res_arr[] = {4,12,23,32,32,34,54,65,324,565};

	int n = sizeof(arr)/sizeof(arr[0]);
	int res_arr_n = sizeof(res_arr)/sizeof(res_arr[0]);
	quick_sort(arr,0,n-1);
	assert(array_equal(arr,res_arr,n));
	//merge_sort(arr,0,n-1);
	//assert(n == res_arr_n);
	//assert(array_equal(arr,res_arr,n));

	int empty_arr[] = {};
	int empty_size = 0;
	int res_empty_arr[] = {};
	quick_sort(empty_arr,0,empty_size);
	//merge_sort(empty_arr,0,empty_size);
	assert(array_equal(empty_arr,res_empty_arr,empty_size));
	
	//print_int_array(arr_unsorted,5);
	//print_int_array(arr2,5);
}

int main(){
	/* printf("1"); */
	quick_test();
	printf("Quick sort test passed\n");
	return 0;
}
