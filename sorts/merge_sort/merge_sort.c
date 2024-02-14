void merge(int *arr,int low,int mid,int high){
	int i = 0;
	int j = 0;
	int k = 0;
	int n1 = mid - low + 1;
	int n2 = high - mid;
	int Left[n1],Right[n2];
	
	for (i = 0; i < n1; i++){
		Left[i] = arr[low + i];
	}
	for (j = 0; j < n2; j++){
		Right[j] = arr[mid + 1 + j];
	}

	i = 0;
	j = 0;
	k = low;
	while(i < n1 && j < n2){
		if (Left[i] < Right[j]) {
			arr[k] = Left[i];
			i++;
			k++;
		} else {
			arr[k] = Right[j];
			j++;
			k++;
		}
	}
	while(i < n1) {
		arr[k] = Left[i];
		k++;
		i++;
	}
	while(j < n2) {
		arr[k] = Right[j];
		k++;
		j++;
	}
	return;
}

void merge_sort(int *arr,int l,int r){
	if (l < r) {
		int mid = l + (r - l) / 2;
		merge_sort(arr,l,mid);
		merge_sort(arr,mid+1,r);
		merge(arr,l,mid,r);
	}
	return;
}
