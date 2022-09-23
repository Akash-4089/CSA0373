#include<stdio.h>
int main(){
	int i, n, arr[100], pos, e;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter the element to be inserted: ");
	scanf("%d", &e);
	
	printf("Enter the position to be inserted at: ");
	scanf("%d", &pos);
	
	for(i=n-1;i>=pos-1;i--){
		arr[i+1]=arr[i];
	}
	arr[pos-1]=e;
	//resultant array
	printf("Array after insertion: ");
	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
