#include<stdio.h>
int rec_linear_search(int [], int, int);
int main() {
	int a[10], key, n, i = 0, p;
	printf("Enter the value of n: ");
	scanf("%d", &n);
    printf("Enter the elements: ");
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	printf("Enter the element to be searched: ");
	scanf("%d", &key);
	p = rec_linear_search(a, key, n);
	if(p > 0){
		printf("The element is at the position %d\n", p);
	}
	else{
	    printf("Element is not found");
	}
	return 0;
}
int rec_linear_search(int a[], int key, int n){
	int i;
	while(a[i] > 0){
		if(a[i] == key){
			return i + 1;
		}
		else{
			i++;
			rec_linear_search(a, key, n);
		}
	}
	return -1;
}

