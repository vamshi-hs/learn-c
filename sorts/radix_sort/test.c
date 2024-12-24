#include <stdio.h>
#include <assert.h>
#include "./radix_sort.h"

int array_equal(int *arr1,int *arr2,int n){
	// prerequisite that two arrays have equal length n
	for (int i = 0; i < n;i++){
		if (arr1[i] != arr2[i]){
			return 0;
		}
	}
	return 1;
}

void test_radix(){
	int arr[] = {11,34,12,4,565,23,54,65,32,32,324,1,1000};

	int res_arr[] = {1,4,11,12,23,32,32,34,54,65,324,565,1000};
	int n = sizeof(arr)/sizeof(arr[0]);
	int res_arr_n = sizeof(res_arr)/sizeof(res_arr[0]);
	radix_sort(arr,n);
	assert(n == res_arr_n);
	assert(array_equal(arr,res_arr,n));

	int empty_arr[] = {};
	int empty_size = 0;
	int res_empty_arr[] = {};
	radix_sort(empty_arr,n);
	assert(array_equal(empty_arr,res_empty_arr,empty_size));
	//(1);
}

void test_ten(){
  assert(ten(1) == 10);
  assert(ten(2) == 100);
  assert(ten(3) == 1000);
  assert(ten(4) == 10000);
}

void test_digit(){
  assert(digitAt(534,1)==4);
  assert(digitAt(534,2)==3);
  assert(digitAt(534,3)==5);

  assert(digitAt(4,2)==0);
  /* printf("%d\n",digitAt(534,0)); */
}

int main(){
  test_ten();
  test_digit();
  test_radix();
  printf("Radix sort test passed");
  printf("\n");
}
