void selection_sort(int *arr,int n){
	if (n == 0) {
		return;
	} 
	//int min = 0;
	for(int i = 0; i < n;i++){
		int min = i;
		for (int j = i+1; j < n;j++){
			if (arr[min] > arr[j]){
				min = j; 
			}
		}
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}
