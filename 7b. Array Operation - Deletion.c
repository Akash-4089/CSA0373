#include<stdio.h>
int main(){
	int i, n, arr[100], pos, e;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter the position of the ele to be deleted: ");
	scanf("%d", &pos);
	
	if(pos>=n+1){
		printf("Deletion is not possible");
	}
	else{
		for(i=pos-1;i<n-1;i++){
			arr[i]=arr[i+1];
		}
	}
	//resultant array
	for(i=0;i<n-1;i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
