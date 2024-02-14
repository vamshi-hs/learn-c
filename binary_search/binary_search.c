// prerequisite sorted array
int binary_search(int *arr, int low,int high,int key){
	while(low <= high){
		int mid = low + (high - low) / 2;
		//int mid = (low + high)/2;
		if (low > high){
			return -1;
		} else if (arr[mid] == key) {
			return mid;
		} else if (arr[mid] < key) {
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}
	return -1;
}
