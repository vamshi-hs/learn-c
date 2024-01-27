#include <stdio.h>

void insertion_sort(int *arr,int n){
	if (n == 0) {
		return;
	}
	for(int i = 1; i < n;i++){
		int key = arr[i];
		int j = i-1;
		while (j >= 0 && key < arr[j]) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}
