#include<stdio.h>
int Binary_search(int [], int, int);
int main(){
	int a[10], i, n, key, pos;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	printf("Enter the elements: ");
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	printf("Enter the element to be searched: ");
	scanf("%d", &key);	
	pos = Binary_search(a, key, n);
	printf("Element is at the position %d\n", pos+1);
	return 0;
}
	
int Binary_search(int a[], int key, int n){
	int i, low = 0, high = n - 1, mid;
	while(low <= high) {
		mid = (low + high) / 2;
		if(key == a[mid]){
    		return mid;
		}
		else if(key < a[mid]){
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}
}

