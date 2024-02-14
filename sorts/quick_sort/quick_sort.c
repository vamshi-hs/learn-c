int partition(int *arr,int low,int high){
	int pivot = arr[high];
	int lastInserted = low-1;
	for(int i = low; i < high; i++){
		if(arr[i] < pivot){
			lastInserted++;
			int temp = arr[i];
			arr[i] = arr[lastInserted];
			arr[lastInserted] = temp;
		}
	}
	int temp = arr[lastInserted+1];
	arr[lastInserted+1] = arr[high];
	arr[high] = temp;
	return lastInserted+1;
}

void quick_sort(int *arr,int low,int high){
	if (low < high){
		int pivot = partition(arr,low,high);
		quick_sort(arr,low,pivot-1);
		quick_sort(arr,pivot+1,high);
	}
}


/*
void quick_sort(int *arr,int l,int r){
	if (l < r) {
		int pivot = arr[l];
		int new_l = l + 1;
		int n = r - new_l + 1;
		int right[n];
		int left[n];
		int num1=0;
		int num2=0;
		for(int i = 0; i < n; i++) {
			if (arr[i+new_l] < pivot) {
				left[num1] = arr[i+new_l];
				printf("Left %d ",left[num1]);
				num1++;
			} else {
				right[num2] = arr[i+new_l];
				printf("Right %d ",right[num2]);
				num2++;
			}
		}
		printf("\n");
		printf("num2: %d",num2);
		for(int i = 0; i < num1;i++){
			arr[l+i] = left[i];
			printf("arr[l+i]: %d i+l: %d",arr[l+i],l+i);
		}
		printf("l + num1: %d\n",l+num1);
		arr[l + num1] = pivot;
		for(int j = 0; j < num2;j++){
			printf("arr[num1+j]: %d num1+l: %d",arr[num1+j],num1+j);
			arr[num1 + j +new_l] = right[j];
		}
		quick_sort(arr,l,num1-1);
		quick_sort(arr,num1+1,r);
	}
	return;
}*/
